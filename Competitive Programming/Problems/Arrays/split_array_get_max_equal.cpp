// source: https://www.geeksforgeeks.org/split-array-to-three-subarrays-such-that-sum-of-first-and-third-subarray-is-equal-and-maximum/
#include <bits/stdc++.h>
using namespace std;

/*
Store the prefix sum and suffix sum of the N numbers.
Hash the suffix sum’s index using a unordered_map in C++ or Hash-map in Java.
Iterate from the beginning of the array, and check if the prefix sum exists in the suffix array beyond the current index i.
If it does, then check for the previous maximum value and update accordingly.
*/

int sumFirst(int a[], int n)
{
    unordered_map<int, int> mp;
    int suf = 0;
    
    for(int i = n - 1; i >= 0; i--)
    {
        suf += a[i];
        mp[suf] = i;
    }

    int pre = 0;
    int maxi = -1;
    
    for(int i = 0; i < n; i++)
    {
        pre += a[i];

        if(mp[pre] > i)
        {
            if(pre > maxi)
                maxi = pre;
        }
    }

    if(maxi == -1)
        return 0;
    else
        return maxi;    
}

int main(int argc, char const *argv[])
{
    int a[] = { 1, 3, 1, 1, 4 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << sumFirst(a, n);

    return 0;
}
