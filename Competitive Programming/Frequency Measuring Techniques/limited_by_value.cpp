#include <iostream>
#include <vector>
using namespace std;

// limit should not be very large
void counFreq(int arr[], int n, int limit)
{
    vector<int> count(limit+1, false);

    
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    
    for(int i = 0; i <= limit; i++)
    {
        if(count[i] > 0)
            cout << i << " " << count[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 5, 6, 6, 5, 6, 1, 2, 3, 10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int limit = 10;
    counFreq(arr, n, limit);

    return 0;
}
