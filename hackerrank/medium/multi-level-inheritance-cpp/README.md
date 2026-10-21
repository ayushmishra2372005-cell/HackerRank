# Inheritance Introduction

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

*This challenge is an extension of a previous challenge named Inheritance-Introduction. We highly recommend solving Inheritance-Introduction before solving this problem.*

In the previous problem, we learned about inheritance and how can a derived class object use the member functions of the base class.

In this challenge, we explore multi-level inheritance. Suppose, we have a class A which is the base class and we have a class B which is derived from class A and we have a class C which is derived from class B, we can access the functions of both class A and class B by creating an object for class C. Hence, this mechanism is called *multi-level inheritance*. (B inherits A and C inherits B.)

Create a class called *Equilateral* which inherits from *Isosceles* and should have a function such that the output is as given below.
    

**Input Format**

  

**Constraints**

 

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T13:32:14.100Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class triangle
{
    public:
    void Triangle()
    {
        cout<<"I am a triangle"<<endl;
    }
};
class isosceles : public triangle
{
    public:
    void isc()
    {
        cout<<"I am an isosceles triangle"<<endl;
        cout<<"In an isosceles triangle two sides are equal"<<endl;
    }  
};
int main() 
{
    isosceles a;
    a.isc();
    a.Triangle();
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem)