#include<bits/stdc++.h>
using namespace std;
void rotateArrayByOne(vector<int>& nums) {
    int n = nums.size();
    int temp = nums[0];
    for(int i = 0;i<n-1;i++){
        nums[i] = nums[i+1];
    }
    nums[n-1] = temp;
}
int main(){
    int n;cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
   rotateArrayByOne(vec);
   for(int i = 0;i<n;i++){
    cout<<vec[i]<<" ";
   }
}