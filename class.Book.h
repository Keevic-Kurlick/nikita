#include "interface.Openable.h"
#include <iostream>
class Book : public iOpenable
{
public:
	Book() { std::cout << "Book object created" << std::endl; }
	virtual ~Book() {}
	//Конкретизация методов интерфейса iOpenable для класса Book
	virtual void open() { std::cout << "Book opened" << std::endl; }
	virtual void close() { std::cout << "Book closed" << std::endl; }

	std::string mTitle;
	std::string mAuthor;

}; 
