///*
//题意：n个人玩狼人杀，其中有两匹狼，其他是好人，狼里面有一个说的假话，好人里面也有一个说的假话，求狼人是哪个，如果答案很多，取前面值最小的那个。
//思路：既然两匹狼人，那么我就直接二维数组假设i,j是狼(当i==j的时候跳过)
//而且注意，所有人说的话里前面正号代表他说其是好人，负号代表他说其是坏人。比如+3，-5，分别代表3号是好人和五号是狼人。
//然后继续往下判断即可，注意虽然输入有正负号，但仍然可以按int型进行输入。
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int>V;
//int main(void)
//{
//	int n;
//	cin >> n;
//	V.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> V[i];
//	}
//	int wolfcnt, cnt;
//	bool flag = false;//是否找到了答案
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			wolfcnt = 0, cnt = 0;
//			for (int m = 1; m <= n; m++)
//			{
//				if (m == i || m == j)//狼人发言
//				{
//					if (V[m] > 0 && V[m] != i && V[m] != j)//狼人说好人是好人，真话
//					{
//
//					}
//					if (V[m] > 0 && V[m] == i || V[m] == j)//狼人说狼人是好人,假话
//					{
//						wolfcnt++;
//					}
//					if (V[m] < 0 && V[m] == -i || V[m] == -j)//狼人说狼人是狼人，真话
//					{
//
//					}
//					if (V[m] < 0 && V[m] != -i && V[m] != -j)//狼人说好人是狼人，假话
//					{
//						wolfcnt++;
//					}
//				}
//				else {//好人发言
//					if (V[m] > 0 && V[m] != i && V[m] != j)//好人说好人是好人，真话
//					{
//
//					}
//					if (V[m] > 0 && V[m] == i || V[m] == j)//好人说狼人是好人,假话
//					{
//						cnt++;
//					}
//					if (V[m] < 0 && V[m] == -i || V[m] == -j)//好人说狼人是狼人，真话
//					{
//
//					}
//					if (V[m] < 0 && V[m] != -i && V[m] != -j)//好人说好人是狼人，假话
//					{
//						cnt++;
//					}
//				}
//			}
//			if (wolfcnt == 1 && wolfcnt + cnt == 2)
//			{
//				cout << i << ' ' << j << endl;
//				flag = true;
//				break;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//	if (!flag)
//	{
//		cout << "No Solution" << endl;
//	}
//	system("pause");
//	return 0;
//}