#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "AABCAEF"; // unordered_map<key,value> mp;
    string str2= "AAB";



    cout << "hello " << endl;
    bool match=false;
    for(int i=0; i< str.length(); i++ )
    {
        int j=0;
        int k=i;
        while(str2[j] == str[k] && j < str2.length())
        {
            j++;
            k++;
        }
        if(j == str2.length())
        {
            cout << "string present" << endl;
            match = true;
            break;
        }
    }

    if (match == false)
    {
        cout << "string not present" <<   endl;
    }
    return 0;
}