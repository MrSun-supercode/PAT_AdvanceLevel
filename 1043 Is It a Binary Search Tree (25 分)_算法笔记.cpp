///*
//���������������˳����Կ�1102���к�����Ľ���
//����˼·Ҳ�ܼ򵥣��������������Ƕ�����������ǰ��������л����Ǿ��������������ǰ���������
//�������Ӧ�ĺ���������У������ǵĻ����no
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 1000;
//struct node {
//	int data;
//	node* left;
//	node* right;
//};
//void insert(node* &root, int data)
//{
//	if (root == NULL)
//	{
//		root = new node;
//		root->data = data;
//		root->left = root->right = NULL;
//		return;
//	}
//	else {
//		if (data < root->data)//ע�����������dataС��root->data���Ͳ�����ߣ����ڵ���ʱ�����ұ�
//		{
//			insert(root->left, data);
//		}
//		else insert(root->right, data);
//	}
//}
//void preorder(node* root, vector<int>&v)
//{
//	if (root)
//	{
//		v.push_back(root->data);
//		preorder(root->left, v);
//		preorder(root->right, v);
//	}
//}
//void postorder(node* root, vector<int>&v)
//{
//	if (root)
//	{
//		postorder(root->left, v);
//		postorder(root->right, v);
//		v.push_back(root->data);
//	}
//}
//void preorderM(node* root, vector<int>&v)
//{
//	if (root)
//	{
//		v.push_back(root->data);//�����˳���Ǹ���������
//		preorderM(root->right, v);
//		preorderM(root->left, v);
//	}
//}
//void postorderM(node* root, vector<int>&v)
//{
//	if (root)
//	{		
//		postorderM(root->right, v);//�����˳���������������
//		postorderM(root->left, v);
//		v.push_back(root->data);
//	}
//}
//vector<int>origin, pre, preM, post, postM;
//int main(void)
//{
//	int n;
//	cin >> n;
//	node* root = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		origin.push_back(temp);
//		insert(root, temp);
//	}
//	preorder(root, pre);
//	postorder(root, post);
//	preorderM(root, preM);
//	postorderM(root, postM);
//	if (origin == pre)
//	{
//		cout << "YES" << endl;
//		for (int i = 0; i < post.size(); i++)
//		{
//			if (i == 0)
//			{
//				cout << post[i];
//			}
//			else cout << ' ' << post[i];
//		}
//	}
//	else if (origin == preM)
//	{
//		cout << "YES" << endl;
//		for (int i = 0; i < postM.size(); i++)
//		{
//			if (i == 0)
//			{
//				cout << postM[i];
//			}
//			else cout << ' ' << postM[i];
//		}
//	}
//	else cout << "NO" << endl;
//	system("pause");
//	return 0;
//}