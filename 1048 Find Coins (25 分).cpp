///*
//��һ��˼·������������forѭ����������min���Ż���cin��cout����������������Ե㳬ʱ
//�ڶ���˼·��ֱ�ӽ���Ϊ��άvector��Ȼ��洢V[i][j]�洢i+j��ֵ���Կռ任ʱ��,������Ե������ڴ泬��
//�����ο����S�����˼·��ʹ����������Ÿ������ֳ��ֵĴ����������±꼴�����ֱ���
//Ȼ��һ�α�����arraylist[i]!=0��ʱ��i<m����arraylist[m-i]���ڣ������ߴ��ڱ�ʾ�������������m-i������i�������Ϊi����
//����Ϊ���Ǵ�ͷ��ʼ����������һ���ҵ���ֵһ����i��С��ֵ
//*/
////��һ�Σ�
////#include<iostream>
////#include<algorithm>
////#include<vector>
////using namespace std;
////int arraylist[100001];
////int main(void)
////{
////	int n, m;
////	scanf_s("%d %d", &n, &m);
////	for (int i = 0; i < n; i++)
////	{
////		scanf_s("%d", &arraylist[i]);
////	}
////	/*sort(arraylist, arraylist + n);*/
////	int min = 0x7fffffff;
////	int i, j;
////	for (i = 0; i < n; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			/*if (arraylist[i] + arraylist[j] == m)
////			{
////				if (arraylist[i] < min)
////				{
////					min = arraylist[i];
////				}
////			}*/
////			if (i < m&&arraylist[i] + arraylist[j] == m)
////			{
////				printf("%d %d", arraylist[i], arraylist[j]);
////				system("pause");
////				return 0;
////			}
////		}
////	}
////	printf("No Solution");
////	/*if (min != 0x7fffffff)
////	{
////		if (min < m - min)
////		{
////			printf("%d %d", min, m - min);
////		}
////		else printf("%d %d", m - min, min);
////
////	}
////	else printf("No Solution");*/
////	system("pause");
////	return 0;
////}
////�ڶ��Σ�
////#include<iostream>
////#include<algorithm>
////#include<vector>
////using namespace std;
////int main(void)
////{
////	int n, m;
////	scanf_s("%d %d", &n, &m);
////	vector<vector<int>>V(n);
////	vector<int>arraylist(n);
////	for (int i = 0; i < n; i++)
////	{
////		V[i].resize(n);//����n*n��vector
////	}
////	for (int i = 0; i < n; i++)
////	{
////		scanf_s("%d", &arraylist[i]);
////	}
////	sort(arraylist.begin(), arraylist.end());
////	int i, j;
////	for (i = 0; i < n; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			V[i][j] = arraylist[i] + arraylist[j];
////		}
////	}
////	/*sort(arraylist, arraylist + n);*/
////	for (i = 0; i < n; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			if (V[i][j] == m)
////			{
////				printf("%d %d", arraylist[i], arraylist[j]);
////				system("pause");
////				return 0;
////			}
////		}
////	}
////	printf("No Solution");
////	system("pause");
////	return 0;
////}
////������
//#include<iostream>
//using namespace std;
//int arraylist[10001] = { 0 };//ȫ����ʼ��Ϊ0����Ϊ����Ԫ�ر������ֳ��ֵĸ����������±꼴���ֱ���
//int main(void)
//{
//	int n, k, temp;
//	scanf_s("%d %d", &n, &k);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &temp);
//		arraylist[temp]++;//��ǰ����Ԫ�ظ���+1
//	}
//	for (int i = 0; i < 10001; i++)
//	{
//		if (arraylist[i])//���arraylist[i]!=0��i������������г��ֹ�
//		{
//			arraylist[i]--;//ʹ����i֮���Ҫ��i�ĸ���-1��������һ14=7+7ʱ���ֻ��һ��7��᲻���������е�һ���ߵĸ�������ȥ�ˣ�
//			if (i < k&&arraylist[k - i])//i����С��k����k-i�����ִ���
//			{
//				printf("%d %d", i, k - i);
//				system("pause");
//				return 0;
//			}
//		}
//	}
//	printf("No Solution");
//	system("pause");
//	return 0;
//}