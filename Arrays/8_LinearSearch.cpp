#include<bits/stdc++.h>
using namespace std;
#define ll long long

int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] == target)return i;
        }
        return -1;

 }
int main()
{
    int n, target;
    cin>>n>>target;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
    cout<<linearSearch(vec,target)<<endl;

 return 0;
}