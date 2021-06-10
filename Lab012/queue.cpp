#ifndef QUEUE
#define QUEUE
#include "queue.h"
#include <iostream>

Queue::Queue(int s)
{
    size = s;
    capacity = 2 * size;
    queue = new int[capacity];
    head = tail = 0;
}

Queue::Queue()
{
    size = 0;
    capacity = 1;
    queue = new int[1];
    head = tail = 0;
}

Queue::Queue(const Queue& q)
{
    size = q.size;
    capacity = 2 * size;
    queue = new int[capacity];
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
    queue = new int[capacity];
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
    std::cout << "Введите числа\n";
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

int Queue::set(int index, int value)
{
    if ((index <= 0) || (index > size))
    {
        std::cout << std::endl;
        std::cout << "Ошибка";
        return -1;   
    }
    else
    {
        queue[index] = value;
    }
}

int Queue::get(int index)
{
    if ((index <= 0) || (index > size))
    {
        std::cout << std::endl;
        std::cout << "Ошибка";
        return -1;
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
        std::cout << "Очередь пуста\n";
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
int Queue::getsize()
{
    return Queue::size;
}
int Queue::getcapacity()
{
    return Queue::capacity;
}
#endif