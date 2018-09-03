#include <iostream>
#include <vector>
using namespace std;

const int limit = 122; // value of 'z'

void counFreq(string str)
{
    vector<int> count(limit+1, false);
    
    for(int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    
    for(int i = 0; i <= limit; i++)
    {
        if(count[i] > 0)
            cout << (char)i << " " << count[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    string str = "GeeksforGeeks";
    counFreq(str);

    return 0;
}
