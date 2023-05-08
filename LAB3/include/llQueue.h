#ifndef LLQUEUE_H
#define LLQUEUE_H

#include"linkedList.h"
#include"queue.h"
using namespace std;

class lQueue:public queue
{
    linkedList list;
    public:
    lQueue(){};
    void enqueue(int);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int rear();
    void view();
};

#endif