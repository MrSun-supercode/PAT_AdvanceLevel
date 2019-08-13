///*
//第一次思路：暴力法两层for循环遍历，找min，优化了cin和cout，结果还是两个测试点超时
//第二次思路：直接建表为二维vector，然后存储V[i][j]存储i+j的值，以空间换时间,结果测试点两个内存超限
//第三次看柳婼大神的思路：使用数组来存放各个数字出现的次数，数组下标即是数字本身
//然后一次遍历找arraylist[i]!=0的时候i<m并且arraylist[m-i]存在，（后者存在表示输入的数字中有m-i，其与i相加正好为i，）
//又因为她是从头开始遍历，所以一旦找到的值一定是i最小的值
//*/
////第一次：
////#include<iostream>
////#include<algorithm>
////#include<vector>
////using namespace std;
////int arraylist[100001];
////int main(void)
////{
////	int n, m;
////	scanf_s("%d %d", &n, &m);
////	for (int i = 0; i < n; i++)
////	{
////		scanf_s("%d", &arraylist[i]);
////	}
////	/*sort(arraylist, arraylist + n);*/
////	int min = 0x7fffffff;
////	int i, j;
////	for (i = 0; i < n; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			/*if (arraylist[i] + arraylist[j] == m)
////			{
////				if (arraylist[i] < min)
////				{
////					min = arraylist[i];
////				}
////			}*/
////			if (i < m&&arraylist[i] + arraylist[j] == m)
////			{
////				printf("%d %d", arraylist[i], arraylist[j]);
////				system("pause");
////				return 0;
////			}
////		}
////	}
////	printf("No Solution");
////	/*if (min != 0x7fffffff)
////	{
////		if (min < m - min)
////		{
////			printf("%d %d", min, m - min);
////		}
////		else printf("%d %d", m - min, min);
////
////	}
////	else printf("No Solution");*/
////	system("pause");
////	return 0;
////}
////第二次：
////#include<iostream>
////#include<algorithm>
////#include<vector>
////using namespace std;
////int main(void)
////{
////	int n, m;
////	scanf_s("%d %d", &n, &m);
////	vector<vector<int>>V(n);
////	vector<int>arraylist(n);
////	for (int i = 0; i < n; i++)
////	{
////		V[i].resize(n);//创建n*n的vector
////	}
////	for (int i = 0; i < n; i++)
////	{
////		scanf_s("%d", &arraylist[i]);
////	}
////	sort(arraylist.begin(), arraylist.end());
////	int i, j;
////	for (i = 0; i < n; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			V[i][j] = arraylist[i] + arraylist[j];
////		}
////	}
////	/*sort(arraylist, arraylist + n);*/
////	for (i = 0; i < n; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			if (V[i][j] == m)
////			{
////				printf("%d %d", arraylist[i], arraylist[j]);
////				system("pause");
////				return 0;
////			}
////		}
////	}
////	printf("No Solution");
////	system("pause");
////	return 0;
////}
////第三次
//#include<iostream>
//using namespace std;
//int arraylist[10001] = { 0 };//全部初始化为0，因为数组元素保存数字出现的个数，数组下标即数字本身
//int main(void)
//{
//	int n, k, temp;
//	scanf_s("%d %d", &n, &k);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &temp);
//		arraylist[temp]++;//当前数组元素个数+1
//	}
//	for (int i = 0; i < 10001; i++)
//	{
//		if (arraylist[i])//如果arraylist[i]!=0即i在输入的数字中出现过
//		{
//			arraylist[i]--;//使用了i之后就要对i的个数-1，这样万一14=7+7时如果只有一个7则会不成立（仅有的一个七的个数被减去了）
//			if (i < k&&arraylist[k - i])//i满足小于k并且k-i的数字存在
//			{
//				printf("%d %d", i, k - i);
//				system("pause");
//				return 0;
//			}
//		}
//	}
//	printf("No Solution");
//	system("pause");
//	return 0;
//}