#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    // container with non-repeating keys
    unordered_map<int, int> mp;

    
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for(auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);

    return 0;
}
