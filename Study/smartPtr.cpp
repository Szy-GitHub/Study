#include "smartPtr.h"
#include <iostream>
#include <memory>

void smartPtr::helloWorld()
{
	auto str = "hello world!";
	int x = 1, y = 2;
	decltype(x + y) z = 0;
	std::cout << "decltype: z = " << z << std::endl;
	std::cout << str << std::endl;
}

void smartPtr::sharedPointer()
{
	std::cout << "sharedPtr " << std::endl;
}

void smartPtr::uniquePointer()
{
	std::cout << "uniquedPtr " << std::endl;
}
void smartPtr::weakPointer()
{
	std::cout << "weakPtr " << std::endl;
}
