///*
//�����������������
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//void Binery_search(int i, int &j, int &tempsum);//���ô�ֵ������Ҫreturn��ʱ�����
//int n, m;
//vector<int>sum;
//vector<int>Result;
//int main(void)
//{
//	scanf_s("%d%d", &n, &m);
//	vector<int>V(n + 1);
//	sum.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf_s("%d", &V[i]);
//		sum[i] = sum[i - 1] + V[i];//sum һ���ǵ�����
//	}
//	int minsum = sum[n];//minsumΪ������mʱ����Сֵ����ԭ���е�minimum lost
//	for (int i = 1; i <= n; i++)
//	{
//		int j, tempsum;
//		Binery_search(i, j, tempsum);
//		if (tempsum > minsum)//���i-j�����ֵ�����ֵҪ��������i��j����ѭ��
//		{
//			continue;
//		}
//		if (tempsum >= m)//��������tempsum<=minsum
//		{
//			if (tempsum < minsum)//����������ֵ��minsumС
//			{
//				minsum = tempsum;//����minsum
//				Result.clear();//֮ǰresult�б�����ֵȫ��ȥ������Ϊ�ҵ��˸�С��lost
//			}
//			//tempsum==minsumʱ��ֱ�ӷ���Result
//			Result.push_back(i);
//			Result.push_back(j);
//		}
//	}
//	for (int i = 0; i < Result.size(); i += 2)
//	{
//		printf("%d-%d\n", Result[i], Result[i + 1]);//���
//	}
//	system("pause");
//	return 0;
//}
//void Binery_search(int i, int &j, int &tempsum)//���ַ����в���
//{
//	int left = i, right = n, mid;
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (sum[mid] - sum[i - 1] >= m)//����sum[i]����sum[i]��sum[mid]��ֵ����m��˵����С����mid���
//		{
//			right = mid;
//		}
//		else left = mid + 1;//˵����С����mid�ұ�
//	}
//	j = right;
//	tempsum = sum[j] - sum[i - 1];
//}