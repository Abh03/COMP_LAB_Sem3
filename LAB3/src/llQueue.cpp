#include"llQueue.h"
using namespace std;

void lQueue::enqueue(int a)
{
    list.addToTail(a);
    cout<<" Enqueued."<<a<<endl;
}

int lQueue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty. Cannot dequeue. Returning 0."<<endl;
        return 0;
    }
    int temp = list.returnHead()->info;
    list.removeFromHead();
    cout<<temp<<" was dequeued successfully."<<endl;
    return temp;
}

bool lQueue::isEmpty()
{
    if(list.isEmpty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool lQueue::isFull()
{
    cout<<"Linked list stack cannot be full."<<endl;
    return 0;
}

int lQueue::front()
{
    if(isEmpty())
    {
        cout<<"Queue empty."<<endl;
        return 0;
    }
    else
    {
        cout<<"Front element "<<list.returnHead()->info<<" was returned."<<endl;
        return list.returnHead()->info;
    }
}

int lQueue::rear()
{
    if(isEmpty())
    {
        cout<<"Queue empty."<<endl;
        return 0;
    }
    else
    {
        cout<<"Rear element "<<list.returnTail()->info<<" was returned."<<endl;
        return list.returnTail()->info;
    }
}

void lQueue::view()
{
    if(isEmpty())
    cout<<"Queue empty."<<endl;
    else
    {
        cout<<"Queue: (Front --> Rear): ";
        list.traverse();
    }
}
