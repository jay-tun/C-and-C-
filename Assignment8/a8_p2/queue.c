/*
CH-230-A
a8 p2.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	Node *newelem;
	newelem=(Node*)malloc(sizeof(Node));
	if (newelem==NULL){
		printf("Error allocating memory");
		return -1;
	}
	newelem->item=item;
	newelem->next=NULL;
	if (queue_is_empty(pq)){
		pq ->front = newelem;
		pq ->rear  = pq->front;
	}
	else{
		pq ->rear->next = newelem;
		pq ->rear = pq->rear->next;
	}
	pq ->items=pq->items +1;
    return 0;
    
}

int dequeue(Item *pitem, Queue *pq)
{
	Node *tmp;
	tmp=pq->front;
	*pitem=pq->front->item;
	pq->front=pq->front->next;
	free(tmp);
	
	if (queue_is_empty(pq))
	{
		pq->front=NULL;
		pq->rear=NULL;
	}
	pq->items=pq->items-1;
	
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
} 