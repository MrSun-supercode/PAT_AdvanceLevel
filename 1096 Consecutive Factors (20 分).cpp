//#include<iostream>
//#include<cmath>
//using namespace std;
//long int n, temp;
//int main(void)
//{
//	scanf("%d", &n);
//	int len = 0, first = 0;
//	int maxn = sqrt(n);//n���������ֵ
//	for (int i = 2; i <= maxn; i++)//��2��ʼһֱ��maxn�� ��1��ʼû����
//	{
//		int j, temp = 1;//jΪ��i��ʼһֱ������Ա�n���������ľ���
//		for (j = i; j <= maxn; j++)
//		{
//			temp *= j;//tempΪ��ǰ������n���������������ĳ˻�
//			if (n%temp != 0)//�����ʱ�����Ա�temp�����ˣ�˵��j������һλ����Ҫ�Լ�1������630���Ա�5*6*7����������j=8ʱ���ֲ�����������������Ҫj--
//			{
//				break;
//			}
//		}
//		//������Ҫע�⣬j--֮�����������7����i��-5���ټ�1�ſ��Եõ���i-j�����ĸ�������j-1-i+1��j-i
//		if (len < j - i)//���lenС��j-i�������len��first��firstָ��i���������������ĳ�ʼ����������5,6,7��5��
//		{
//			len = j - i;
//			first = i;
//		}
//	}
//	if (first == 0)//���first==0��˵��nΪ1������������ֻ��һ�������������Լ�����
//	{
//		printf("1\n%d\n", n);
//	}
//	else {
//		printf("%d\n", len);
//		for (int i = 0; i < len; i++)
//		{
//			if (i == 0)
//			{
//				printf("%d", first++);//��firstһֱ��first+lenΪ���������������
//			}
//			else printf("*%d", first++);
//		}
//	}
//	system("pause");
//	return 0;
//}