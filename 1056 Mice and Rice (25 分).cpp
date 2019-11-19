///*
//排名即为group数+1，因为group数说明有group名加入到下一轮的比拼当中，这一轮的所有人都应该是group+1名
//首先用结构体存储，同时存储weight和rank
//然后使用队列，每次将每个组里的优胜者再放入队列，然后继续进行算法
//*/
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cmath>
//using namespace std;
//queue<int>q;
//const int maxm = 1000;
//struct node {
//	int weight;
//	int rank;
//}a[maxm];
//int main(void)
//{
//	int n, groupnum, num, temp;//groupnum为每组人数，num为组数
//	cin >> n >> groupnum;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i].weight;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		q.push(temp);//向队列中放初始下标
//	}
//	int mouse = n;
//	while (q.size() > 1)//如果队列没有只剩一个元素即比赛未结束
//	{
//		num = mouse % groupnum == 0 ? mouse / groupnum : mouse / groupnum + 1;//num为每一轮参加的所有人数分组后的组数(mouse % groupnum==0代表分组正好为整数，此时不需要加一，否则要将剩余不够整个组数的人打包为一个组，所以总组数+1)
//		for (int i = 0; i < num; i++)//组数循环
//		{
//			int maxn = -1, ptr = -1;
//			for (int j = 0; j < groupnum; j++)//每组组员循环
//			{
//				if (i*groupnum + j == mouse)//如果最后一组不够groupnum，并且已经到了最后一个元素之后，再取q.front()便是下一轮的元素了，所以要break
//				{
//					break;
//				}
//				if (a[q.front()].weight > maxn)//求每组最大的数的下标，用ptr保存
//				{
//					maxn = a[q.front()].weight;
//					ptr = q.front();
//				}
//				a[q.front()].rank = num + 1;//每次遍历后都计算rank，
//				q.pop();//别忘将其pop出去
//			}
//			if (ptr != -1)//如果ptr不为-1，则将其加入队列
//			{
//				q.push(ptr);
//			}
//		}
//		mouse = num;//mouse变为组数，组数即下一轮参加的所有成员的数量，一遍计算下一轮要分几组
//	}
//	a[q.front()].rank = 1;//2以上的rank已经定成功了，最后需要将队列中最后一个元素（也就是获胜者）的rank定为1
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			cout << a[i].rank;
//		}
//		else cout << ' ' << a[i].rank;
//	}
//	system("pause");
//	return 0;
//}