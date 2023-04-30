#include"arrayStack.h"
using namespace std;

bool arrayStack::isEmpty() const
{
    return top==-1;
}

bool arrayStack::isFull() const
{
    return top==maxSize-1;
}

void arrayStack::push(const int data) 
{
    if(isFull())
    cout<<"Stack Full. Cannot push."<<endl;
    else
    {
        arr[++top]=data;
        cout<<data<<" was successfully added."<<endl;
    }
}

int arrayStack::pop()
{
    if(isEmpty())
    {
    cout<<"Stack empty. Cannot pop. Returning 0."<<endl;
    return 0;
    }
    else
    {
        int data=arr[top--];
        cout<<data<<" is successfully popped."<<endl;
        return data;
    }
}

int arrayStack::rtop() const
{
    if(isEmpty())
    {
        cout<<"Stack empty. No top element. Returning 0."<<endl;
        return 0;
    }
    else
    {
        cout<<arr[top]<<" returned successfully."<<endl;
        return arr[top];
    }
}

void arrayStack::display()
{
    if(isEmpty())
    cout<<"Stack empty. Cannot display."<<endl;
    else
    {
        int i;
        cout<<"Stack (TOP --> BOTTOM): ";
        for(i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}