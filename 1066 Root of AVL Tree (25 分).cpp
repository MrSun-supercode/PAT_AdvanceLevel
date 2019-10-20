///*
//思路很简单，就是按插入法将整个AVL树构造起来，然后输出根节点即可，一些注意事项直接看算法笔记326页即可，注释也很清楚
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {//树的节点，多加了一个height
//	int data, height;
//	node* left;
//	node* right;
//};
//vector<int>V;
//void L(node* &root);//左旋操作
//void R(node* &root);//右旋操作
//void insert(node* &root, int ans);//插入法构造AVL树，注意引用调用
//node* newNode(int ans);//建立新的节点
//int getHeight(node* root);//得到节点的高度
//int getBalanceFactor(node* root) {//得到节点平衡因子的大小（大于等于2（或小于等于-2）时要进行调整）
//	return getHeight(root->left) - getHeight(root->right);
//}
//void updateHeight(node* &root) {//更新树的高度，每次插入后先更新树的高度，再判断平衡因子是否大于等于2（或小于等于-2）
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
//				if (getBalanceFactor(root->left) == 1)//LL型
//				{
//					R(root);
//				}
//				else if (getBalanceFactor(root->left) == -1)//LR型
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
//				if (getBalanceFactor(root->right) == -1)//RR型
//				{
//					L(root);
//				}
//				else if (getBalanceFactor(root->right) == 1)//RL型
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
////注意左旋右旋操作必须要加引用调用，否则是不改变之前树的结构的，画图很明白就可以理解，保存在ipad上的左旋右旋AVL树中
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