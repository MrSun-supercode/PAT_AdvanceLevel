///*
//˼·������һ���ַ����������룬Ȼ�������ַ�������ת�ַ������ٽ������ַ������int���������������Ϊ6174����
//��n=������Ȼ�����
//Ҫע�����һ��ʼҪ��nǰ�油��0����n.insert(0, 4 - n.size(), '0');
//��Ϊ�������128������λ����Ӧ��ǰ�油�㣬������Ե�����2��ͨ����
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//bool cmp(char a, char b) { return a > b; }
//int main(void)
//{
//	string n;
//	cin >> n;
//	char c = n[0];
//	bool flag = false;
//	n.insert(0, 4 - n.size(), '0');//��0λ�ò���4-n.size()��'0'�ַ�
//	for (int i = 1; i < n.size(); i++)
//	{
//		if (n[i] != c)
//		{
//			flag = true;
//			break;
//		}
//	}
//	if (!flag)
//	{
//		string temp = n;
//		reverse(temp.begin(), temp.end());
//		cout << n << " - " << temp << " = " << "0000" << endl;
//	}
//	else {
//		while (true)
//		{
//			sort(n.begin(), n.end(), cmp);
//			string temp = n;
//			reverse(temp.begin(), temp.end());
//			int temp1 = atoi(n.c_str());
//			int temp2 = atoi(temp.c_str());
//			printf("%04d - %04d = %04d\n", temp1, temp2, temp1 - temp2);
//			if (temp1 - temp2 == 6174)
//			{
//				break;
//			}
//			n = to_string(temp1 - temp2);
//			n.insert(0, 4 - n.size(), '0');
//		}
//	}
//	system("pause");
//	return 0;
//}