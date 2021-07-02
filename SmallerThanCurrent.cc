#include <iostream>
#include <vector>
using namespace std;

void smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        int count = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] < nums[i])
                count++;
        }
        ans.push_back(count);
    }
    for(auto x : ans)
        cout << x << " ";
}

int main(){

    vector<int> v {8, 1, 2, 2, 3};
    smallerNumbersThanCurrent(v);
    return 0;
}