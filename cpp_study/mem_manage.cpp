#include<iostream>
using namespace std;

class Solution{
    public:
    int val;
    Solution(){
        this->val = 0;
    }
    void show_message(){
        cout << val << endl;
    }
};
//int main(){
    // Solution* s = new Solution; // 申请一个对象
    // Solution* p1 = new Solution[10]; //申请十个对象
    // delete s; // 删除一个对象
    // delete[] p1;//删除是个对象
    // int* nums = new int[10];
    // for(int i = 0 ;i < 10; i++){
    //     nums[i] = i;
    // }
    // for(int i = 0; i < 10; i++){
    //     cout << nums[i] << endl;
    // }
    // delete[] nums;
    // int* t = new int; // 申请一个整形空间
    // int* t1 = new int(10); //申请一个整型空间，并初始化为10
    // cout << *t1 << endl;
    // delete t; //  删除
    // delete t1; // 删除
//    return 0;
//}