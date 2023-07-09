
//
// Created by wangfuming on 2023/4/2.
//

#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;
void MyPrint(int val){
	cout <<  val << endl;
}
void vector_1(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();
	// 第一种变量方式
	while(pBegin!=pEnd){
		cout << *pBegin << endl;
		pBegin++;
	}
	// 第二中遍历方式，和第一中类似
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	//第三种遍历方式
	for_each(v.begin(), v.end(), MyPrint);
}
void vector_2() {
	int num[] = { 1,2,3 };
	// 从数组中构建
	vector<int> v(num,num+sizeof(num)/4);
//	 size capacity empty resize reserve
	v.push_back(1);  // 1,2,3,1
	cout << v[3] << endl; // ans=1
	v.pop_back();// 1,2,3
	cout << v[2] << endl; //ans=3
	v.push_back(5);// 1,2,3,5
	v.push_back(9);//1,2,3,5,9
	cout << "----" << endl;
    vector<int>::iterator pos = find(v.begin(), v.end(), 1);
	v.insert(pos,8);
}
void vector_3(){
   vector<int> v;
   v.push_back(1);//尾插
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   cout<<v.size()<<endl; // size = 5
   cout<<v.capacity()<<endl; // capacity = 8
   int pos = 1;
   v.insert(v.begin()+pos,-1); // 在指定位置插入
   cout << v[1] << endl;
}
// int main(){
// 	// vector_1();
// 	// vector_2();
// 	return 0;
// }

void string_1() {
	string s1; //指定一个空字符串
	string s2("hello string");//构造字符串
	string s3(s2);//通过拷贝构造字符串

	cout << s1.empty() << endl; // 字符串判空
	cout << s1.size() << endl; 
	cout << s1.capacity() << endl;
}
void string_2(){
    string s("hello world");
	cout << s << endl;
	s.clear();                  //清空字符串内容   
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	s.resize(10,'a');  // 将有效字符的个数该成n个，多出的空间用字符c填充
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
void string_3(){
    string s3 = "hello world";
    char a = s3[2];
	cout << a << endl;
	string s = "hello";
	s.push_back('a'); // 追加一个字符
	s.append(" world"); //追加一个字符串
	s += " world"; // 追加一个字符串
	int index = s.rfind('h');
	int index2 = s.find("he");
	cout << index << endl;
    cout << index2 << endl;
	cout << s << endl;
	string s4;
	s4.assign(5,'x');
	cout << s4 << endl;

}
// int main(){
// 	// string_1();
// 	// string_2();
// 	// string_3();
// 	return 0;
// }









void stack_1(){
   stack<int> s;
   cout<<s.empty()<<endl;// 0是false 1是true
   s.push(1);
   cout<<s.top()<<endl;
   s.push(2);
   cout<<s.top()<<" size="<<s.size()<<endl;
   int& tmp = s.top();
   s.pop();
   cout<<tmp<<" size="<<s.size()<<endl;
}
// int main(){
// 	stack_1();
// 	return 0;
// }

void queue_1(){
   queue<int> queue;
   queue.push(1);
   queue.push(2);
   queue.push(3);
   int& tmp1 = queue.front();
   int& tmp2 = queue.back();
   cout<<tmp1<<" "<<tmp2<<endl;
   queue.pop();
   int& tmp3 = queue.front();
   cout<<queue.size()<<" "<<tmp3<<endl;
}
struct cmp1{
    bool operator()(const int o1,const int o2){
        return o1<o2;
    }
};


void queue_2(){
   priority_queue<int,vector<int>,cmp1> queue;
   queue.push(1);
   queue.push(2);
   queue.push(3);
   queue.push(5);
   while(queue.size()>0){
       cout<<queue.top()<<endl;
       queue.pop();
   }
}
struct cmp2{
	bool operator()(const string o1,const string o2){
		return o1.size() < o2.size();
	}
};
void queue_3(){
	priority_queue<string,vector<string>,cmp2> queue;
	queue.push("1");
	queue.push("12");
	queue.push("12312");
	while(queue.size()>0){
		string tmp = queue.top();
		cout << tmp << endl;
		queue.pop();
	}
}
 class TreeNode{
 	public:
 	int val;
 	TreeNode* left;
 	TreeNode* right;
 	TreeNode(int val){
 		this->val = val;
 		this->left = nullptr;
 		this->right = nullptr;
 	}
 };
 struct cmp3{
 	bool operator()(const TreeNode* o1,const TreeNode* o2){
 		return o1->val > o2->val;
 	}
 };
 void dfs(TreeNode* root,string s){
 	if(root->left==nullptr){
 		cout << root->val << " " << s << endl;
 		return;
 	}
 	dfs(root->left,s+"0");
 	dfs(root->right,s+"1");
 }
 void queue_4(){
 	int n = 3;
 	int* nums = new int[n];
 	for(int i = 0; i < n; i++){
 		nums[i] = i + 1;
 	}
//    cin >> n;
//    int* nums = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> nums[i];
//    }
 	priority_queue<TreeNode*,vector<TreeNode*>,cmp3> queue;
 	for(int i = 0; i < n; i++){
 		TreeNode* tmp = new TreeNode(nums[i]);
 		queue.push(tmp);
 	}
 	while(queue.size()>1){
 		TreeNode* tmp1 = queue.top();
 		queue.pop();
 		TreeNode* tmp2 = queue.top();
 		queue.pop();
 		TreeNode* tmp3 = new TreeNode(tmp1->val+tmp2->val);
 		tmp3->left = tmp1;
 		tmp3->right = tmp2;
 		queue.push(tmp3);
 	}
 	TreeNode* root = queue.top();
 	dfs(root,"");
 }
 void queue_5(){
	deque<int> queue;
	queue.push_back(1);
	queue.push_front(-1);
	queue.pop_back();
	queue.pop_front();
 }
// int main(){
// 	// queue_1();
// 	// queue_2();
// 	// queue_3();
// 	queue_4();
// }








// set相关代码

 void set_1(){
   set<int> s;
   cout << s.size() << endl;
   s.insert(1);
   s.insert(2);
   cout << s.size() << endl;
   auto e = s.count(3);
   cout << "3的个数 = " << e << endl;
   s.erase(2);
   e = s.count(2);
   cout <<"2的个数 = " << e << endl;
   e = s.count(1);
   cout << "1的个数 = " << e << endl;
 }


// map相关代码


void map_1(){
   map<string, string> m;
   // 向map中插入元素的方式：
   // 将键值对<"peach","桃子">插入map中，用pair直接来构造键值对
   m.insert(pair<string, string>("peach", "桃子"));
   // 将键值对<"peach","桃子">插入map中，用make_pair函数来构造键值对
   m.insert(make_pair("banan", "香蕉"));
   // 借用operator[]向map中插入元素
   //operator[]的原理是：
   //用<key, T()>构造一个键值对，然后调用insert()函数将该键值对插入到map中
   //如果key已经存在，插入失败，insert函数返回该key所在位置的迭代器
   //如果key不存在，插入成功，insert函数返回新插入元素所在位置的迭代器
   //operator[]函数最后将insert返回值键值对中的value返回
   // 将<"apple", "">插入map中，插入成功，返回value的引用，将“苹果”赋值给该引用结果，
   m["apple"] = "苹果";
   // key不存在时抛异常
//    m.at("waterme") = "水蜜桃";
   cout << m.size() << endl;
   // 用迭代器去遍历map中的元素，可以得到一个按照key排序的序列
   for (auto& e : m)
       cout << e.first << "--->" << e.second << endl;
   cout << endl;
   // map中的键值对key一定是唯一的，如果key存在将插入失败
   auto ret = m.insert(make_pair("peach", "桃色"));
   if (ret.second)
       cout << "<peach, 桃色>不在map中, 已经插入" << endl;
   else
       cout << "键值为peach的元素已经存在：" << ret.first->first << "--->" <<
            ret.first->second <<" 插入失败"<< endl;
   // 删除key为"apple"的元素
//    m.erase("apple");
    if (1 == m.count("apple"))
        cout << "apple还在" << endl;
    else
        cout << "apple被吃了" << endl;
    
    string& ans = m["apple"]; 
    cout << m["apple"] << " " << ans <<endl;
}

// int main(){
// 	set_1();
// 	map_1();
// 	return 0;
// }