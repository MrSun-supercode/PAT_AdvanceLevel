//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n, m, k;
//	scanf("%d", &n);
//	set<int>S[51];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		for (int j = 0; j < m; j++)
//		{
//			int temp;
//			scanf("%d", &temp);
//			S[i].insert(temp);//��Ϊ��Ŀ������ÿ�����������ظ���Ԫ�أ����Բ���Ҫ���飬ֱ����set�洢���뼴��
//		}
//	}
//	scanf("%d", &k);
//	set<int>total;
//	for (int i = 0; i < k; i++)
//	{
//		int set1, set2;
//		scanf("%d %d", &set1, &set2);
//		total.clear();
//		set1 -= 1;
//		set2 -= 1;
//		int cnt = 0, cnm = S[set1].size();
//		for (auto iter = S[set2].begin(); iter != S[set2].end(); iter++)
//		{
//			/*total.insert(*iter);*/
//			if (S[set1].find(*iter) != S[set1].end())
//			{
//				cnt++;
//			}
//			else cnm++;
//		}//��һ��˼·��ֱ������һ��total���ϣ���set1��set2���ϵ�ȫ��Ԫ����ӽ�ȥ����󷵻�total���ϵĴ�С����ĸ���������һ�����Ե㳬ʱ
//		//�ڶ���˼·������һ���ж�ʱ�ͽ�set2���ϵ�Ԫ����ӽ�ȥ��Ȼ��ֻ�����set1���ϼ��ɣ����������һ�����Ե㳬ʱ
//		//�ο����S����˼·����Ϊ���Ǳ���set2��Ȼ���set1������set2�Ƿ���set1�г��ֹ�
//		//��ôֱ�ӽ�cnm��ֵset1���ϵĴ�С�������ڱ���set2ʱ���������û�ҵ��Ļ���cnm++������˵������set2���е�Ԫ�أ���ӵ���������ȥ��tql������ôҲ�벻������
//		/*for (auto iter = S[set1].begin(); iter != S[set1].end(); iter++)
//		{
//			total.insert(*iter);
//		}*/
//		/*for (iter = S[set2].begin(); iter != S[set2].end(); iter++)
//		{
//			total.insert(*iter);
//		}*/
//		float result = cnt * 1.000 / cnm;
//		result *= 100;
//		printf("%.1f%%\n", result);
//	}
//	system("pause");
//	return 0;
//}