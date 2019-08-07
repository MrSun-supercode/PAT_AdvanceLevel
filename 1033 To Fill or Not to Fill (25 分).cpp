///*
//思路：使用贪心算法，找局部最优解即可
//0.将终点处想象为一个加油站，价格为0，距离为Dis,这样方便找车是否能到终点（因为终点加油站的价格为0，所以优先找它，再用station[i]-station[now]<=max_run_dis来判断是否可以到达终点）
//1.因为一开始油箱是空的，所以只要第一个加油站的位置不在0处则车哪里也走不了，输出0
//2.将当前车所处位置初始化在0处，再从1一直到最后找（在0处加满油可以到达的）最小价格的加油站，分两种情况
//2.1如果后续的加油站的价格都比当前车所处位置的价格大，则找出后续加油站里面最小的一个加油站，然后将车加满油过去（此时使用的油比到那个加油站的油便宜）
//2.2如果后续的加油站的价格存在比当前车所处位置的价格小，则将油加到正好到达该加油站的油，然后再从那个加油站出发
//3.如果能到，返回total_price，如果不能到，就输出车当前所属加油站的距离station[now].dis加上加满油后最大可以到达的距离max_run_dis
//*/
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	double price;
//	double dis;
//}station[501];
//bool cmp(node a, node b)
//{
//	return a.dis < b.dis;
//}
//int main(void)
//{
//	int n;
//	double  maxTank, Dis, aver;
//	cin >> maxTank >> Dis >> aver >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> station[i].price >> station[i].dis;
//	}
//	station[n].dis = Dis;//假想终点加油站
//	station[n].price = 0;
//	double  max_run_dis = maxTank * aver;
//	sort(station, station + n, cmp);
//	if (station[0].dis != 0)//一开始油箱是没有油的，如果第一个加油站的位置不是初始位置的话，车根本开不出去
//	{
//		cout << "The maximum travel distance = 0.00" << endl;
//		system("pause");
//		return 0;
//	}
//	double total_price = 0.00;//所花费的总价钱
//	int now = 0;//当前车所处的加油站,后续加油站的最小价格,最小价格对应的加油站,当前油箱中的油
//	double  nowTank = 0;
//	//每次循环选出要去的下一个加油站
//	while (now < n)
//	{									//后续的加油站与当前加油站之间的距离要比车能行驶的最大距离小,这个主要是用来判断汽车是否能走完全程
//		int k = -1;//每次循环时都要进行k和min_price的初始化，因为每次循环这两个变量都会改变
//		double min_price = 100000;
//		for (int i = now + 1; i <= n && station[i].dis - station[now].dis <= max_run_dis; i++)
//		{
//			if (station[i].price < min_price)//找后续加油站中最小价格的那个加油站
//			{
//				min_price = station[i].price;
//				k = i;
//				if (min_price < station[now].price)//1.如果后续加油站的价格比当前加油站的价格还低，则加油至正好到达那个加油站的油
//				{								 //2.如果后续加油站的价格都比当前价格高，则由上面的if加循环可以找到后续加油站中最小价格的那个加油站，然后先从当前加油站加满油，再到那个加油站
//					break;
//				}
//			}
//		}
//		if (k == -1)//满油状态下无法找到加油站
//		{
//			break;
//		}
//		double need = (station[k].dis - station[now].dis) / aver;//从当前加油站到后续价格最低的加油站所需要的油
//		if (station[k].price < station[now].price)//上述1的情况
//		{
//			if (nowTank < need)// 需要的油比当前油箱中的油多
//			{
//				total_price += (need - nowTank)*station[now].price;
//				now = k;//当前加油站是k加油站
//				nowTank = 0;//到了k加油站之后油箱没有油了，所以nowTank=0
//			}
//			else {// 需要的油比当前油箱中的油少，即当前油箱的油够到k加油站了,不需要加油
//				nowTank -= need;
//				now = k;
//			}
//		}
//		else {//上述2的情况,则先加满油，再到k
//			total_price += (maxTank - nowTank) * station[now].price;
//			nowTank = maxTank - need;
//			now = k;
//		}
//	}
//	if (now == n)
//	{
//		printf("%.2lf\n", total_price);
//	}
//	else {
//		printf("The maximum travel distance = %.2lf\n", station[now].dis + max_run_dis);//如果不能够走完全程的话，至少可以走到当前加油站的距离加上在当前加油站把油加满的距离
//	}
//	system("pause");
//	return 0;
//}