///*
//˼·��ÿ��ֻ����0������ֻ�轫0��Ӧ��λ���������ȷ������0�������ɣ�Ȼ��ѭ����֪��0Ҳ������ȷ��λ�á�
//��0������ȷλ���������л�û���ź�ʱ��Ҫ�Ƚ�0�ڵ�һ��������ȷλ�õ����ֽ��������壩��Ȼ���ظ�1�Ĺ���
//�ο���https://blog.csdn.net/qq_42068614/article/details/85848563
//https://blog.csdn.net/hy971216/article/details/81272254
//*/
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//vector<int>v;
//vector<int>vs;
//int deal(vector<int> v, vector<int> vs);
//int find(vector<int>v, int temp);
//int main(void)
//{
//	int n;
//	cin >> n;
//	v.resize(n);
//	vs.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		vs[v[i]] = i;//vs��¼ԭ����ÿ������λ��
//	}
//	cout << deal(v, vs) << endl;
//	system("pause");
//	return 0;
//}
//int deal(vector<int> v, vector<int> vs)
//{
//	int num = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		while (vs[0] != 0)//����������v[0]==0,��ʱ0����ȷλ���ϣ�Ҫ��0Ϊ������������һ��������ȷλ���ϵ����������ټ�������whileѭ��
//		{
//			swap(vs[0], vs[vs[0]]);
//			num++;
//		}
//		if (vs[i] != i)//��ʱ0�Ѿ�����ȷ��λ���ϣ�Ҫ��ǰ�����ҵ���һ��������ȷλ���ϵ���,ʹ����0����
//		{
//			swap(vs[i], vs[0]);
//			num++;
//		}
//	}
//	return num;
//}
