///*
//֮ǰ�Ҽ��������Ƶ��⣬����һ��̰���㷨��Ȼ���������������ֱ�ӿ����������±��ĵ��۴Ӵ�С����Ȼ���ȳ��ۼ۸�ߵ��±���
//�ٳ��ۼ۸�͵��±���ע����Ե�2ʹ��double��invent����ǧΪ��λ
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