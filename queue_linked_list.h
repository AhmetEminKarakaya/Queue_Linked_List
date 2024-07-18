#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int valueType;

typedef struct Node
{
	valueType data;
	struct Node* pNext;
}Node,*pNode;

typedef struct Queue
{
	Node* pFront;
	Node* pRear;
	int size;
}Queue,*HndQueue;

HndQueue initLinkListQueue();
int enqueue(HndQueue hnd, valueType val);
int dequeue(HndQueue hnd, int* ival);
int getSize(HndQueue hnd);
int isEmpty(HndQueue hnd);
void clearqueue(HndQueue hnd);
void destroy(HndQueue hnd);