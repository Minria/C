#include<stdio.h>
#include<malloc.h>

// 树节点结构体定义--一般都是二叉树
typedef struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;
// 构建一颗树
// 1,2,6,null,8,9,13,33,453,null,233
TreeNode* createTree() {
	TreeNode* a = (TreeNode*)malloc(sizeof(TreeNode));
	a->val = 1;
	TreeNode* b = (TreeNode*)malloc(sizeof(TreeNode));
	b->val = 2;
	TreeNode* c = (TreeNode*)malloc(sizeof(TreeNode));
	c->val = 6;
	TreeNode* d = (TreeNode*)malloc(sizeof(TreeNode));
	d->val = 8;
	TreeNode* e = (TreeNode*)malloc(sizeof(TreeNode));
	e->val = 9;
	TreeNode* f = (TreeNode*)malloc(sizeof(TreeNode));
	f->val = 13;
	TreeNode* g = (TreeNode*)malloc(sizeof(TreeNode));
	g->val = 33;
	TreeNode* h = (TreeNode*)malloc(sizeof(TreeNode));
	h->val = 453;
	TreeNode* i = (TreeNode*)malloc(sizeof(TreeNode));
	i->val = 233;
	a->left = b;
	a->right = c;
	b->left = NULL;
	b->right = d;
	c->left = e;
	c->right = f;
	d->left = g;
	d->right = h;
	e->left = NULL;
	e->right = i;
	f->left = NULL;
	f->right = NULL;
	g->left = NULL;
	g->right = NULL;
	h->left = NULL;
	h->right = NULL;
	i->left = NULL;
	i->right = NULL;
	return a;
}
// 先序遍历递归
void preorder(TreeNode* root) {
	if (root == NULL) {
		return;
	}
	printf("%d ", root->val);
	preorder(root->left);
	preorder(root->right);
}
// 中序遍历递归
void inorder(TreeNode* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	printf("%d ", root->val);
	inorder(root->right);
}
// 后续遍历递归
void postorder(TreeNode* root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->val);
}

//int main() {
//	TreeNode* root = createTree();
//	printf("先序遍历->");
//	preorder(root);
//	printf("\n中序遍历->");
//	inorder(root);
//	printf("\n后序遍历->");
//	postorder(root);
//	return 0;
//}