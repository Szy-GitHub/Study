#pragma once

class taskQueue
{
public:
	taskQueue(const taskQueue& obj) = delete;
	taskQueue& operator=(const taskQueue obj) = delete;
	static taskQueue* getInstance();
	void helllWorld();
private:
	taskQueue() = default;
	static taskQueue* m_taskQ;
};
