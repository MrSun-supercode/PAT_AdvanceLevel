///*
//˼·����ǰ�������ʽ������������push�͸�ֵ������pop�͸�NULL��Ȼ�����������ĺ������
//����˼·��̫�ԣ�Ӧ������stack�������Եõ��������������Ȼ��ͨ���۲췢�ִ��ϵ��µ�˳����Ϊǰ�����
//��ͨ��ǰ���������������ƺ����������
////���һ�����Ե�δ���
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<stack>
//using namespace std;
//vector<int>preorder;//ǰ��������
//vector<int>inorder;//����������
//vector<int>postorder;
//vector<string>temp;
//stack<int>S;
//void post(int root, int left, int right)
//{
//	if (left > right)
//	{
//		return;
//	}
//	int rot = preorder[root];
//	int index;
//	for (int i = 0; i < inorder.size(); i++)
//	{
//		if (inorder[i] == rot)
//		{
//			index = i;
//			break;
//		}
//	}
//	post(root + 1, left, index - 1);
//	post(root + 1 + index - left, index + 1, right);
//	postorder.push_back(preorder[root]);
//}
//int main(void)
//{
//	string num;
//	getline(cin, num);
//	int n = atoi(num.c_str());
//	for (int i = 0; i < 2 * n; i++)
//	{
//		string str;
//		getline(cin, str);
//		temp.push_back(str);
//	}
//	int key = 0;
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (temp[i][1] == 'u')//Push
//		{
//			preorder.push_back(temp[i][5] - '0');
//			S.push(temp[i][5] - '0');
//		}
//		else {//Pop
//			inorder.push_back(S.top());
//			S.pop();
//		}
//	}
//	/*for (int i = 0; i < preorder.size(); i++)
//	{
//		cout << preorder[i] << ' ';
//	}
//	cout << endl;
//	for (int i = 0; i < inorder.size(); i++)
//	{
//		cout << inorder[i] << ' ';
//	}*/
//	post(0, 0, preorder.size() - 1);
//	for (int i = 0; i < postorder.size(); i++)
//	{
//		if (i != 0)
//		{
//			cout << ' ' << postorder[i];
//		}
//		else cout << postorder[i];
//	}
//	system("pause");
//	return 0;
//}