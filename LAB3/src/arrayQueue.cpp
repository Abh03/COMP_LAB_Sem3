#include"arrayQueue.h"
using namespace std;

void aQueue::enqueue(int data)
{
    if(isFull())
    cout<<"Cannot enqueue "<<data<<". Queue full"<<endl;
    else
    {
        arr[++r]=data;
        cout<<" Enqueued"<<data<<endl;
    }
}

int aQueue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue empty.Not dequeued"<<endl;
        return 0;
    }
    else
    {
        cout<<arr[++f]<<" was dequeued successfully."<<endl;
        return arr[f];
    }
}

bool aQueue::isEmpty()
{
    if(r==f)
    return 1;
    else
    return 0;
}

bool aQueue::isFull() 
{
    if(r==maxSize-1)
    return 1;
    else
    return 0;
}

int aQueue::front()
{
    if(isEmpty())
    {
        cout<<"Queue empty."<<endl;
        return 0;
    }
    else
    return arr[f+1];
}

int aQueue::rear()
{
    if(isEmpty())
    {
        cout<<"Queue empty."<<endl;
        return 0;
    }
    else
    return arr[r];
}

void aQueue::view()
{
    cout<<"Queue: (Front --> Rear): ";
    for(int i=f+1;i<=r;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}