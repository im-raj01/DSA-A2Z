#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums) {
    int largest = INT_MIN;
    for(int i = 0;i<nums.size();i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    return largest;
}
int main(){
    int n;cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
    int ans = largestElement(vec);
    cout<<ans<<endl;
}