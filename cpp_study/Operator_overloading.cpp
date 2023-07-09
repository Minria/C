#include<iostream>
using namespace std;

class Person{
    Person& operator+(Person *p1){
        Person tmp;
        tmp.m_a = this->m_a + p1->m_a;
        tmp.m_b = this->m_b + p1->m_b;
        return tmp;
    }
    public:
    int m_a;
    int m_b;

};

int main(){
    Person* p1;
    Person* p2;
    p1->m_a = 10;
    p1->m_b = 10;
    p2->m_a = 10;
    p2->m_b = 10;
    // Person p3 = p1 + p2;
}