
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr *top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtar s, int value);
int pop(StackPtar s);

#endif
