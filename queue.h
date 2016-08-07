@@ -0,0 +1,43 @@
/*This program practices the OO programming in C */
/*File: queue.h*/
/*Date: 08/07/16*/
/*Author: L. J. */

#ifndef QUEUE_H_
#define QUEUE_H_
#define QUEUE_SIZE 10

//class queue define as "struct"
#typedef struct Queue Queue
struct Queue{
	int buffer[QUEUE_SIZE];		//reserved space in memory for data
	int head;
	int tail;
	int size;
	int (*isFull)(Queue *const me);
	int (*isEmpty)(Queue *const me);
	int (*getSize)(Queue *const me);
	void (*insert)(Queue *const me, int k);
	int (*remove)(Queue *const me);
};

//Constructors and Destructors
void Queue_Init(Queue *const me, int(*isFullFunction)(Queue *const me),
	int(*isEmptyFunction)(Queue *const me), 
	int(*getSizeFunction)(Queue *const me),
	void(*insertFunction)(Queue *const me, int k),
	int(*removeFunction)(Queue *const me));

void Queue_Cleanup(Queue *const me);

//Operations
int Queue_isFull(Queue *const me);
int Queue_isEmpty(Queue *const me);
int Queue_getSize(Queue *const me);
void Queue_insert(Queue *const me, int k);
int Queue_remove(Queue *const me);

Queue *Queue_Create(void);
void Queue_Destroy(Queue *const me);

#endif	/*QUEUE_H_*/
\ No newline at end of file