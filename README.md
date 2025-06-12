# ⚡ QuickSort Performance Tester (C++)

A console C++ application that evaluates the performance of the **QuickSort algorithm** by calculating the **average number of comparisons** over 1000 runs per array size. Results are saved for graphing or further analysis.

## 🚀 Features

- Implements recursive QuickSort
- Randomly generates integer arrays
- Measures and averages comparison counts
- Outputs results to `quicksort.dat` for each array size (10 to 10,000)
- Useful for algorithm performance analysis or plotting

## 💡 Concepts Used

- QuickSort algorithm (Lomuto-style partitioning)
- Performance benchmarking
- Random number generation
- File output (`ofstream`)
- Dynamic memory allocation

## 📂 Project Structure

📁 quicksort-performance/

  └── main.cpp # Main source file

## 📊 Output Format  
10 15.1  
20 48.7  
...  

Each line shows the array size and the average number of comparisons made by QuickSort on that size.

## 🛠️ How to Run

1. Compile the program:
```bash
g++ main.cpp -o quicksort
./quicksort
```
2. After execution, open quicksort.dat to view the results.

## 👤 Author
**Mark Viediernikov**  
Computer Science Student
