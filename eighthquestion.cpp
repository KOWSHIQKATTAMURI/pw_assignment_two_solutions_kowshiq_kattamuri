#include<bits/stdc++.h>
using namespace std;

int smallestRangeI(vector<int>& nums, int k){
    int top = *max_element(nums.begin(), nums.end());
    int bottom = *min_element(nums.begin(), nums.end());
    return max(0, top - bottom - 2*k);
}

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
      cin >> nums[i];
  }
  cout << smallestRangeI(nums, m) << endl;
}
