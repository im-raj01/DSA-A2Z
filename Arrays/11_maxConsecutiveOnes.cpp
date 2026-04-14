#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxi = 0;
    int n = nums.size();
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(nums[i] == 1)cnt++;
        else{
            maxi = max(maxi,cnt);
            cnt = 0;
        }
    }
    if(cnt > maxi)maxi = cnt;
    return maxi;
}
int main()
{
    int n;cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
    cout<<findMaxConsecutiveOnes(vec);

 return 0;
}