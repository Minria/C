#include<stdio.h>
#include<stdbool.h>

#define MaxSize 50//栈中元素最大个数
typedef struct {
    int data[MaxSize];//存放栈中元素
    int top;//栈顶指针
}SqStack;

//初始化
void Stack(SqStack* S) {
    S->top = -1;
}

//判断栈空
bool empty(SqStack* S) {
    if (S->top == -1)
        return true;
    else
        return false;
}
//进栈
bool push(SqStack* S, int x) {
    if (S->top == MaxSize - 1)
        return false;
    else {
        S->top++;
        S->data[S->top] = x;
        return true;
    }
}
//出栈
bool pop(SqStack* S, int* x) {
    if (S->top == -1)
        return false;
    else {
        *x = S->data[S->top];
        S->top--;
        return true;
    }
}
//读栈顶元素
bool getTop(SqStack* S, int* x) {
    if (S->top == -1)
        return false;
    *x = S->data[S->top];
    return true;
}