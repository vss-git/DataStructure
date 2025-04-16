#include<iostream>
#include<unordered_map>
using namespace std;


class Solution {
public:
    string LongestSubstring(string s) {

    unordered_map<char,int> lastseen;
    int maxL=0;
    int left=0;
    int startindex=0;

    for(int right =0; right < s.length(); right++)
    {
       char c  = s[right];

       if (lastseen.find(c) != lastseen.end() && lastseen[c] >= left)
       {
          left = lastseen[c]+1;
       }
       
       lastseen[c] = right;
       if ((right -left+1) > maxL)
       {
        maxL = right-left+1;
        startindex = left;
       }
    }
    
    return s.substr(startindex,maxL); 
        
    }
};

int main()
{
   string s = "elephantt";
   Solution obj;
   string substr = obj.LongestSubstring(s);
   cout << "length of longest sub-string without repeat : " << substr << endl;
    return 0;
}