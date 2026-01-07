# Longest V-Shape Subarray Finder

This repository contains a C program designed to detect specific patterns within an integer array. The algorithm identifies the longest **"V-shaped"** and **"Inverted V-shaped"** contiguous subarrays based on neighbor comparisons.

## 🚀 Features

* **V-Shape Detection:** Identifies sequences that strictly decrease and then strictly increase (e.g., `5, 2, 1, 8, 9`).
* **Inverted V-Shape Detection:** Identifies sequences that strictly increase and then strictly decrease (e.g., `1, 5, 9, 4, 2`).
* **Algorithm:** Iterates through the array to determine direction trends without requiring dynamic user input.

## 🧠 Algorithm Logic

The problem is based on finding the longest contiguous subarray that satisfies the **"single direction change"** condition:

1.  **V-Shape:** The sequence must start by **decreasing** (`arr[i] > arr[i+1]`) and switch to **increasing** (`arr[i] < arr[i+1]`) exactly once.
    
2.  **Inverted V-Shape:** The sequence must start by **increasing** (`arr[i] < arr[i+1]`) and switch to **decreasing** (`arr[i] > arr[i+1]`) exactly once.

## 💻 How to Run

You can compile the code using any standard C compiler (like GCC).

```bash
gcc main.c -o main
./main
