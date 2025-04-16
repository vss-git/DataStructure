#include<iostream>
using namespace std;

class functors
{
    public:

    functors()
    {
       cout << "Default constructor callled... " << endl;
    }
    functors(int x): a(x)
    {
       cout << "constructor callled... " << endl;
    }

    void operator() (int b) const
    {
        cout << "b : " << b << endl;
    }

    int a;
}; 

int main()
{
     functors f;
     f(6);
    return 0;
}