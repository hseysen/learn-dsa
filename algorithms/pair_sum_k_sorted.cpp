#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> find_pairs_with_sum_k_sorted(const vector<int>& nums, const int k){
    vector<pair<int, int>> result;
    int i = 0, j = nums.size() - 1;             // Two pointers - one at the beginning, one at the end
    
    while(i < j){
        if(nums[i] + nums[j] == k) result.push_back(make_pair(i++, j--));
        else if(nums[i] + nums[j] > k) j--;
        else if(nums[i] + nums[j] < k) i++;
    }

    return result;
}

int main(){
    // Example array and target sum
    vector<int> nums = {-80, -65, -50, -40, -20, -5, 5, 25, 40, 55, 70, 85, 100, 115, 130, 145, 160, 175, 190, 205};
    int k = 110;
    vector<pair<int, int>> pairs = find_pairs_with_sum_k_sorted(nums, k);

    cout << "The sorted array is: [";
    for(int num: nums) cout << num << " ";
    cout << "]" << endl << "Elements in the sorted array that sum up to " << k << " are:" << endl;
    for(pair<int, int> p: pairs){
        cout << "Indices " << p.first << " and " << p.second << ", which are " << nums[p.first] << " and " << nums[p.second] << endl;
    }
}