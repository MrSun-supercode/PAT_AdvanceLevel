////思路:首先将所有的时间全部换算为秒这样便于计算（以后再碰到时间问题是可以这样处理）
////然后将合理数据存入vector（即时间小于17:00之前的数据），并按时间先后顺序从小到大排列
////然后设定k个window窗口，每个window窗口记录当前结束服务后的时间，初始都为8:00即28800秒，比如一个顾客8:00整来占用window16分钟，则window[0]最后的值为28800+16*60
////当然，需要找到对应的window再进行计算，对应的window即找到当前所有window中最小的值即最先结束服务的window
////如果顾客来的时间比这个minwindow大，则直接进行服务，无需等待，最后更新window的值
////如果顾客来的时间比这个minwindow小，则需要进行等待，sum值更新，window值也要更新。
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {//顾客来时间的结构体
//	int comingtime, processtime;
//}tempnode;
//bool cmp(node a, node b)//自定义排序方式，从小到大排序
//{
//	return a.comingtime < b.comingtime;
//}
//int main(void)
//{
//	int n, k;
//	cin >> n >> k;
//	int hour, minute, second, time;
//	vector<node>T;
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d:%d:%d %d", &hour, &minute, &second, &time);
//		int coming_time = hour * 3600 + minute * 60 + second;
//		if (coming_time > 61200) continue;//如果数据不合理则直接跳过
//		tempnode.comingtime = coming_time;
//		tempnode.processtime = time * 60;//注意这里需要*60，即换算为秒
//		T.push_back(tempnode);
//	}
//	sort(T.begin(), T.end(), cmp);
//	vector<int> window(k, 28800);
//	double sum = 0.0;
//	for (int i = 0; i < T.size(); i++)
//	{
//		int current_index = 0, minwindow = window[0];//current_index为当前服务的窗口，minwindow为所有窗口中结束服务最早的窗口，即为下一个顾客服务的窗口
//		for (int j = 1; j < k; j++)
//		{
//			if (minwindow > window[j])
//			{
//				minwindow = window[j];
//				current_index = j;
//			}
//		}
//		if (T[i].comingtime >= minwindow)
//		{//当前window值需要更新为顾客到达的时间加顾客占用的时间（因为顾客来时才进行的服务）
//			window[current_index] = T[i].comingtime + T[i].processtime;
//		}
//		else {//当前window值需要更新为当前window时间+顾客占用时间（因为顾客等待窗口，直到窗口空出才进行服务）
//			sum += (window[current_index] - T[i].comingtime);//等待的时间即当前window值-顾客来的时间
//			window[current_index] += T[i].processtime;
//		}
//	}
//	if (T.size() == 0)//如果没有顾客服务，则输出0.0而不能走下面的else，因为任何数/0（T.size）没有意义
//	{
//		cout << "0.0" << endl;
//	}
//	else {
//		printf("%.1lf", sum / 60.0 / T.size());//从秒化为分钟，并且注意保留一位小数，所以/60.0
//	}
//	system("pause");
//	return 0;
//}