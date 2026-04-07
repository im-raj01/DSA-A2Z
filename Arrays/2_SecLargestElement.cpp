#include<bits/stdc++.h>
using namespace std;
int secondLargestElement(vector<int>& nums) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int n = nums.size();
    if(n < 2 ){
        return -1;
    }
    for(int i = 0;i<nums.size();i++){
        if(nums[i] > largest){
            secondLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secondLargest && nums[i]!=largest){
            secondLargest = nums[i];
        }
    }
    return secondLargest;     
}
int main(){
    int n;cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
    int ans = secondLargestElement(vec);
    cout<<ans<<endl;
}