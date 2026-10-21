#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class A
{
    public: 
    void eq()
    {
        cout<<"I am an equilateral triangle"<<endl;
    }  
};
class B: public A
{
    public:
    void is()
    {
        cout<<"I am an isosceles triangle"<<endl;
    }
};
class C: public B
{
    public:
    void t()
    {
        cout<<"I am a triangle";
    }
};
int main() 
{    
    C obj;
    obj.eq();
    obj.is();
    obj.t();
    return 0;
}
