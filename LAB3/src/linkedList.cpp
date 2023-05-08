
using namespace std;
#include"linkedList.h"

bool linkedList::isEmpty()
{
    if(HEAD==NULL)
    return 1;
    else
    return 0;
}

void linkedList::addToHead(int data)
{
    node *newNode=new node();
    newNode->info=data;
    newNode->next=HEAD;
    HEAD=newNode;
    if(TAIL==NULL)
    TAIL=HEAD;
}

void linkedList::addToTail(int data)
{
    node *newNode=new node();
    newNode->info=data;
    newNode->next=NULL;
    if(TAIL==NULL)
    {
        TAIL=newNode;
        HEAD=newNode;
    }
    else
    {
        TAIL->next=newNode;
        TAIL=newNode;
    }
}

void linkedList::add(int data, node* pred)
{
    if(HEAD==NULL)
    addToHead(data);
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
    if(HEAD==NULL)
    cout<<"Cannot remove Head. List empty."<<endl;
    else
    {
        node *toDel=HEAD;
        int temp=toDel->info;
        HEAD=HEAD->next;
        delete toDel;
        if(HEAD==NULL)
        TAIL=NULL;
    }
}

void linkedList::remove(int data)
{
    if(HEAD==NULL)
    cout<<"Cannot remove. List empty."<<endl;
    else if(HEAD->info==data)
    removeFromHead();
    else
    {
        node *prev=HEAD;
        node *temp=HEAD->next;
        while(temp!=NULL)
        {
            if(temp->info==data)
            break;
            else
            {
                prev=prev->next;
                temp=temp->next;
            }
        }
        if(temp!=NULL)
        {
            prev->next=temp->next;
            int tempp=temp->info;
            delete temp;
            if(prev->next==NULL)
            TAIL=prev;
        }
    }
}

node* linkedList::retrieve(int data)
{
    node *pa=new node(HEAD);
    while(1)
    {
        if(pa==NULL || pa->info==data)
        break;
        pa=pa->next;
    }
    if(pa==NULL)
    {
        cout<<"Data not found. Retrieval Unsuccessful."<<endl;
        return NULL;
    }
    else
    {
        return pa;
    }
}

bool linkedList::search(int data)
{
    node *p;
    p=HEAD;
    while(1)
    {
        if(p==NULL || p->info==data)
        break;
        p=p->next;
    }
    if(p==NULL)
    return false;
    else
    return true;
}


void linkedList::traverse()
{
    node *p=HEAD;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}

node* linkedList::returnHead()
{
    return HEAD;
}

node* linkedList::returnTail()
{
    return TAIL;
}

void linkedList::removeFromTail()
{
    if(TAIL==NULL)
    cout<<"List empty. Cannot remove Tail."<<endl;
    else if(HEAD==TAIL)
    removeFromHead();
    else
    {
        node* temp=HEAD;
        while(temp->next!=TAIL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        TAIL=temp;
    }
}