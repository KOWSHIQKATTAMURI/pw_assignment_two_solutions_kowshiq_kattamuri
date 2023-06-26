#include<bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums){
   int ans = 0;
   unordered_map<int, int> kow;
   for(auto i : nums){
      kow[i]++;
   }
   for(auto it : kow){
      if(kow.find(it.first - 1) != kow.end()){
           ans = max(ans, it.second + kow[it.first - 1]);
      }
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
  cout << findLHS(nums) << endl;
}
