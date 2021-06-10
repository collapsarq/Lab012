//Создайте класс Queue, хранящий целые числа в виде очереди. Реализовать операции push (добавление в конец очереди) и front (взятие элемента из начала очереди). Количество элементов очереди не ограничено.

#include "queue.h"
#include <iostream> 

int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "Введите размер очереди:\n";
	int size = 0;
	std::cin >> size;
	Queue q1(size);
	q1.input();
	std::cout << "Очередь: ";
	q1.output();
	std::cout << "Задний элемент:" << std::endl;
	std::cout << q1.back();
	std::cout << std::endl;
	std::cout << "Передний элемент: " << std::endl;
	std::cout << q1.front();
	std::cout << std::endl;
	std::cout << "Удаление переднего элемента";
	q1.pop();
	std::cout << std::endl;
	std::cout << "Текущая очередь:\n ";
	q1.output();
	std::cout << std::endl;
	return 0;
}