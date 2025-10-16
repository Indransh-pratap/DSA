#include <iostream>
#include <vector>
using namespace std;

// Function to remove all occurrences of 'val' in-place
int removeElement(vector<int>& nums, int val) {
    int k = 0; // index for placing non-val elements

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k; // Number of elements not equal to val
}

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the value to remove: ";
    cin >> val;

    int k = removeElement(nums, val);

    cout << "\nNumber of elements after removal: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
