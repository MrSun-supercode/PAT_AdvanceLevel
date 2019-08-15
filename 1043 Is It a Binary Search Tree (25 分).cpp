///*
//这道题从始至终我都想复杂了，因为我想的是他给的先序遍历的结果，如何将这个先序遍历的结果转成二叉树
//（实际上只有一个先序遍历是不可能转换成二叉树的，因为没有中序遍历不知道根节点是哪个）
//后来看了网上大佬的博客发现原来思路是先将这个输入构造成二叉搜索树
//使用插入法，要插入的点与根节点相比，大就插右边，小就插左边。而镜像搜索二叉树则插的方向相反）
//然后将插入法所得的搜索二叉树和镜像搜索二叉树的先序遍历与输入相比较（先比搜，再比镜搜）
//如果相等，则输出其后序遍历即可（后序遍历直接递归即可）
//若都不相等，则输出NO
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//struct node {
//	int val;
//	node* left;
//	node* right;
//};
//vector<int>arr, pre, post, pre_mirror, post_mirror;//创建arr为保存输入，pre和post分别保存搜索二叉树的前序遍历结果和后序遍历结果
////pre_mirror, post_mirror是镜像二叉搜索树的前序遍历结果和后序遍历结果
//int n;
//node* root, *root_Mirror;//两棵树的根结点指针
//node* newNode(int val)//创建新节点
//{
//	node* root = new node;
//	root->left = NULL;
//	root->right = NULL;
//	root->val = val;
//	return root;
//}
//void insertNode(node* &root, int val)//注意要用引用调用，插入法创建搜索二叉树
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
//void insertNode_Mirror(node* &root, int val)//注意要用引用调用，插入法创建镜像搜索二叉树
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
//node* create()//创建搜索二叉树
//{
//	node* root = NULL;//这个用来初始化
//	for (int i = 0; i < n; i++)
//	{
//		insertNode(root, arr[i]);
//	}
//	return root;
//}
//node* create_Mirror()//创建镜像搜索二叉树
//{
//	node* root = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		insertNode_Mirror(root, arr[i]);
//	}
//	return root;
//}
//void preOrder(node* root)//四个遍历我就不多写了，结果保存在先前定义的vector中
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
//	postMirror(root_Mirror);//到此为止，二叉搜索树的先序遍历和后序遍历以及镜像二叉搜素树的先序遍历和后序遍历完成
//	if (pre == arr)//如果输入与二叉搜索树的前序遍历相等
//	{
//		cout << "YES" << endl;
//		for (int i = 0; i < post.size(); i++)//输出二叉搜索树的后序遍历
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
//	if (pre_mirror == arr)//如果输入与镜像二叉搜索树的前序遍历相等
//	{
//		cout << "YES" << endl;
//		for (int i = 0; i < post_mirror.size(); i++)//输出镜像二叉搜索树的后序遍历
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
//	cout << "NO" << endl;//如果都不相等，就直接输出No
//	system("pause");
//	return 0;
//}