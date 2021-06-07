#ifndef QUEUE_h
#define QUEUE_h

class Queue {

private:
	int size;
	int* queue;
	int head, tail;

public:
	Queue();
	Queue(int s);
	Queue(const Queue& q);
	~Queue();
	Queue& operator = (Queue& q);
	void input();
	void output();
	void set(int index, int value, int& error);
	int get(int index, int value, int& error);
	void push(int num);
	void pop();
	int front();
	int back();
};
#endif