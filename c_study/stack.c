#include<stdio.h>
#include<stdbool.h>

#define MaxSize 50//ջ��Ԫ��������
typedef struct {
    int data[MaxSize];//���ջ��Ԫ��
    int top;//ջ��ָ��
}SqStack;

//��ʼ��
void Stack(SqStack* S) {
    S->top = -1;
}

//�ж�ջ��
bool empty(SqStack* S) {
    if (S->top == -1)
        return true;
    else
        return false;
}
//��ջ
bool push(SqStack* S, int x) {
    if (S->top == MaxSize - 1)
        return false;
    else {
        S->top++;
        S->data[S->top] = x;
        return true;
    }
}
//��ջ
bool pop(SqStack* S, int* x) {
    if (S->top == -1)
        return false;
    else {
        *x = S->data[S->top];
        S->top--;
        return true;
    }
}
//��ջ��Ԫ��
bool getTop(SqStack* S, int* x) {
    if (S->top == -1)
        return false;
    *x = S->data[S->top];
    return true;
}