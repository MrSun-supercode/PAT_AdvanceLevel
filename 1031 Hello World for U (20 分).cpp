///*
//˼·:���ҵ����U�͵ĳ���߸��Ƕ��٣�������forѭ����ע���ʼ��i=3��j=2��ʼ����ΪU��string����Ӧ����5����
//��󰴸�ʽ�������
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//void print_blank(int y)
//{
//	for (int i = 0; i < y; i++)
//	{
//		cout << ' ';
//	}
//}
//int main(void)
//{
//	int x,y;
//	string str;
//	cin >> str;
//	int n = str.size();
//	bool flag = false;
//	for (int i = 3; i <= n; i++)//i�����һ�к��ŵ��ַ������������ڵ㣩
//	{
//		for (int j = 2; j <= n; j++)//j���������е��ַ������������ڵ㣩
//		{
//			if (j<=i&&2*j+i-2==n){//���жϣ�һֱj����ܳ���i
//				x = i;
//				y = j;
//				flag = true;
//				break;
//			}
//		}
//		if (flag){
//			break;
//		}
//	}
//	int index = 0;
//	for (int i = 0; i < y-1; i++)
//	{
//		cout << str[i];
//		print_blank(x - 2);
//		cout << str[str.size() - 1-i] << endl;
//		index++;//index��¼�ַ���ǰ������˶��ٸ��ַ������ں������ʣ����ַ�
//	}
//	for (int i = 0; i < str.size()-2*index; i++)
//	{
//		cout << str[i + index];
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}