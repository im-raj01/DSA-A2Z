#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n == 0)return 0;
    int i = 0;
    for(int j = 1; j<n;j++){
        if(nums[i] != nums[j]){
            nums[i+1] = nums[j];
            i = i+1;
        }
    }
    return i+1;
}
int main(){
    int n;cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
    cout<<removeDuplicates(vec)<<endl;
}