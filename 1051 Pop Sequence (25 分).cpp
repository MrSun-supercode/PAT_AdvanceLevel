///*
//˼·����������S�����˼·������ջģ�⣬�Ƚ����뱣��������Ȼ��1-N��˳�����ν�Ԫ�أ�Ҳ��1-N������ջ�У�ÿ��һ����
//���бȽϣ����ջ��Ԫ�س���m������ѭ��������NO����һ��cur������ĵ�һ��ֵ���±꿪ʼ�����������ջ��Ϊ�ղ���
//cur��Ӧ�������ֵ��ջ��Ԫ����ȣ������ε���ջ��Ԫ�أ�����curָ������ƶ���
//����ж��Ƿ�ȫ������������curҪָ��n��cur��0~n-1,�������һ��������cur++��cur==n��
//*/
//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//int main(void)
//{
//	int m, n, k;
//	cin >> m >> n >> k;
//	for (int i = 0; i < k; i++)
//	{
//		vector<int>temp(n);
//		for (int j = 0; j < n; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			temp[j] = tmp;
//		}
//		int cur = 0;
//		stack<int>s;
//		for (int x = 1; x <= n; x++)
//		{
//			s.push(x);
//			if (s.size() > m)//һ���������ж���������û������������������붼Ӧ�����������������������Ժ�Ͳ�һ����
//			{
//				break;
//			}
//			while (!s.empty() && temp[cur] == s.top())
//			{
//				s.pop();
//				cur++;
//			}
//		}
//		if (cur == n)
//		{
//			cout << "YES" << endl;
//		}
//		else cout << "NO" << endl;
//	}
//	system("pause");
//	return 0;
//}