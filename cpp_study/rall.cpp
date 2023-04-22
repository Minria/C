#include<iostream>
using namespace std;


class Solution{
    public:
    int data;
    Solution(int val){
        this->data = val;
    }
    Solution(){}
    void show_message(){
        cout << data << endl;
    }
};

//int main(){
//    Solution* p = new Solution(10);
//    p->show_message();
    // shared_ptr<Solution> sp(new Solution());
    // shared_ptr<Solution> copy(sp);
    // cout << sp.use_count << endl;
    // cout << copy.use_count << endl;
//    return 0;
//}