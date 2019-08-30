///*
//之前乙级做过类似的题，就是一个贪心算法，然后求最大利润量，直接可以用排序将月饼的单价从大到小排序，然后先出售价格高的月饼，
//再出售价格低的月饼，注意测试点2使用double，invent是以千为单位
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	double invent;
//	double price;
//	double simple_price;
//};
//bool cmp(node a, node b)
//{
//	return a.simple_price > b.simple_price;
//}
//int main(void)
//{
//	int num, total;
//	cin >> num >> total;
//	vector<node>inven(num);
//	for (int i = 0; i < num; i++)
//	{
//		cin >> inven[i].invent;
//	}
//	for (int i = 0; i < num; i++)
//	{
//		cin >> inven[i].price;
//		inven[i].simple_price = inven[i].price / inven[i].invent;
//	}
//	sort(inven.begin(), inven.end(), cmp);
//	double sum = 0.0;
//	for (int i = 0; i < inven.size(); i++)
//	{
//		if (total >= inven[i].invent)
//		{
//			sum += inven[i].price;
//			total -= inven[i].invent;
//		}
//		else {
//			sum += inven[i].simple_price*total;
//			break;
//		}
//	}
//	printf("%.2f\n", sum);
//	system("pause");
//	return 0;
//}