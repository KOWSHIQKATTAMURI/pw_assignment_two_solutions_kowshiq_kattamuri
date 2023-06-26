#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n){
   if(n == 0){  
     return true;
   }
   for(int i = 0; i < flowerbed.size(); i++){
        if(flowerbed[i] == 0){
            bool left = i == 0 or flowerbed[i - 1] == 0;
            bool right = i == flowerbed.size() - 1 or flowerbed[i + 1] == 0;
            if(left and right){
               flowerbed[i] = 1;
               n--;
              if(n == 0){
                 return true;
              }
            }
        }
  }
  return false;
}

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
      cin >> nums[i];
  }
  cout << canPlaceFlowers(nums, m) << endl;
}
