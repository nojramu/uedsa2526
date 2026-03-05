#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fibonacciSearch(const vector<int>& arr, int target) {
    int n = arr.size();
    
    // Initialize fibonacci numbers
    int fib2 = 0;  // (m-2)'th Fibonacci number
    int fib1 = 1;  // (m-1)'th Fibonacci number
    int fib = fib2 + fib1;  // m'th Fibonacci number
    
    // Find the smallest Fibonacci number greater than or equal to n
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }
    
    int offset = -1;
    
    while (fib > 1) {
        int i = min(offset + fib2, n - 1);
        
        if (arr[i] < target) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        } else if (arr[i] > target) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        } else {
            return i;
        }
    }
    
    // Check the last element
    if (fib1 && offset + 1 < n && arr[offset + 1] == target) {
        return offset + 1;
    }
    
    return -1;  // Element not found
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 60;
    
    int result = fibonacciSearch(arr, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}