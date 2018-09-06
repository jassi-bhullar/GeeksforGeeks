#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // key value
    unordered_map<string, double> umap;

    // just insert values
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;

    // insert function
    umap.insert(make_pair("e", 2.718));

    string key = "PI";

    // Check wheather key exists
    if(umap.find(key) == umap.end())
    {
        cout << key << " not found\n";
    } else 
    {
        cout << "Found " << key << ": " << umap[key] << endl;
    }

    key = "lamda";
    if(umap.find(key) == umap.end())
    {
        cout << key << " not found\n";
    } else 
    {
        cout << "Found " << key << ": " << umap[key] << endl;
    }

    // iteratoring over all the elements
    unordered_map<string, double>::iterator itr;
    cout << "\nAll Elements:\n";
    for(itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    return 0;
}
