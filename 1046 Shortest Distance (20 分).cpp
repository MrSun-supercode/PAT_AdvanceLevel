///*
//思路：读好题，假设所求为a，b之间的最短路径，则让a从右走到b的距离与a从左走到b的距离相比，取小值即可
//最后一个测试点超时
//柳婼大神思路：right+left=sum,一开始求得sum后求得right直接比较right与left=sum-right的大小即可
//没必要一个一个遍历求right,直接一开始的时候就把dis的每个点表示为dis[i]为1-i的距离
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n, m, exit_a, exit_b, sum = 0, temp;
//	cin >> n;
//	vector<int>dis(n + 1);
//	dis[0] = 0;//这行可以不加，因为上面的初始化已经将vector中n+1的容量初始化为0了
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> temp;
//		sum += temp;
//		dis[i] = sum;//dis[i]记录从0-i+1的距离，dis[right-1]-dis[left-1]就是从left到right的距离了
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> exit_a >> exit_b;
//		int right = 0, left;//从右边走的距离，从左边走的距离
//		bool flag = false;
//		if (exit_a > exit_b)
//		{
//			swap(exit_a, exit_b);//a要比b小
//		}
//		right = dis[exit_b - 1] - dis[exit_a - 1];
//		left = sum - right;
//		int num = right >= left ? left : right;
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}
