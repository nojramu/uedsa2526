#include <iostream>
#include <vector>
using namespace std;

// Linear search function
// Returns the index of the target if found, otherwise returns -1
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70};
    int target = 40;
    
    int result = linearSearch(numbers, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    
    return 0;
}