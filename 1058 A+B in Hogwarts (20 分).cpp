///*
//˼·��ֱ����ӣ�Ȼ���ж�knut��sickle��һλ��λ�ˣ�Ȼ����һλ����ǰ����λ
//һ��ʼû�ӵȺţ����Ե�1����ȥ������һ�����ݷ�Χ������17������29�����ϵȺž͹���
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