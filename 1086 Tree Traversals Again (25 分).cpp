///*
//思路：用前序遍历方式建立树，遇到push就赋值，遇到pop就赋NULL，然后最后输出树的后序遍历
//上述思路不太对，应该是由stack建树可以得到树的中序遍历，然后通过观察发现从上到下的顺序其为前序遍历
//则通过前序遍历和中序遍历推后序遍历即可
////最后一个测试点段错误
////最后一个测试点更改成了答案错误
////之前的思路是将所有的push和pop输入全部放入一个向量temp中，然后再从temp中从0-temp.size()-1,依次判断是push还是pop
//做对应的提取并放入preorder和S或者是S.top()放入inorder然后S.pop()
//现在只需定义一个大小为5的字符数组（push和pop最大才是5，注意最后还有一个多加的\n），然后判断是push还是pop，做对应的操作跟上述一样，只是当是push
//时需要再输入一个int型整数。这个方法最后一个测试点AC
//目前不太清楚为什么
//合着当用stack创建树时只能一步一步来，不可以提前保存然后再做处理吗？
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<stack>
//using namespace std;
//vector<int>preorder;//前序遍历结果
//vector<int>inorder;//中序遍历结果
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
//	for (int i = left; i <= right; i++)//将i=0;i<inorder.size()改成left和right后，最后一个测试点为答案错误
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
//	char temp[5];//定义字符数组，输入Push或Pop
//	for (int i = 0; i < 2 * n; i++)
//	{
//		cin >> temp;
//		if (strlen(temp) == 4)//Push，注意strlen的头文件是<cstring>而不是<string>
//		{
//			int tmp;
//			cin >> tmp;//还需要再输入一个整数
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
//	//以下是测试函数
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