#ifndef QUEUE_h
#define QUEUE_h

class Queue {

private:
	int capacity;
	int size;
	int* queue;

public:
	int head, tail;
	Queue();
	Queue(int s);
	Queue(const Queue& q);
	~Queue();
	Queue& operator = (Queue& q);
	void input();
	void output();
	int set(int index, int value);
	int get(int index);
	void push(int num);
	void pop();
	int front();
	int back();
	int getsize();
	int getcapacity();
};
#endif