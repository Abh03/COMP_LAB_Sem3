#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>

class queue
{
    public:

    virtual void enqueue(int)=0;
    virtual int dequeue()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    virtual int front()=0;
    virtual int rear()=0;
    virtual void view()=0;
};





#endif
