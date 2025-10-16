#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        nums.push_back(val);
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    // Step 1: Store value and original index
    vector<pair<int, int>> indexedNums;
    for (int i = 0; i < nums.size(); i++) {
        indexedNums.push_back({nums[i], i});
    }

    // Step 2: Sort by value
    sort(indexedNums.begin(), indexedNums.end());

    // Step 3: Two pointer approach
    int i = 0;
    int j = nums.size() - 1;
    while (i < j) {
        int sum = indexedNums[i].first + indexedNums[j].first;

        if (sum == target) {
            cout << "Indices: " << indexedNums[i].second << " and " << indexedNums[j].second << endl;
            return 0;
        }
        else if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << "No two numbers add up to the target." << endl;
    return 0;
}
