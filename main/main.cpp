using namespace std;
#include"linkedList.h"

int main()
{
    linkedList l;
    node *n=new node();
    cout<<"List Empty:"<<l.isEmpty()<<endl;
    l.addToHead(5);
    l.addToTail(10);
    l.addToHead(15);
    l.traverse();
    cout<<endl;
    l.removeFromHead();
    l.remove(10);
    l.traverse();
    cout<<endl;
    cout<<"Searching element:"<< l.search(20);
    return 0;
}