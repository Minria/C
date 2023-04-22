//
// Created by wangfuming on 2023/4/2.
//

#include<iostream>
#include<stack>
#include <queue>
#include <map>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) return true;
    if (p == nullptr && q != nullptr) return false;
    if (p != nullptr && q == nullptr) return false;
    if (p->val != q->val) return false;
    bool left = isSameTree(p->left, q->left);
    bool right = isSameTree(p->right, q->right);
    return left && right;
}

//int main() {
//    TreeNode* p = new TreeNode(1);
//    TreeNode* p1 = new TreeNode(2);
//    TreeNode* p2 = new TreeNode(1);
//    p->left = p1;
//    p->right = p2;
//    TreeNode* q = new TreeNode(1);
//    TreeNode* q1 = new TreeNode(1);
//    TreeNode* q2 = new TreeNode(2);
//    q->left = q1;
//    q->right = q2;
//    bool ans = isSameTree(p, q);
//    cout << ans << endl;
//}
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dum = new ListNode();
    dum->next = head;
    ListNode* p = dum;
    ListNode* cur = head;
    while(cur){
        if(cur->next&&cur->val==cur->next->val){
            int tmp = cur->val;
            cur = cur->next->next;
            while(cur){
                if(cur->val==tmp){
                    cur = cur->next;
                }else{
                    break;
                }
            }
            p->next = cur;
        }else{
            p =p->next;
            cur = cur->next;
        }
    }
    return dum->next;
}

//int main(){
//    ListNode* p1 = new ListNode(1);
//    ListNode* p2 = new ListNode(2);
//    ListNode* p3 = new ListNode(3);
//    ListNode* p4 = new ListNode(3);
//    ListNode* p5 = new ListNode(4);
//    ListNode* p6 = new ListNode(4);
//    ListNode* p7 = new ListNode(5);
//    p1->next = p2;
//    p2->next = p3;
//    p3->next = p4;
//    p4->next = p5;
//    p5->next = p6;
//    p6->next = p7;
//    ListNode* ans = deleteDuplicates(p1);
//    while(ans){
//        cout<<ans->val<<" "<<endl;
//        ans=ans->next;
//    }
//}



int mostFrequentEven(vector<int>& nums) {
    int max = 0;
    int ans = 0;
    map<int, int> map;
    for (int i = 0; i < nums.size(); ++i) {
        int tmp = nums[i];
        if ((tmp & 1) == 1) continue;
        if (1 == map.count(tmp)) {
            int& cnt = map[tmp];
            cnt++;
            map[tmp] = cnt;
            if (cnt > max) {
                ans = tmp;
                max = cnt;
            }
            else if (cnt == max) {
                if (tmp < ans) {
                    ans = tmp;
                }
            }
        }
        else {
            map[tmp] = 1;
        }
    }
    return ans;
}
//int main() {
//    vector<int> nums = { 0,1,2,2,4,4,1 };
//    int ans = mostFrequentEven(nums);
//    cout << ans << endl;
//    return 0;
//}