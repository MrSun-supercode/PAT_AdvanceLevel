///*
//自己的思路：滑动窗口，排序后从最大值开始，如果符合条件直接输出（因为是从最大值开始的），不行就继续
//如果while循环都没找到的话输出0，
//测试点4超时，测试点5答案错误
//测试点5答案错误找到原因：p应为long long类型
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	long long p;
//	scanf_s("%d %lld", &n, &p);
//	vector<int>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &V[i]);
//	}
//	sort(V.begin(), V.end());
//	/*int index = n;
//	int nmax = 0;
//	while (index >= 0)
//	{
//		for (int i = 0; i + index <= n; i++)
//		{
//			if (V[i + index - 1] <= V[i] * p)
//			{
//				printf("%d\n", index);
//				system("pause");
//				return 0;
//			}
//		}
//		index--;
//	}*/
//	//柳婼大神的思路：跟我类似，只不过上述函数处理方面有些许不同
//	//大体思想：先从i=0开始，逐个尝试一个数字，两个数字，三个数字是否满足M<=m*p,一直到不能满足为止，记录下当前result
//	//由于求得是最大result，当不满足时直接break，我们从i的下一位即i=1开始（如果i+result<n的话），尝试result个数字是否满足，若满足，继续尝试result+1是否满足，一次类推找到最大result值
//	int result = 0, temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + result; j < n; j++)
//		{
//			if (V[j] <= V[i] * p)
//			{
//				temp = j - i + 1;//temp长度+1
//				if (temp > result)
//				{
//					result = temp;//更新result
//				}
//			}
//			else break;
//		}
//	}
//	/*printf("%d\n", index);*/
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}