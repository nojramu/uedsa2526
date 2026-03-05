#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int jumpSearch(const vector<int>& arr, int target) {
    int n = arr.size();
    if (n == 0)
        return -1;

    int step = sqrt(n);
    int prev = 0;
    
    // Finding the block where element is present (if it exists)
    while (prev < n && arr[min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);

        if (prev >= n)
            return -1;
    }
    
    // Linear search in the identified block
    while (prev < min(step, n) && arr[prev] < target) {
        prev++;
    }
    
    // If element is found
    if (prev < n && arr[prev] == target)
        return prev;
    
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 9;
    
    int result = jumpSearch(arr, target);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}