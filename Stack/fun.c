#include"head.h"

//³õÊ¼»¯
void Stack(SqStack* S) {
    S->top = -1;
}

//ÅĞ¶ÏÕ»¿Õ
bool empty(SqStack* S) {
    if (S->top == -1)
        return true;
    else
        return false;
}
//½øÕ»
bool push(SqStack* S, int x) {
    if (S->top == MaxSize - 1)
        return false;
    else {
        S->top++;
        S->data[S->top] = x;
        return true;
    }
}
//³öÕ»
bool pop(SqStack* S, int* x) {
    if (S->top == -1)
        return false;
    else {
        *x = S->data[S->top];
        S->top--;
        return true;
    }
}
//¶ÁÕ»¶¥ÔªËØ
bool getTop(SqStack* S, int* x) {
    if (S->top == -1)
        return false;
    *x = S->data[S->top];
    return true;
}