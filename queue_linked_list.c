#include "queue_linked_list.h"


HndQueue initLinkListQueue()
{
	HndQueue hndQueue = (HndQueue)malloc(sizeof(Queue));
	if (hndQueue == NULL)
	{
		printf("initLinkListQueue error...");
		return NULL;
	}

	hndQueue->pFront = hndQueue->pRear = NULL;
	hndQueue->size = 0;

	return hndQueue;
}

int enqueue(HndQueue hnd, valueType val)
{
	pNode pnewNode = (pNode)malloc(sizeof(Node));
	if (pnewNode == NULL)
		return -1;

	pnewNode->data = val;
	pnewNode->pNext = NULL;

	if (hnd->pFront == NULL)
		hnd->pFront = pnewNode;
	else
		hnd->pRear->pNext = pnewNode;
	
	hnd->pRear = pnewNode;

	hnd->size++;

	return 0;
}

int dequeue(HndQueue hnd, int* ival)
{
	pNode ptemp;
	if (hnd->pFront == NULL)
	{
		printf("Queue is empty...");
		return -1;
	}

	*ival = hnd->pFront->data;
	ptemp = hnd->pFront;
	hnd->pFront = hnd->pFront->pNext;
	free(ptemp);

	hnd->size--;

	return 0;
}

int getSize(HndQueue hnd)
{
	return hnd->size;
}

int isEmpty(HndQueue hnd)
{
	return hnd->size == 0;
}

void clearqueue(HndQueue hnd)
{
	int temp;
	while (!isEmpty(hnd))
		dequeue(hnd, &temp);
}

void destroy(HndQueue hnd)
{
	clearqueue(hnd);
	free(hnd);
}