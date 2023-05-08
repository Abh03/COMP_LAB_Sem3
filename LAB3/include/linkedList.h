#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
using namespace std;

class node
{
    public:
    int info;
    node *next;
    node():info(0){next=NULL;}
    node(int d):info(d){}
    node(int d,node *n):info(d),next(n){}
    node(node *n){this->info=0;this->next=n;}
};

class linkedList
{
    node *HEAD;
    node *TAIL;
    public:
    linkedList():HEAD(NULL),TAIL(NULL){}
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, node* pred);
    void removeFromHead();
    void remove(int data);
    node* retrieve(int data);
    bool search(int data);
    void traverse();
    node* returnHead();
    node* returnTail();
    void removeFromTail();
};

#endif

