# Class

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A *class* defines a blueprint for an object. We use the same syntax to declare objects of a class as we use to declare variables of other basic types. For example:

    Box box1;          // Declares variable box1 of type Box
    Box box2;          // Declare variable box2 of type Box

Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the $5$ exams given during this semester.

Create a class named $Student$ with the following specifications:

- An instance variable named $scores$ to hold a student's $5$ exam scores.
- A *void input()* function that reads $5$ integers and saves them to $scores$.
- An *int calculateTotalScore()* function that returns the sum of the student's scores.


**Input Format**

Most of the input is handled for you by the locked code in the editor.

In the `void Student::input()` function, you must read $5$ scores from stdin and save them to your $scores$ instance variable.

**Constraints**  
$1 \leq n \leq 100$  
$0 \leq exam score \leq 50$

**Output Format**

In the `int Student::calculateTotalScore()` function, you must return the student's total grade (the sum of the values in $scores$). 	

The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T14:41:22.756Z  

```cpp
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/classes-objects/problem)