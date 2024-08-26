#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue
{

private:
    int front;
    int rare;
    int size;
    int *Q;

public:
    Queue()
    {
        front = -1;
        rare = -1;
        size = 10;
        Q = new int[size];
    }
    Queue(int size)
    {
        front = -1;
        rare = -1;
        this->size = size;
        Q = new int[size];
    }

    void enqueue(int x);
    int dequeue();
    void Display();
};

void Queue::enqueue(int x)
{
    // check if queue is empty
    if (rare == size - 1)
    {
        cout << "Queue is full. Cannot enqueue" << endl;
    }
    else
    {

        rare++;
        Q[rare] = x;
    }
};

int Queue::dequeue()
{
    // check if queue is empty
    int x = -1;
    if (front == rare)
    {
        cout << "Queue is empty. Cannot dequeue" << endl;
    }
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}

void Queue::Display()
{
    for (int i = front + 1; i <= rare; i++)
        cout << Q[i] << " ";
    cout << endl;
}

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();

    q.Display();
    return 0;
}