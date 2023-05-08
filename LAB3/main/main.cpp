#include"arrayQueue.h"
#include"llQueue.h"
using namespace std;

int main(int argv, char* argc[])
{
    cout<<"Array Queue:"<<endl<<endl;
    aQueue queues(2);
    queues.dequeue();
    queues.enqueue(45);
    queues.enqueue(55);
    queues.enqueue(65);
    queues.view();
    int temp=queues.dequeue();
    queues.view();
    cout<<"Dequeued value: "<<temp<<"."<<endl;
    queues.dequeue();
    queues.enqueue(45);
    queues.view();
    queues.enqueue(77);
    queues.view();
    queues.enqueue(88);
    queues.view();
    queues.dequeue();
    queues.enqueue(90);
    queues.view();
    int front=queues.front();
    int rear=queues.rear();
    cout<<"Returned front:"<<front<<endl<<"Returned rear:"<<rear<<endl;

    cout<<"\nLinked List Queue:"<<endl<<endl;
    lQueue queue;
    queue.dequeue();
    queue.enqueue(123);
    queue.enqueue(456);
    queue.enqueue(789);
    queue.view();
    temp=queue.dequeue();
    queue.view();
    cout<<"Dequeued value: "<<temp<<"."<<endl;
    queue.dequeue();
    queue.enqueue(101);
    queue.view();
    queue.enqueue(102);
    queue.view();
    queue.enqueue(103);
    queue.view();
    queue.dequeue();
    queue.view();
    front=queue.front();
    rear=queue.rear();
    cout<<"Returned front:"<<front<<endl<<"Returned rear:"<<rear<<endl;
    return 0;
}