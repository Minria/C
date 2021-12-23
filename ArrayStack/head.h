#include<stdio.h>
#include<stdbool.h>

#define MaxSize 50//栈中元素最大个数
typedef struct {
    int data[MaxSize];//存放栈中元素
    int top;//栈顶指针
}SqStack;
void Stack(SqStack* S);
bool empty(SqStack* S);
bool push(SqStack* S, int x);
bool pop(SqStack* S, int* x);
bool getTop(SqStack* S, int* x);