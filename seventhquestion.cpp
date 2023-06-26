#include<bits/stdc++.h>
using namespace std;

 bool isMonotonic(vector<int>& nums){
        bool flag = true;
        if(nums[0] < nums[nums.size() - 1]){
            flag = true;
        }else if(nums[0] > nums[nums.size() - 1]){
            flag = false;
        }else{
            return std::equal(nums.begin() + 1, nums.end(), nums.begin());
        }
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i + 1]){
                bool present = true;
                if(flag != present){
                    return false;
                }
            }else if(nums[i] > nums[i + 1]){
               bool present = false;
                if(flag != present){
                    return false;
                }
            }
        }
        return true;
    }

int main(){
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
      cin >> nums[i];
  }
  cout << isMonotonic(nums) << endl;
}
