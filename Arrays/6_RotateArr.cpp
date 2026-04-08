#include<bits/stdc++.h>
using namespace std;
// for right rotation - store the last k elements in temp
// for left rotation - store the first k elements in  temp array


/*  important

    FOR RIGHT ROTATION BY K STEPS:
        1. reverse the entire arr
        2. reverse the first k elements
        3. reverse the remaining n-k elements
    
    FOR LEFT ROTATION BY K STEPS:
        1. reverse the first k elements
        2. reverse the remaining n-k elements
        3. reverse the entire arr
*/
void rotateArrToRight(vector<int>& nums, int k) {
    int n = nums.size();
    if(n == 0)return;
    // if k > n --> normalize k 
    k = k%n;
    int temp[k];
    for(int i = n-k; i<n;i++){
        temp[i-n+k] = nums[i];
    }
    //now right shift rem first n-k elements to k steps ahead 
    // for(int i = 0; i<n-k;i++){
    //     nums[i+k] =  nums[i];
    // } --> this is wrong why?

    for(int i=n-k;i>=0;i--){
        nums[i+k] = nums[i];
    }
    for(int i = 0;i<k;i++){
        nums[i] = temp[i];
    }
}
int main(){
    int n,k;cin>>n;
    cin>>k;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        vec[i] = x;
    }
    
    rotateArrToRight(vec,k);
    for(int i = 0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}