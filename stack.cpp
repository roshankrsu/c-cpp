#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) { // j starts from i+1
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 4}; // use vector, not array

    if (containsDuplicate(nums))
        cout << "Contains duplicate";
    else
        cout << "No duplicates";

    return 0;
}
