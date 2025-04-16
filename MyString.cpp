#include<iostream>
#include<cstring>
using namespace std;


class MyString
{
    public :
    MyString() : buff(nullptr)
    {
        cout << "Default Constructor called" << endl;
    }

    MyString (const char* str)
    {
        std::cout << "parameterized construcotr called " << std::endl;
       if(str) {
        buff = new char [strlen(str)+1];
        strcpy(buff,str);
       }
       else
       {
        buff = nullptr; 
       }
    }

    MyString (const MyString& obj)
    {
        std::cout << "copy construcotr called " << std::endl;
        size = obj.size;
        buff = new char[size+1];
        strcpy(buff,obj.buff);
    }
  
   MyString& operator= (const MyString& obj)
   {
    std::cout << "Operator = callled " << std::endl;
       if(this == &obj) 
       return *this;

       delete [] buff;

        size = obj.size;
        buff = new char [size+1];
        strcpy(buff, obj.buff);

        return *this;

   }

       // Output operator
    friend std::ostream& operator<<(std::ostream& os, const MyString& obj)
    {
        if(obj.buff)
        os << obj.buff;
        return os;
    }    

    // Destructor
    ~MyString() {
        delete[] buff;
    }

    private :
    char *buff;
    int size;

};

int main()
{
    MyString s1("Hello");
    MyString s2(" World");

    MyString s3(s2);
    MyString s4;
    s4 = s3;

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;        
    std::cout << "s3: " << s3 << std::endl;
    std::cout << "s4: " << s4 << std::endl; 
return 0;
}