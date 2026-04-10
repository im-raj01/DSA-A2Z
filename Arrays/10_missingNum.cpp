#include<bits/stdc++.h>
using namespace std;
#define ll long long

/* Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.*/

// method 1 : using hashing --> store all elements in a hash and then 
// run a loop from 0 to n and check if hash[i] == 0 then that i element is missing.
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int totalSum = n*(n+1)/2;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += nums[i];
    }
    int missingNum = totalSum - sum;
    return missingNum;
}
int main()
{
    int n;cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    cout<<missingNumber(vec);
 return 0;
}