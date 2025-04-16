#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    string str {"asdasasd"};
    unordered_map<char,int> mp;

    for(auto ch: str)
    {
        //cout << str[ch] << endl;
        mp[ch]++;
    }

    for(auto &it : mp)
    {
       cout << it.first << " ---> " << it.second << endl; 
    }

    return 0;
}