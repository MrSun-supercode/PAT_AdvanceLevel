///*
//连续子序列求和问题
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//void Binery_search(int i, int &j, int &tempsum);//引用传值，不需要return且时间更快
//int n, m;
//vector<int>sum;
//vector<int>Result;
//int main(void)
//{
//	scanf_s("%d%d", &n, &m);
//	vector<int>V(n + 1);
//	sum.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf_s("%d", &V[i]);
//		sum[i] = sum[i - 1] + V[i];//sum 一定是递增的
//	}
//	int minsum = sum[n];//minsum为当大于m时的最小值，即原题中的minimum lost
//	for (int i = 1; i <= n; i++)
//	{
//		int j, tempsum;
//		Binery_search(i, j, tempsum);
//		if (tempsum > minsum)//如果i-j区域的值比这个值要大，则跳过i，j继续循环
//		{
//			continue;
//		}
//		if (tempsum >= m)//隐含条件tempsum<=minsum
//		{
//			if (tempsum < minsum)//如果该区域的值比minsum小
//			{
//				minsum = tempsum;//更新minsum
//				Result.clear();//之前result中保留的值全部去掉，因为找到了更小的lost
//			}
//			//tempsum==minsum时，直接放入Result
//			Result.push_back(i);
//			Result.push_back(j);
//		}
//	}
//	for (int i = 0; i < Result.size(); i += 2)
//	{
//		printf("%d-%d\n", Result[i], Result[i + 1]);//输出
//	}
//	system("pause");
//	return 0;
//}
//void Binery_search(int i, int &j, int &tempsum)//二分法进行查找
//{
//	int left = i, right = n, mid;
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (sum[mid] - sum[i - 1] >= m)//带上sum[i]，即sum[i]到sum[mid]的值，比m大，说明更小的在mid左边
//		{
//			right = mid;
//		}
//		else left = mid + 1;//说明更小的在mid右边
//	}
//	j = right;
//	tempsum = sum[j] - sum[i - 1];
//}