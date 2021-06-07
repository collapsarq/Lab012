#ifndef QUEUE
#define QUEUE
#include "queue.h"
#include <iostream>

Queue::Queue(int s)
{
    size = s;
    queue = new int[size];
    head = tail = 0;
}

Queue::Queue()
{
    size = 5;
    queue = new int[size];
    head = tail = 0;
}

Queue::Queue(const Queue& q)
{
    size = q.size;
    queue = new int[size];
    head = tail = 0;
}

Queue& Queue :: operator = (Queue& q)
{
    if (&q == this)
    {
        return *this;
    }

    if (size < q.size)
    {
        size = q.size;
    }
    delete[] queue;
    queue = new int[size];
    for (int i = 0; i < size; i++)
    {
        if (i < q.size)
        {
            queue[i] = q.queue[i];
        }
        else
        {
            queue[i] = 0;
        }
    }
    return *this;
}
void Queue::input()
{
    std::cout << "¬ведите числа\n";
    for (int i = 0; i < size; i++)
    {
        int temp;
        std::cin >> temp;
        Queue::push(temp);
    }

}

void Queue::output()
{
    for (int i = Queue::head + 1; i < Queue::tail + 1; i++)
    {
        std::cout << " " << Queue::queue[i];
    }
}

Queue :: ~Queue()
{
    if (queue)
    {
        delete[] queue;
    }
}

void Queue::set(int index, int value, int& error)
{
    if ((index < 0) || (index >= size))
    {
        error = 1;
    }
    else
    {
        queue[index] = value;
    }
}

int Queue::get(int index, int value, int& error)
{
    if ((index < 0) || (index >= size))
    {
        error = -1;
    }
    else
    {
        return queue[index];
    }
}

void Queue::push(int num)
{
    tail++;
    queue[tail] = num;
}

void Queue::pop()
{
    if (head == tail)
    {
        std::cout << "ќчередь пуста\n";
    }
    head++;
}

int Queue::back()
{
    return queue[tail];
}

int Queue::front()
{
    return queue[head + 1];
}
#endif