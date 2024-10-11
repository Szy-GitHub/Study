#include "instanceLazy.h"

taskLazy* taskLazy::m_taskQQ = nullptr;

void taskLazy::helllWorld()
{
	cout << "hello world" << endl;
}

taskLazy* taskLazy::getInstance()
{
	if (m_taskQQ == nullptr) {
		m_mutex.lock();
		if (m_taskQQ == nullptr) {
			m_taskQQ = new taskLazy;
		}
		m_mutex.unlock();
	}
	return m_taskQQ;
}
