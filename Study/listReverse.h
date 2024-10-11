#pragma once

typedef struct listNode {
	int val;
	struct listNode* next;
};

class listReverse
{
public:
	listReverse() {};
	listNode* reverse(listNode* head);
};
