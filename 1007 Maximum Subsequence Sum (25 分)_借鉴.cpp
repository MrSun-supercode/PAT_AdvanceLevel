//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector <int> v(n);//����һ����СΪn��vector
//	int temp = 0, tempindex = 0, leftindex = 0, rightindex = n - 1, sum = -1;//��ʼ��һЩ������rightindex��vector���һ������sumҪ���õĽ�С
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//		temp += v[i];//temp���ǵ�ǰ�����еļӺ�
//		if (temp < 0)
//		{
//			temp = 0;//���temp��0С������tempindex��i����������������Ϊ�и����������ֵ����Ӱ�죬����sum�Ѿ���¼��������������Ƿ��������д������ļӺ�
//			tempindex = i + 1;//tempindex����һλ��ʼ���½��мӺͼ���
//		}
//		else if (temp > sum)
//		{
//			sum = temp;//����sum
//			leftindex = tempindex;
//			rightindex = i;
//		}
//	}
//	if (sum<0)
//	{
//		sum = 0;//���vectorȫ�Ǹ��������0
//	}
//	cout << sum << ' ' << v[leftindex] << ' ' << v[rightindex] << endl;
//	system("pause");
//	return 0;
//}