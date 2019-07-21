////思路:找到每一个比赛中赔率最高的数值以及对应的胜负平结果，
////然后按公式求出结果输出以及每场比赛赔率最高的数值对应的胜负平结果就好
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	double temp;//
//	double list[3] = { 0.0 };
//	char List[3];
//	string temp_list = "WTL";
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> temp;
//			if (temp > list[i])
//			{
//				list[i] = temp;
//				List[i] = temp_list[j];
//			}
//		}
//	}
//	double sum = 1.0;
//	for (int i = 0; i < 3; i++)
//	{
//		sum *= list[i];
//		cout << List[i] << ' ';
//	}
//	printf("%.2lf\n", (sum*0.65 - 1) * 2);
//	system("pause");
//	return 0;
//}