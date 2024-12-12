#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> find_pairs_with_sum_k(const vector<int>& nums, const int k){
    vector<pair<int, int>> result;
    auto maximum = max_element(nums.begin(), nums.end());               // Need max element for sizing the hash table efficiently
    vector<int> hash_table(*maximum+1, -1);

    // Go through each element checking its counterpart's presence, also adding it to the hash table
    for(int i = 0; i < nums.size(); i++){
        if(hash_table[k - nums[i]] != -1) result.push_back(make_pair(hash_table[k - nums[i]], i));
        hash_table[nums[i]] = i;
    }

    return result;
}


int main(){
    // Example array and target sum
    vector<int> nums = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int k = 22;
    vector<pair<int, int>> pairs = find_pairs_with_sum_k(nums, k);

    cout << "The array is: [";
    for(int num: nums) cout << num << " ";
    cout << "]" << endl << "Elements in the array that sum up to " << k << " are:" << endl;
    for(pair<int, int> p: pairs){
        cout << "Indices " << p.first << " and " << p.second << ", which are " << nums[p.first] << " and " << nums[p.second] << endl;
    }
}