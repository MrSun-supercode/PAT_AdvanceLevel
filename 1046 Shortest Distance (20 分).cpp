///*
//˼·�������⣬��������Ϊa��b֮������·��������a�����ߵ�b�ľ�����a�����ߵ�b�ľ�����ȣ�ȡСֵ����
//���һ�����Ե㳬ʱ
//���S����˼·��right+left=sum,һ��ʼ���sum�����rightֱ�ӱȽ�right��left=sum-right�Ĵ�С����
//û��Ҫһ��һ��������right,ֱ��һ��ʼ��ʱ��Ͱ�dis��ÿ�����ʾΪdis[i]Ϊ1-i�ľ���
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n, m, exit_a, exit_b, sum = 0, temp;
//	cin >> n;
//	vector<int>dis(n + 1);
//	dis[0] = 0;//���п��Բ��ӣ���Ϊ����ĳ�ʼ���Ѿ���vector��n+1��������ʼ��Ϊ0��
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> temp;
//		sum += temp;
//		dis[i] = sum;//dis[i]��¼��0-i+1�ľ��룬dis[right-1]-dis[left-1]���Ǵ�left��right�ľ�����
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> exit_a >> exit_b;
//		int right = 0, left;//���ұ��ߵľ��룬������ߵľ���
//		bool flag = false;
//		if (exit_a > exit_b)
//		{
//			swap(exit_a, exit_b);//aҪ��bС
//		}
//		right = dis[exit_b - 1] - dis[exit_a - 1];
//		left = sum - right;
//		int num = right >= left ? left : right;
//		cout << num << endl;
//	}
//	system("pause");
//	return 0;
//}
