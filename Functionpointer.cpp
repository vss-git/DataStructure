#include<iostream>

using namespace std;
void check ( int a, int b)
{
    assert(a == 4);
}

int add(int a, int b)
{
    return (a+b);
}

void print(int a)
{
    cout << "a- " << a << endl;
}


int main()
{
    int (*fun)(int, int) = add;
    // fun();
    auto a = fun(5, 6);
    void (*show)(int) = print;
    show(a); 
    //cout << "a: " << a << endl;
    return 0;
}