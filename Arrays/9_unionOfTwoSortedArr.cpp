#include <bits/stdc++.h>
using namespace std;
#define ll long long
// method1: put all elements in a map and then copy the keys in ans array
// method 2: put all elements in a set and then add all in vector then sort it.
// method 3: since array is sorted we can do that using two pointer
vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    int i = 0, j = 0;
    vector<int> ans;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            ans.push_back(nums2[j]);
            j++;
        }
        else
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    while (i < m)
    {
        ans.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        ans.push_back(nums2[j]);
        j++;
    }
    return ans;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> arr1(m), arr2(n);
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr1[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr2[i] = x;
    }
    vector<int> ans = unionArray(arr1, arr2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}