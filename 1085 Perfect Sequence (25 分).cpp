///*
//�Լ���˼·���������ڣ����������ֵ��ʼ�������������ֱ���������Ϊ�Ǵ����ֵ��ʼ�ģ������оͼ���
//���whileѭ����û�ҵ��Ļ����0��
//���Ե�4��ʱ�����Ե�5�𰸴���
//���Ե�5�𰸴����ҵ�ԭ��pӦΪlong long����
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	long long p;
//	scanf_s("%d %lld", &n, &p);
//	vector<int>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &V[i]);
//	}
//	sort(V.begin(), V.end());
//	/*int index = n;
//	int nmax = 0;
//	while (index >= 0)
//	{
//		for (int i = 0; i + index <= n; i++)
//		{
//			if (V[i + index - 1] <= V[i] * p)
//			{
//				printf("%d\n", index);
//				system("pause");
//				return 0;
//			}
//		}
//		index--;
//	}*/
//	//���S�����˼·���������ƣ�ֻ��������������������Щ��ͬ
//	//����˼�룺�ȴ�i=0��ʼ���������һ�����֣��������֣����������Ƿ�����M<=m*p,һֱ����������Ϊֹ����¼�µ�ǰresult
//	//������������result����������ʱֱ��break�����Ǵ�i����һλ��i=1��ʼ�����i+result<n�Ļ���������result�������Ƿ����㣬�����㣬��������result+1�Ƿ����㣬һ�������ҵ����resultֵ
//	int result = 0, temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + result; j < n; j++)
//		{
//			if (V[j] <= V[i] * p)
//			{
//				temp = j - i + 1;//temp����+1
//				if (temp > result)
//				{
//					result = temp;//����result
//				}
//			}
//			else break;
//		}
//	}
//	/*printf("%d\n", index);*/
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}