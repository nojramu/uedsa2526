#include <iostream>
#include <vector>
using namespace std;

// Binary search helper function
int binarySearch(vector<int>& arr, int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Exponential search function
int exponentialSearch(vector<int>& arr, int target) {
    int n = arr.size();
    
    // If first element is target
    if (arr[0] == target) {
        return 0;
    }
    
    // Find range where target is likely to be
    int i = 1;
    while (i < n && arr[i] <= target) {
        i *= 2;
    }
    
    // Binary search in the found range
    return binarySearch(arr, i / 2, min(i, n - 1), target);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 10, 15, 20, 30, 50, 100};
    int target = 15;
    
    int result = exponentialSearch(arr, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}