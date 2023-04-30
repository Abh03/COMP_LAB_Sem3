#include<iostream>
using namespace std;

class arrayStack
{
    int maxSize;
    int top;
    int *arr;
    
    public:
    arrayStack() {int maxSize;}
    arrayStack(int size)
    {
        maxSize=size;
        top=-1;
        arr=new int[size];
    }
    ~arrayStack() {delete[] arr;}
    bool isEmpty() ;
    bool isFull() ;
    void push( int data);
    int pop();
    int returntop() ;
    void display();
};