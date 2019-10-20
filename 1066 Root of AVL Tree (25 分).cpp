///*
//˼·�ܼ򵥣����ǰ����뷨������AVL������������Ȼ��������ڵ㼴�ɣ�һЩע������ֱ�ӿ��㷨�ʼ�326ҳ���ɣ�ע��Ҳ�����
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {//���Ľڵ㣬�����һ��height
//	int data, height;
//	node* left;
//	node* right;
//};
//vector<int>V;
//void L(node* &root);//��������
//void R(node* &root);//��������
//void insert(node* &root, int ans);//���뷨����AVL����ע�����õ���
//node* newNode(int ans);//�����µĽڵ�
//int getHeight(node* root);//�õ��ڵ�ĸ߶�
//int getBalanceFactor(node* root) {//�õ��ڵ�ƽ�����ӵĴ�С�����ڵ���2����С�ڵ���-2��ʱҪ���е�����
//	return getHeight(root->left) - getHeight(root->right);
//}
//void updateHeight(node* &root) {//�������ĸ߶ȣ�ÿ�β�����ȸ������ĸ߶ȣ����ж�ƽ�������Ƿ���ڵ���2����С�ڵ���-2��
//	root->height = max(getHeight(root->left), getHeight(root->right)) + 1;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i];
//	}
//	node* root = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		insert(root, V[i]);
//	}
//	cout << root->data << endl;
//	system("pause");
//	return 0;
//}
//void insert(node* &root, int ans)
//{
//	if (root == NULL)
//	{
//		root = newNode(ans);
//		return;
//	}
//	else {
//		if (root->data > ans)
//		{
//			insert(root->left, ans);
//			updateHeight(root);
//			if (getBalanceFactor(root) == 2)
//			{
//				if (getBalanceFactor(root->left) == 1)//LL��
//				{
//					R(root);
//				}
//				else if (getBalanceFactor(root->left) == -1)//LR��
//				{
//					L(root->left);
//					R(root);
//				}
//			}
//		}
//		else {
//			insert(root->right, ans);
//			updateHeight(root);
//			if (getBalanceFactor(root) == -2)
//			{
//				if (getBalanceFactor(root->right) == -1)//RR��
//				{
//					L(root);
//				}
//				else if (getBalanceFactor(root->right) == 1)//RL��
//				{
//					R(root->right);
//					L(root);
//				}
//			}
//		}
//	}
//}
//node* newNode(int ans)
//{
//	node* temp = new node;
//	temp->data = ans;
//	temp->height = 1;
//	temp->left = temp->right = NULL;
//	return temp;
//}
//int getHeight(node* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	return root->height;
//}
////ע������������������Ҫ�����õ��ã������ǲ��ı�֮ǰ���Ľṹ�ģ���ͼ�����׾Ϳ�����⣬������ipad�ϵ���������AVL����
//void L(node* &root)
//{
//	node* temp = root->right;
//	root->right = temp->left;
//	temp->left = root;
//	updateHeight(root);
//	updateHeight(temp);
//	root = temp;
//}
//void R(node* &root)
//{
//	node* temp = root->left;
//	root->left = temp->right;
//	temp->right = root;
//	updateHeight(root);
//	updateHeight(temp);
//	root = temp;
//}