///*
//很简单的dfs，跟前面的题类似，如果遍历到这个结点有孩子，则说明其是供应链的中间某一个环节，所以将其孩子全部dfs，注意depth+1
//然后如果没有孩子，说明其是供应商，则计算价格
//*/
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//vector<int>V[100001];
//int n;
//double p, r;
//double price = 1000000000.00;
//int cnt = 0;
//int mindepth;
//void dfs(int index, int depth)
//{
//	if (V[index].size() != 0)//如果有孩子，说明不是供应商
//	{
//		for (int i = 0; i < V[index].size(); i++)
//		{
//			dfs(V[index][i], depth + 1);
//		}
//	}
//	else {//供应商，计算价格
//		double temp = p * pow(1 + r, depth);
//		if (temp == price)
//		{
//			cnt++;
//		}
//		else if (temp < price)
//		{
//			price = temp;
//			cnt = 1;
//		}
//	}
//}
//int main(void)
//{
//	cin >> n >> p >> r;
//	r /= 100;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		for (int j = 0; j < temp; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			V[i].push_back(tmp);
//		}
//	}
//	dfs(0, 0);
//	printf("%.4f %d\n", price, cnt);
//	system("pause");
//	return 0;
//}