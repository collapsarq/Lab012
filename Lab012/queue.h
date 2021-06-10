#ifndef QUEUE_h
#define QUEUE_h

class Queue {

private:
	int capacity;
	int size;
	int* queue;

public:
	
	Queue();
	Queue(int s);
	Queue(const Queue& q);
	~Queue();
	Queue& operator = (Queue& q);
	void input();
	void output();
	void push(int num);
	void pop();
	int set(int index, int value);
	int get(int index);
	int front();
	int back();
	int getsize();
	int getcapacity();
	int head, tail;
};
#endif