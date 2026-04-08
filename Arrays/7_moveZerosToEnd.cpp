#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
     int n = nums.size();
     // 1st method: --> store all nonzero elements in temp array and then change it 
     //2nd one --> optimal: using 2 pointer

     int j = -1;
    //  ab pehela zero ka index chahiye mujhe
    for(int i = 0;i<n;i++){
        if(nums[i] == 0)j = i;
        break;
    }
    if(j == -1)return;

    for(int i = j+1; i<n;i++){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return;
}
int main(){
    int n;cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
   moveZeroes(vec);
   for(int i = 0;i<n;i++){
    cout<<vec[i]<<" ";
   }
}