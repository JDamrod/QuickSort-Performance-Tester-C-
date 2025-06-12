#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Swap(int tab[], int i, int j) {
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

int QuickSort(int tab[], int left, int right) {
    int comparisons = 0;

    if (left < right) {
        int pos = left;
        int i = left + 1;

        while (i <= right) {
            comparisons++;
            if (tab[i] < tab[left]) {
                pos++;
                Swap(tab, pos, i);
            }
            i++;
        }

        Swap(tab, pos, left);

        comparisons += QuickSort(tab, left, pos - 1);
        comparisons += QuickSort(tab, pos + 1, right);
    }

    return comparisons;
}

int RunQuickSort(int tab[], int length) {
    return QuickSort(tab, 0, length - 1);
}

double QuickSortStatistics(int max, int length) {
    int* tab = new int[length];
    int totalComparisons = 0;

    for (int k = 0; k < max; ++k) {
        for (int i = 0; i < length; ++i) {
            tab[i] = rand() % 10000;
        }
        totalComparisons += RunQuickSort(tab, length);
    }

    delete[] tab;
    return static_cast<double>(totalComparisons) / max;
}


void TestQuickSort() {
    ofstream fout("quicksort.dat");

    for (int length = 10; length <= 10000; length += 10) {
        double avgComparisons = QuickSortStatistics(1000, length);
        fout << length << " " << avgComparisons << endl;
        cout << "length = " << length << " avg comparisons = " << avgComparisons << endl;
    }

    fout.close();
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "Generowanie danych dla QuickSort..." << endl;
    TestQuickSort();
    cout << "Dane zapisane do quicksort.dat" << endl;

    return 0;
}
