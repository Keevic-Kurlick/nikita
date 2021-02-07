#include "interface.Openable.h"
#include <iostream>
class Door : public iOpenable
{
public:
	Door() { std::cout << "Door object created" << std::endl; }
	virtual ~Door() {}

	virtual void open() { std::cout << "Door opened" << std::endl; }
	virtual void close() { std::cout << "Door closed" << std::endl; }

	std::string mMaterial;
	std::string mColor;

};
