#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

// An optimized version of Bubble Sort 
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}

int main() {
    vector<int> arr = { 5, 6, 1, 3 };

    auto start = chrono::high_resolution_clock::now();
    bubbleSort(arr); 
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duration = end - start;
    for (int num : arr)
        cout << num << " ";
    cout << "\nEstimated time: " << duration.count() << " ms" << endl;
}