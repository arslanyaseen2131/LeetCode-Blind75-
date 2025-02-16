#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashmap; // To store numbers and their indices

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (hashmap.find(complement) != hashmap.end()) {
            return { hashmap[complement], i }; // Found the pair
        }

        hashmap[nums[i]] = i; // Store the number and its index
    }

    return {}; // Return empty if no pair found
}

int main() {
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else {
        cout << "No solution found." << endl;
    }

    return 0;
}
