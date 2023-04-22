#include "linkedList.h"
using namespace std;

bool linkedList::isEmpty()
{
    if (HEAD==NULL)
        return true;
    else
        return false;
}

void linkedList::addToHead(int data)
{
    node *newNode=new node();
    newNode->info=data;
    newNode->next=HEAD;
    HEAD=newNode;
    if (TAIL==NULL)
        TAIL=HEAD;
}

void linkedList::addToTail(int data)

{
    node *newNode=new node();
    newNode->info=data;
    newNode->next=NULL;
    if (TAIL==NULL)
    {
        HEAD=newNode;
        TAIL=newNode;
    }
    else
    {
        TAIL->next=newNode;
        TAIL=newNode;
    }
}

void linkedList::add(int data, node* pred)
{
    if (HEAD==NULL)
        {addToHead(data);}
    else
    {
        node *newNode=new node();
        newNode->info=data;
        newNode->next=pred->next;
        pred->next=newNode;
    }
}

void linkedList::removeFromHead()
{
    if (HEAD==NULL)
        cout<<"List is empty. Stack underflow!"<<endl;
    else
    {
        node *remove=HEAD;
        HEAD=HEAD->next;
        delete remove;
        if(HEAD==NULL)
        TAIL=NULL;
    }
}

void linkedList::remove(int data)
{
    if (HEAD==NULL)
        cout<<"List is empty. Stack underflow!"<<endl;
    else if (HEAD->info==data)
        removeFromHead();
    else
    {
        node *prev=HEAD;
        node *ptr=HEAD->next;
        while (ptr!=NULL)
        {
            if (ptr->info==data)
                break;
            else
            {
                prev=prev->next;
                ptr=ptr->next;
            }
        }
        if(ptr!=NULL)
        {
            prev->next=ptr->next;
            delete ptr;
            if(prev->next==NULL)
            TAIL=prev;
        }
    }
}

node* linkedList::returnHead() {return HEAD;}

node* linkedList::retrieve(int data)
{
    node *ptr=new node(HEAD);
    if (ptr==NULL)
    {
        cout<<"List is Empty"<<endl;
        return NULL;
    }
    while (ptr->next->next != NULL)
    {
        if (ptr->info==data)
            return ptr;;
        ptr=ptr->next;
    }
    if (ptr->next==NULL && ptr->info !=data)
        cout<<"Data not found"<<endl;
    return 0;
}

bool linkedList::search(int data)
{
    node *ptr=new node(HEAD);
    if (ptr==NULL)
    {
        cout<<"List is Empty"<<endl;
        return false;
    }
    while (ptr->next->next != NULL)
    {
        if (ptr->info==data)
            return true;;
        ptr=ptr->next;
    }
    if (ptr->next==NULL && ptr->info !=data)
        cout<<"Data not found"<<endl;
    return false;
}


void linkedList::traverse()
{
    node *ptr=HEAD;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->next;
    }
}

