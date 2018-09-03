#include <iostream>
#include <vector>
using namespace std;

void counFreq(int arr[], int n)
{
    vector<int> visited(n, false);

    // Traverse through array elements 
    // and count frequencies
    
    for(int i = 0; i < n; i++)
    {
        // Skip element which is already processed
        if(visited[i] == true)
            continue;
        
        int count = 1;
        
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        
        cout << arr[i] << " " << count << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = { 10, 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    counFreq(arr, n);

    return 0;
}
