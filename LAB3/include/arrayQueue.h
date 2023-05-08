#include"queue.h"
using namespace std;
#define MAX_SIZE 10

class aQueue:public queue
{
    int maxSize,f,r;
    int *arr;
    public:
    aQueue():maxSize(MAX_SIZE),f(-1),r(-1),arr(new int[maxSize]){}
    aQueue(int size):maxSize(size),f(-1),r(-1),arr(new int[maxSize]){}
    ~aQueue()
    {
        delete[] arr;
    }
    void enqueue(int);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int rear();
    void view();
};