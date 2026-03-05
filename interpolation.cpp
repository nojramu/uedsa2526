#include <iostream>
#include <vector>
using namespace std;

// Interpolation Search function
// Returns the index of the target value if found, otherwise returns -1
// Assumes the array is sorted and uniformly distributed
int interpolationSearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right && target >= arr[left] && target <= arr[right]) {
        // Estimate position using linear interpolation
        int pos = left + (int)((double)(target - arr[left]) / (arr[right] - arr[left]) * (right - left));
        
        // If target is found at pos
        if (arr[pos] == target) {
            return pos;
        }
        
        // If target is smaller, search in left half
        if (arr[pos] > target) {
            right = pos - 1;
        }
        // If target is larger, search in right half
        else {
            left = pos + 1;
        }
    }
    
    return -1; // Target not found
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 60;
    
    int result = interpolationSearch(arr, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}