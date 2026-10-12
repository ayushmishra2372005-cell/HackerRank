#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class A
{
    public:
    int age;
    string name,lastname;
    int s;
    void setage()
    {
        cin>>age>>name>>lastname>>s;
    }
    void dis()
    {
        cout<<age<<endl;
        cout<<lastname<<", "<<name<<endl;
        cout<<s<<endl;
        cout<<endl;
    }
    void dis1()
    {
        cout<<age<<","<<name<<","<<lastname<<","<<s;
    }
};
int main() 
{
    A obj;
    obj.setage();
    obj.dis();
    obj.dis1();
    return 0;
}
