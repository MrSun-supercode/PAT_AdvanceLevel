/*
˼·����������ҵ����ڵ㣨û�������Һ����г��ֹ��Ľڵ㣩��Ȼ����ݸ��ڵ������б���������Ҫ�ı�ԭ�ȵĽṹ
������ʽ��ֻ��������ķ�ʽ���������ɣ���
	ǰ�������������
	����������Ҹ���
	��������������
	���������һ�����У��ŵ�ʱ���ȷ����ٷ���
Ȼ����û��Ҫ������ֻ��Ҫ��һ��struct node�ṹ�崢�漴�ɣ�ע��NULLһ��Ҫ��left����right���Ϊ-1�������Ա�֮������˳�����
����ʱ����char���ͣ���Ϊ��һ�������ֻ�����"-",ȷ����������-'0'����ת��
checked�����������ж��ĸ�����û���ֹ���Ϊ���ڵ�ģ�һ����char���͵�a��bȷ��Ϊ���ֺ���checked[i]��Ϊ1��
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