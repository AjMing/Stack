
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr *top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, char value);
char pop(Stack s);

#endif
