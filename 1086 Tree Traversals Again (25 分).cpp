///*
//˼·����ǰ�������ʽ������������push�͸�ֵ������pop�͸�NULL��Ȼ�����������ĺ������
//����˼·��̫�ԣ�Ӧ������stack�������Եõ��������������Ȼ��ͨ���۲췢�ִ��ϵ��µ�˳����Ϊǰ�����
//��ͨ��ǰ���������������ƺ����������
////���һ�����Ե�δ���
////���һ�����Ե���ĳ��˴𰸴���
////֮ǰ��˼·�ǽ����е�push��pop����ȫ������һ������temp�У�Ȼ���ٴ�temp�д�0-temp.size()-1,�����ж���push����pop
//����Ӧ����ȡ������preorder��S������S.top()����inorderȻ��S.pop()
//����ֻ�趨��һ����СΪ5���ַ����飨push��pop������5��ע�������һ����ӵ�\n����Ȼ���ж���push����pop������Ӧ�Ĳ���������һ����ֻ�ǵ���push
//ʱ��Ҫ������һ��int������������������һ�����Ե�AC
//Ŀǰ��̫���Ϊʲô
//���ŵ���stack������ʱֻ��һ��һ��������������ǰ����Ȼ������������
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
//	for (int i = left; i <= right; i++)//��i=0;i<inorder.size()�ĳ�left��right�����һ�����Ե�Ϊ�𰸴���
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
//	/*if (root == 0)
//	{
//		cout << preorder[root];
//	}
//	else cout << preorder[root] << ' ';*/
//}
//int main(void)
//{
//	string num;
//	getline(cin, num);
//	int n = atoi(num.c_str());
//	char temp[5];//�����ַ����飬����Push��Pop
//	for (int i = 0; i < 2 * n; i++)
//	{
//		cin >> temp;
//		if (strlen(temp) == 4)//Push��ע��strlen��ͷ�ļ���<cstring>������<string>
//		{
//			int tmp;
//			cin >> tmp;//����Ҫ������һ������
//			preorder.push_back(tmp);
//			S.push(tmp);
//		}
//		else {//pop
//			inorder.push_back(S.top());
//			S.pop();
//		}
//	}
//	/*for (int i = 0; i < 2 * n; i++)
//	{
//		string str;
//		getline(cin, str);
//		temp.push_back(str);
//	}*/
//	//int key = 0;
//	//for (int i = 0; i < 2 * n; i++)
//	//{
//	//	if (temp[i][1] == 'u')//Push
//	//	{
//	//		preorder.push_back(temp[i][5] - '0');
//	//		S.push(temp[i][5] - '0');
//	//	}
//	//	else {//Pop
//	//		if (!S.empty())
//	//		{
//	//			inorder.push_back(S.top());
//	//			S.pop();
//	//		}
//	//	}
//	//}
//	//�����ǲ��Ժ���
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
//	for (int i = 0; i < n; i++)
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