//#include<iostream>
//#include<string>
//#include<cctype>
//using namespace std;
//int main(void)
//{
//	string type_in, type_out;
//	getline(cin, type_in);
//	getline(cin, type_out);
//	int front = 0, back = 0;
//	string ans = "";//ע�����ﲻ����ʹ��set���ϣ���Ϊ���ϻ��Զ��ź�λ�ã�������Ե�1��7TI�����7IT��
//	/*
//	һ�����߶���1����һ���Ļ����type_in��Ӧ���ַ�,ֻfront��1
//	*/
//	while (front < type_in.size())//��֤��������ˣ�����Ҫ��֤back<type_out.size()����Ϊ��������front��Ӧ�ģ���һback�ߵ�ͷ��front��һ���ߵ�ͷ��front�ߵ�ͷbackһ���ߵ�ͷ��
//	{
//		if (type_in[front] == type_out[back])//�������ַ����ĵ�ǰλ��һ������ͬ�������±�ֵ
//		{
//			front++;
//			back++;
//		}
//		else {//�����һ����һ����front��ֵû�д�ӡ������ɵģ�����ans����type_in[front]������front++
//			if (type_in[front] <= 'z'&&type_in[front] >= 'a')
//			{
//				type_in[front] = toupper(type_in[front]);//��Ϊ��д
//			}
//			if (ans.find(type_in[front]) == string::npos)//���ans�в�����type_in[front]�ټ��룬������������ظ�����
//			{
//				ans += type_in[front++];
//			}
//			else front++;//���ans�д���type_in[front]��������front++
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}