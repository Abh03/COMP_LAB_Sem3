#include "linkedStack.h"
#include "linkedList.h"
using namespace std;

bool linkedstack::isEmpty() 
{
    if (list.isEmpty())
        return 1;
    else
        return 0;
}

void linkedstack::push(int data)
{
    list.addToHead(data);
    cout<<data<<" added to stack successfully."<<endl;
    top=list.returnHead();
}

int linkedstack::pop()
{
    if(top==NULL)
    {
        cout<<"Stack Empty.Cannot pop. Returning 0."<<endl;
        return 0;
    }
    else
    {
        int temp=top->info;
        top=top->next;
        list.removeFromHead();
        cout<<temp<<" successfully popped."<<endl;
        return temp;
    }
}

int linkedstack::returntop()
{
    if(top==NULL)
    {
        cout<<"Stack Empty.Cannot return top. Returning 0."<<endl;
        return 0;
    }
    else
    {
        cout<<top->info<<" successfully returned."<<endl;
        return top->info;
    }
}

void linkedstack::print()
{
    if(top==NULL)
    cout<<"Stack is empty."<<endl;
    else
    {
        node *p=list.returnHead();
        cout<<"Stack (TOP --> BOTTOM): ";
        while(p!=NULL)
        {
            cout<<p->info<<" ";
            p=p->next;
        }
        cout<<endl;
    }
}