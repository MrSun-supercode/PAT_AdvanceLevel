////思路与练习（即已知后序与中序求先序）类似，只不过把每个点用node存储（因为需要用到index）
////然后把每个点的完全二叉树对应的下标赋给每个点的index值，然后按index从小到大排列并输出即为层序遍历结果
////ipad讲义中有，很详细。
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int post[31], in[31];
//struct node {
//	int index, value;
//};
//bool cmp(node a, node b)//自定义排序方法，按下标从小到大排列。
//{
//	return a.index < b.index;
//}
//vector<node>V;
//void pre(int root, int start, int end, int index);
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
//	pre(n - 1, 0, n - 1, 0);
//	sort(V.begin(), V.end(), cmp);//排列，并从index从小到大输出即是层序遍历结果
//	for (int i = 0; i < V.size(); i++)
//	{
//		if (i != 0)
//		{
//			cout << " " << V[i].value;
//		}
//		else cout << V[i].value;
//	}
//	system("pause");
//	return 0;
//}
//void pre(int root, int start, int end, int index)
//{
//	if (start > end)
//	{
//		return;
//	}
//	int i = start;//i从start开始并不是从0开始，
//	while (i < end&&post[root] != in[i])
//	{
//		i++;//找到i在中序遍历结果中的位置（即in中），i表示当前树根节点对应的下标，所以根节点左边一定属于左子树
//		//右边一定属于右子树。i-1一定是左子树的结尾即左end，i+1一定是右子树的开头即右start（递归中用到）	
//	}
//	V.push_back({ index,post[root] });
//	pre(root - (end - i) - 1, start, i - 1, 2 * index + 1);//递归中所赋索引值是当前节点在完全二叉树对应的索引值。
//	pre(root - 1, i + 1, end, 2 * index + 2);
//}