#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H
#include"linkedList.h"

using namespace std;

class linkedstack
{
    private:
    linkedList list;
    node *top;
    public:
    linkedstack() {top=NULL;}
    bool isEmpty();
    void push(int data);
    int returntop();
    int pop();
    void print();
};

#endif