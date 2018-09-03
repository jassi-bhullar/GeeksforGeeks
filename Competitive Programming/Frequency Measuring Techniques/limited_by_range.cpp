#include <iostream>
#include <vector>
using namespace std;

const int limit = 25; // Size of Range

// Subtract the smallest element
// 'A' to 'Z': Subtract 'A'
void counFreq(string str)
{
    vector<int> count(limit+1, false);
    
    for(int i = 0; i < str.length(); i++)
    {
        count[str[i] - 'A']++;
    }

    
    for(int i = 0; i <= limit; i++)
    {
        if(count[i] > 0)
            cout << (char)(i + 'A') << " " << count[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    string str = "GEEKSFORGEEKS";
    counFreq(str);

    return 0;
}
