#include <iostream>
using namespace std;



int main()
{
    int a = 5;
    auto f = [a](){
     cout << "a: " << a << endl;
    };

    f();
    return 0;
}
