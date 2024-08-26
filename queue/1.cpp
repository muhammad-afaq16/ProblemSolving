#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front, rear;
    int *Q;
};

void createQueue(struct Queue *q, int size)
{
    q->size = size;
    q->rear = q->front = -1;
    q->Q = new int[q->size];
};

void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is full, can't enqueue\n";
    }
    q->rear++;

    q->Q[q->rear] = x;
}

int dequeue(struct Queue *q)
{

    int x = -1;

    if (q->front == q->rear)
    {
        cout << "Queue is empty, can't dequeue\n";
        return x;
    }

    q->front++;

    x = q->Q[q->front];

    return x;
};

void Display(struct Queue *q)
{
    int i;
    if (q->front == q->rear)
    {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue elements are: ";
    for (i = q->front + 1; i <= q->rear; i++)
        cout << q->Q[i] << " ";
    cout << endl;
}

int main()
{
    struct Queue q;
    createQueue(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    cout<< dequeue(&q);

    Display(&q);

    return 0;
}