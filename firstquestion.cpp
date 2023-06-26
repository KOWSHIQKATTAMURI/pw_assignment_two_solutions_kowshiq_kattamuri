#include<bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums){
  sort(nums.begin(), nums.end());
  int ans = 0;
  for(int i = 0; i < nums.size() - 1; i = i + 2){
      ans += min(nums[i], nums[i + 1]);
  }
  return ans;
}

int main(){
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
      cin >> nums[i];
  }
  cout << arrayPairSum(nums) << endl;
}
