#include "instanceHungry.h"
#include <iostream>
using namespace std;

taskQueue* taskQueue::m_taskQ = new taskQueue;

void taskQueue::helllWorld()
{
	cout << "hello world" << endl;
}

taskQueue* taskQueue::getInstance()
{
	return m_taskQ;
}
