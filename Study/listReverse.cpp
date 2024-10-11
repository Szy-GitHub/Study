#include "listReverse.h"
#include <iostream>

listNode* listReverse::reverse(listNode* head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	listNode* next = NULL;
	listNode* new_head = NULL;
	while (head != NULL)
	{
		next = head->next;
		head->next = new_head;
		new_head = head;
		head = next;
	}
	return new_head;
}

