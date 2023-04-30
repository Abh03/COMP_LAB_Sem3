#include<iostream>
using namespace std;

class arrayStack
{
    int maxSize;
    int top;
    int *arr;
    
    public:
    arrayStack()
    {
        int maxSize;
    }
    arrayStack(int size){
                maxSize=size;
                top=-1;
                arr=new int[size];}
    ~arrayStack()
    {
        delete[] arr;
    }
    bool isEmpty() const;
    bool isFull() const;
    void push(const int data);
    int pop();
    int rtop() const;
    void display();
};