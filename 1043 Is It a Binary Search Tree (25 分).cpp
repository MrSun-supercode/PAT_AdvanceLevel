///*
//������ʼ�����Ҷ��븴���ˣ���Ϊ���������������������Ľ������ν������������Ľ��ת�ɶ�����
//��ʵ����ֻ��һ����������ǲ�����ת���ɶ������ģ���Ϊû�����������֪�����ڵ����ĸ���
//�����������ϴ��еĲ��ͷ���ԭ��˼·���Ƚ�������빹��ɶ���������
//ʹ�ò��뷨��Ҫ����ĵ�����ڵ���ȣ���Ͳ��ұߣ�С�Ͳ���ߡ��������������������ķ����෴��
//Ȼ�󽫲��뷨���õ������������;������������������������������Ƚϣ��ȱ��ѣ��ٱȾ��ѣ�
//�����ȣ�����������������ɣ��������ֱ�ӵݹ鼴�ɣ�
//��������ȣ������NO
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//struct node {
//	int val;
//	node* left;
//	node* right;
//};
//vector<int>arr, pre, post, pre_mirror, post_mirror;//����arrΪ�������룬pre��post�ֱ𱣴�������������ǰ���������ͺ���������
////pre_mirror, post_mirror�Ǿ��������������ǰ���������ͺ���������
//int n;
//node* root, *root_Mirror;//�������ĸ����ָ��
//node* newNode(int val)//�����½ڵ�
//{
//	node* root = new node;
//	root->left = NULL;
//	root->right = NULL;
//	root->val = val;
//	return root;
//}
//void insertNode(node* &root, int val)//ע��Ҫ�����õ��ã����뷨��������������
//{
//	if (!root)
//	{
//		root = newNode(val);
//		return;
//	}
//	else if (val >= root->val)
//	{
//		insertNode(root->right, val);
//	}
//	else {
//		insertNode(root->left, val);
//	}
//}
//void insertNode_Mirror(node* &root, int val)//ע��Ҫ�����õ��ã����뷨������������������
//{
//	if (!root)
//	{
//		root = newNode(val);
//		return;
//	}
//	else if (val >= root->val)
//	{
//		insertNode_Mirror(root->left, val);
//	}
//	else {
//		insertNode_Mirror(root->right, val);
//	}
//}
//node* create()//��������������
//{
//	node* root = NULL;//���������ʼ��
//	for (int i = 0; i < n; i++)
//	{
//		insertNode(root, arr[i]);
//	}
//	return root;
//}
//node* create_Mirror()//������������������
//{
//	node* root = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		insertNode_Mirror(root, arr[i]);
//	}
//	return root;
//}
//void preOrder(node* root)//�ĸ������ҾͲ���д�ˣ������������ǰ�����vector��
//{
//	if (!root)
//	{
//		return;
//	}
//	pre.push_back(root->val);
//	preOrder(root->left);
//	preOrder(root->right);
//}
//void preMirror(node* root)
//{
//	if (!root)
//	{
//		return;
//	}
//	pre_mirror.push_back(root->val);
//	preMirror(root->left);
//	preMirror(root->right);
//}
//void postOrder(node* root)
//{
//	if (!root)
//	{
//		return;
//	}
//	postOrder(root->left);
//	postOrder(root->right);
//	post.push_back(root->val);
//}
//void postMirror(node* root)
//{
//	if (!root)
//	{
//		return;
//	}
//	postMirror(root->left);
//	postMirror(root->right);
//	post_mirror.push_back(root->val);
//}
//int main(void)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//	}
//	root = create();
//	root_Mirror = create_Mirror();
//	preOrder(root);
//	postOrder(root);
//	preMirror(root_Mirror);
//	postMirror(root_Mirror);//����Ϊֹ����������������������ͺ�������Լ������������������������ͺ���������
//	if (pre == arr)//��������������������ǰ��������
//	{
//		cout << "YES" << endl;
//		for (int i = 0; i < post.size(); i++)//��������������ĺ������
//		{
//			if (i == 0)
//			{
//				cout << post[i];
//			}
//			else cout << ' ' << post[i];
//		}
//		system("pause");
//		return 0;
//	}
//	if (pre_mirror == arr)//��������뾵�������������ǰ��������
//	{
//		cout << "YES" << endl;
//		for (int i = 0; i < post_mirror.size(); i++)//�����������������ĺ������
//		{
//			if (i == 0)
//			{
//				cout << post_mirror[i];
//			}
//			else cout << ' ' << post_mirror[i];
//		}
//		system("pause");
//		return 0;
//	}
//	cout << "NO" << endl;//���������ȣ���ֱ�����No
//	system("pause");
//	return 0;
//}