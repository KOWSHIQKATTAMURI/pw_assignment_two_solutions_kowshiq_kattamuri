#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int>& candyType){
    unordered_set<int> s;
    for(int i = 0; i < candyType.size(); i++){
       s.insert(candyType[i]);
    }
    return s.size() <= candyType.size()/2 ? s.size() : candyType.size()/2;
}

int main(){
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
      cin >> nums[i];
  }
  cout << distributeCandies(nums) << endl;
}
