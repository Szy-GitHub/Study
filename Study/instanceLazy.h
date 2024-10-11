#pragma once
#include <mutex>
#include <iostream>
using namespace std;

static mutex m_mutex;

class taskLazy
{
public:
	taskLazy(const taskLazy& obj) = delete;
	taskLazy& operator=(const taskLazy obj) = delete;
	static taskLazy* getInstance();
	void helllWorld();
private:
	taskLazy() = default;
	static taskLazy* m_taskQQ;
	
};


