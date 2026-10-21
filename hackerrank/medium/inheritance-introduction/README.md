# Inheritance Introduction

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

One of the important topics of Object Oriented Programming is Inheritance. Inheritance allows us to define a class in terms of another class, which allows us in the reusability of the code.Check out the code below:

	class Triangle{
    	public:
    		void triangle(){
        		cout<<"I am a triangle\n";
        	}
    };

The class Triangle has a function called triangle(). Now we create a class derived from the base class Triangle called Isosceles.

	class Isosceles : public Triangle{
    	public:
	    	void isosceles(){
    	    	cout<<"I am an isosceles triangle\n";
        	}
    };

Now we can create a derived class object and use it to access the functions of the base class.

	int main(){
    	Isosceles isc;
        isc.isosceles();
        isc.triangle();
        return 0;
    }
    
This code will print:

	I am an isosceles triangle
    I am a triangle
    
Now write a function in Isosceles class such that the output is as given below.

**Input Format**

 

**Constraints**

 

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T13:32:08.944Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/inheritance-introduction/problem)