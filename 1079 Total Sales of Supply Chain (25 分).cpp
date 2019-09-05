//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//struct node {//结构体结点，如果结点是供应商才会有product，否则只有child
//	double product;
//	vector<int>child;
//};
//vector<node>V;
//double p, r, ans = 0.0;
//void dfs(int x, int depth)
//{
//	if (V[x].child.size() == 0)//如果该结点没有孩子，说明其为供应商，则算它手头货物的价值
//	{
//		ans += V[x].product*p*pow(1 + r, depth);
//	}
//	else {
//		for (int i = 0; i < V[x].child.size(); i++)//否则，继续遍历它的孩子，注意depth加一
//		{
//			dfs(V[x].child[i], depth + 1);
//		}
//	}
//}
//int main(void)
//{
//	int n;
//	cin >> n >> p >> r;
//	r /= 100;//r使用时是百分单位，所以除以100
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (temp == 0)//如果temp为0，说明其为供应商，只需要输入product即可
//		{
//			cin >> V[i].product;
//		}
//		else {
//			for (int j = 0; j < temp; j++)//如果temp不为0，说明他有下属结点，输入下属结点
//			{
//				int k;
//				cin >> k;
//				V[i].child.push_back(k);
//			}
//		}
//	}
//	dfs(0, 0);//从第0层即root开始遍历
//	printf("%.1f", ans);//结果保留一位小数
//	system("pause");
//	return 0;
//}