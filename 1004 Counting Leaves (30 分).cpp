///*
//˼·��Ҫ��ÿһ��û�к��ӵĽڵ㣬ֱ�ӹ��ѣ�Ȼ���¼��������¼ÿһ���û�к��ӵĽڵ㼴child.size()==0����
//һ��ʼʹ������queue��BFS�����Ƿ����޷�ȷ��ÿ���depth�����Ը��õݹ��BFS
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
//	int depth = 1;//����
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
//	for (int i = 1; i < num.size(); i++)//forѭ���ڵ�ǰ������Ϊ����ȷ�ķ�Ӧ��������Ϊʹ�õݹ��޷�֪�����ĸ߶ȣ�������֪��num�����һ��϶������֣�����ֻ���ڳ�������֮��ĵ�һ����֮ǰ�����������
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