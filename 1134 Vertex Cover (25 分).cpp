///*
//思路：将边标记数字，第一条边为0，第二条边是1，以此类推。
//
//*/
//#include<iostream>
//#include<set>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxsize = 10001;
//set<int>S;
//int main(void)
//{
//	int n, m, k;
//	cin >> n >> m;
//	vector<int>V[maxsize];
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		V[a].push_back(i);//a的顶点所连的边中有i这个标志符对应的边
//		V[b].push_back(i);//b的顶点所连的边中有i这个标志符对应的边
//	}
//	cin >> k;
//	//for (int i = 0; i < k; i++)
//	//{
//	//	int temp;
//	//	cin >> temp;
//	//	for (int j = 0; j < temp; j++)
//	//	{
//	//		int tmp;
//	//		cin >> tmp;
//	//		S.insert(tmp);
//	//	}
//	//	bool flag = false;
//	//	int cnt = 0;
//	//	for (auto it = S.begin(); it != S.end(); it++)
//	//	{
//	//		for (int p = 0; p < n; p++)
//	//		{
//	//			if (graph[*it][p] == 1)//在判断与p相连的节点里面是否有
//	//			{
//	//				cnt++;
//	//			}
//	//		}
//	//	}
//	//	if (cnt >= m)
//	//	{
//	//		cout << "Yes" << endl;
//	//	}
//	//	else cout << "No" << endl;
//	//	S.clear();
//	//}
//	for (int i = 0; i < k; i++)
//	{
//		vector<int>temp(m, 0);//新建m大小的，初始值是0的vector容器
//		int t;
//		cin >> t;
//		for (int j = 0; j < t; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			for (int p = 0; p < V[tmp].size(); p++)//对tmp每个相连的边，对应的temp置为1
//			{
//				temp[V[tmp][p]] = 1;
//			}
//		}
//		bool flag = false;
//		for (int j = 0; j < temp.size(); j++)
//		{
//			if (temp[j]==0)//如果temp有存在0，说明那条边对应的两个顶点没有被访问过
//			{
//				cout << "No" << endl;
//				flag = true;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			cout << "Yes" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}