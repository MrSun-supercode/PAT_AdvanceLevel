////思路：已知中序后序求先序的过程是先从后序中找到最后一个数即根节点，然后再从中序中找这个根节点，
////这个根节点左边的所有值为左子树，右边的所有值为右子树。
////输出这个根，并按照根，左，右的顺序递归求出剩下的数。
//#include<iostream>
//using namespace std;
//int post[6], in[6];
//void pre(int root, int start, int end);
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> post[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> in[i];
//	}
//	pre(n - 1, 0, n - 1);
//	system("pause");
//	return 0;
//}
//void pre(int root, int start, int end)//root为后序遍历中的根节点的下标，start为该树（可能为子树）初始的下标，end为该树终止的下标。
//{
//	if (start > end)
//	{
//		return;
//	}
//	int i = start;
//	while (in[i] != post[root] && i < end)
//	{
//		i++;//i是根节点对应的下标，所以根节点左边一定属于左子树，右边一定属于右子树。i-1一定是左子树的结尾即end，i+1一定是右子树的开头即start
//	}
//	cout << post[root];
//	pre(root - end + i - 1, start, i - 1);
//	pre(root - 1, i + 1, end);
//}
/*
测试样例：
6
3 4 2 6 5 1
3 2 4 1 6 5
输出应为：123456
*/