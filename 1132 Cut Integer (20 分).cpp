///*
//ˮ���Ȼȫ�ǿӣ�����˼·�ܼ򵥣������ֿ�Ȼ�����������ĳ˻��Ƿ���Ա�x������
//���ȿ�����д���ǼӺţ����ֻ�е�һ�����Ե����ͨ��
//������������ж�ȡ��ʱ�����˻�==0�����Ե�����һ�¡�
//*/
//#include<iostream>
//#include<cmath>
//using namespace std;
//bool deal(int x)
//{
//	int temp = x;
//	int cnt = 0;
//	while (temp != 0)//����x��λ������cnt����
//	{
//		temp /= 10;
//		cnt++;
//	}
//	temp = x / pow(10, cnt / 2);//ǰcnt/2λ��
//	int temp_t = x - temp * pow(10, cnt/2);//��cnt/2λ��
//	if (temp*temp_t==0)//���˻�Ϊ0������false
//	{
//		return false;
//	}
//	if (x%(temp*temp_t)==0)
//	{
//		return true;
//	}
//	else return false;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (deal(temp))
//		{
//			cout << "Yes" << endl;
//		}
//		else cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//}