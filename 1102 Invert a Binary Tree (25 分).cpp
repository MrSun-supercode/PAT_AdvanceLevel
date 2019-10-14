/*
思路：先输入后找到根节点（没有在左右孩子中出现过的节点），然后根据根节点来进行遍历，不需要改变原先的结构
遍历方式（只需跟正常的方式倒过来即可）：
	前序遍历：根右左
	中序遍历：右根左
	后序遍历：右左根
	层序遍历：一个队列，放的时候先放右再放左
然后树没必要构建，只需要用一个struct node结构体储存即可，注意NULL一定要将left或者right标记为-1，这样以便之后遍历退出函数
输入时定义char类型，因为不一定是数字或者是"-",确定是数字在-'0'进行转换
checked数组是用来判断哪个数字没出现过即为根节点的（一旦将char类型的a，b确定为数字后将其checked[i]置为1）
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
const int maxsize = 10;
struct node {
	int data, left, right;
}tree[maxsize];
void levelOrder(int root);
void inOrder(int root);
//void preOrder(int root);
//void postOrder(int root);
vector<int>level;
vector<int>in;
//vector<int>pre;
//vector<int>post;
int main(void)
{
	int n;
	cin >> n;
	int checked[maxsize];
	fill(checked, checked + maxsize, 0);
	for (int i = 0; i < n; i++)
	{
		char a, b;
		cin >> a >> b;
		tree[i].data = i;
		if (a != '-')
		{
			int tmp = a - '0';
			checked[tmp] = 1;
			tree[i].left = tmp;
		}
		else tree[i].left = -1;
		if (b != '-')
		{
			int tmp = b - '0';
			checked[tmp] = 1;
			tree[i].right = tmp;
		}
		else tree[i].right = -1;
	}
	int root;
	for (int i = 0; i < n; i++)
	{
		if (!checked[i])
		{
			root = i;
			break;
		}
	}
	/*cout << root << endl;*/
	levelOrder(root);
	inOrder(root);
	/*preOrder(root);
	postOrder(root);*/
	for (int i = 0; i < level.size(); i++)
	{
		if (i == 0)
		{
			cout << level[i];
		}
		else cout << ' ' << level[i];
	}
	cout << endl;
	for (int i = 0; i < in.size(); i++)
	{
		if (i == 0)
		{
			cout << in[i];
		}
		else cout << ' ' << in[i];
	}
	/*cout << endl;
	for (int i = 0; i < pre.size(); i++)
	{
		if (i == 0)
		{
			cout << pre[i];
		}
		else cout << ' ' << pre[i];
	}
	cout << endl;
	for (int i = 0; i < post.size(); i++)
	{
		if (i == 0)
		{
			cout << post[i];
		}
		else cout << ' ' << post[i];
	}*/
	system("pause");
	return 0;
}
void levelOrder(int root)
{
	queue<node>Q;
	Q.push(tree[root]);
	while (!Q.empty())
	{
		node top = Q.front();
		Q.pop();
		level.push_back(top.data);
		if (top.right!=-1)
		{
			Q.push(tree[top.right]);
		}
		if (top.left!=-1)
		{
			Q.push(tree[top.left]);
		}
	}
}
void inOrder(int root)
{
	if (root!=-1)
	{
		inOrder(tree[root].right);
		in.push_back(root);
		inOrder(tree[root].left);
	}	
}
//void preOrder(int root)
//{
//	if (root != -1)
//	{
//		pre.push_back(root);
//		preOrder(tree[root].right);		
//		preOrder(tree[root].left);
//	}
//}
//void postOrder(int root)
//{
//	if (root != -1)
//	{
//		postOrder(tree[root].right);	
//		postOrder(tree[root].left);
//		post.push_back(root);
//	}
//}