using namespace std;
#include"linkedList.h"

int main()
{
    linkedList l;
    node *n=new node();
    cout<<l.isEmpty()<<endl;
    l.addToHead(5);
    l.addToTail(10);
    l.addToHead(15);
    l.traverse();
    n=l.retrieve(10);
    cout<<n->info<<endl;
    l.add(30,n);
    l.traverse();
    l.removeFromHead();
    l.remove(60);
    l.traverse();
    cout<<l.search(20);
    return 0;
}