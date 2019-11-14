///*
//思路：要找每一层没有孩子的节点，直接广搜，然后记录层数，记录每一层的没有孩子的节点即child.size()==0即可
//一开始使用利用queue的BFS，但是发现无法确定每层的depth，所以改用递归地BFS
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//struct node {
//	vector<int>child;
//};
//vector<node>V;
//vector<int>num;
//queue<node>q;
//void BFS(node temp, int depth)
//{
//	if (temp.child.size()==0)
//	{
//		num[depth]++;
//	}
//	else {
//		for (int i = 0; i < temp.child.size(); i++)
//		{
//			BFS(V[temp.child[i]], depth + 1);
//		}
//	}
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	V.resize(n + 1);
//	num.resize(n + 1);
//	for (int i = 0; i < m; i++)
//	{
//		int temp, k, chil;
//		cin >> temp >> k;
//		for (int j = 0; j < k; j++)
//		{
//			cin >> chil;
//			V[temp].child.push_back(chil);
//		}
//	}
//	q.push(V[1]);
//	int depth = 1;//层数
//	BFS(V[1], depth);
//	/*while (!q.empty())
//	{
//		node temp = q.front();
//		q.pop();
//		if (temp.child.size() == 0)
//		{
//			num[depth]++;
//		}
//		if (temp.child.size() != 0)
//		{
//			childnum = temp.child.size();
//			for (int i = 0; i < temp.child.size(); i++)
//			{
//				q.push(V[temp.child[i]]);
//			}
//			depth++;
//		}
//	}*/
//	bool flag = false;
//	for (int i = 1; i < num.size(); i++)//for循环内的前两句是为了正确的反应层数，因为使用递归无法知道树的高度，但我们知道num的最后一项肯定是数字，所以只需在出现数字之后的第一个零之前所有输出即可
//	{
//		if (num[i]!=0)
//		{
//			flag = true;
//		}
//		if (flag&&num[i]==0)
//		{
//			break;
//		}
//		if (i == 1)
//		{
//			cout << num[i];
//		}
//		else cout << ' ' << num[i];
//	}
//	system("pause");
//	return 0;
//}