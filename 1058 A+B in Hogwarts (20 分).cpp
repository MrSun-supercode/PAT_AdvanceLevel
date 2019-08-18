///*
//思路：直接相加，然后判断knut和sickle哪一位超位了，然后哪一位就往前进几位
//一开始没加等号，测试点1过不去，后来一看数据范围不包括17或者是29，加上等号就过了
//*/
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int galleon = 0, sickle = 0, knuts = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		int g, s, k;
//		scanf_s("%d.%d.%d", &g, &s, &k);
//		galleon += g;
//		sickle += s;
//		knuts += k;
//	}
//	int bit = 0;
//	while (knuts >= 29)
//	{
//		bit++;
//		knuts -= 29;
//	}
//	sickle += bit;
//	bit = 0;
//	while (sickle >= 17)
//	{
//		bit++;
//		sickle -= 17;
//	}
//	galleon += bit;
//	printf("%d.%d.%d\n", galleon, sickle, knuts);
//	system("pause");
//	return 0;
//}