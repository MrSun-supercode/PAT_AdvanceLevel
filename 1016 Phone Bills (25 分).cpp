//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<map>
//#include<vector>
//using namespace std;
//struct node {
//	string name;//账单的姓名
//	bool status;//账单的状态，on-line 或者是off-line
//	int month, day, hour, minute;//账单的月份，天，小时以及分钟
//	int time;//对应的总分钟数（相对于0）
//};
//int rate[24] = { 0 };//将每个时间段的收费存入数组rate中，注意rate[24]保存所有时间段收费之和，便于计算整天的费用即通话n整天的费用为rate[24]*60*n
//bool cmp(node a, node b)
//{//将数据排序：当姓名相同时，按通话时间从小到大排序；当姓名不同时，按姓名字典序从小到大排序，这样便于操作数据
//	return a.name == b.name ? a.time < b.time : a.name < b.name;//
//}
//double billFormZero(node a, int* rate)//该函数用于计算从0到a这个数据的时刻所花费的费用
//{
//	double total = rate[a.hour] * a.minute + rate[24] * 60 * a.day;//将当前所有分钟的花费以及当前所有整天数的花费算出
//	for (int i = 0; i < a.hour; i++)
//	{
//		total += rate[i] * 60;//再将total加上当前所有整小时的花费
//	}
//	return total / 100.0;//注意输出是美元，而rate是每美分/分钟，除以100.0，保留小数点后面的数据
//}
//int main(void)
//{
//	for (int i = 0; i < 24; i++)
//	{
//		cin >> rate[i];
//		rate[24] += rate[i];//注意rate[24]保存所有时间段收费之和，便于计算整天的费用即通话n整天的费用为rate[24]*60*n
//	}
//	int n;
//	cin >> n;
//	vector<node>List(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> List[i].name;
//		scanf_s("%d:%d:%d:%d", &List[i].month, &List[i].day, &List[i].hour, &List[i].minute);
//		List[i].time = List[i].day * 24 * 60 + List[i].hour * 60 + List[i].minute;
//		string temp;
//		cin >> temp;
//		if (temp == "on-line")
//		{
//			List[i].status = true;
//		}
//		else List[i].status = false;
//	}
//	sort(List.begin(), List.end(), cmp);
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << List[i].name << List[i].month << List[i].day << List[i].hour << List[i].minute << endl;
//	}*/
//	map<string, vector<node>>custom;
//	for (int i = 1; i < n; i++)//合理的数据都是两条两条存入custom中，第一条status为true，第二条status为false
//	{
//		if (List[i].name == List[i - 1].name&&List[i].status == false && List[i - 1].status == true)
//		{
//			custom[List[i - 1].name].push_back(List[i - 1]);
//			custom[List[i].name].push_back(List[i]);
//		}
//	}
//	for (auto it : custom)
//	{
//		vector<node>temp = it.second;//it.first为键值，second为数据，对于此来说，it为custom中的first为一个，second为很多的数据，比如it={"CYJJ","{status=true,status=false}"}
//		cout << it.first << ' ';
//		printf("%02d\n", temp[0].month);
//		double total = 0.0;
//		for (int i = 0; i < temp.size(); i += 2)//例如aaa存入的相同姓名数据不一定是整2条，可能是2n条，所以要i+=2
//		{
//			double t = billFormZero(temp[i + 1], rate) - billFormZero(temp[i], rate);
//			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2lf\n", temp[i].day, temp[i].hour, temp[i].minute, temp[i + 1].day, temp[i + 1].hour, temp[i + 1].minute, temp[i + 1].time - temp[i].time, t);
//			total += t;
//		}
//		cout << "Total amount: $";
//		printf("%.2lf\n", total);
//	}
//	system("pause");
//	return 0;
//}