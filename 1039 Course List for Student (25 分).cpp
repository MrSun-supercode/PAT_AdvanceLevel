///*
//˼·������ĸ����ˣ������������������άvector��Ȼ�󽫿γ̵ı���Լ�ÿ���γ̵��˴��ȥ��Ȼ��������һ��vector��
//ѧ�����ȥ��Ȼ���ѧ����ʼ������������ѧ������ǰ�Ķ�άvector�г��֣������γ̺��Լ��γ�������ʱ�临�ӶȺͿռ临�Ӷ�̫�ߣ����Ǻܺõ�˼·��
//���һ�����Ե�δ��ͨ�����÷�23�֣���������debug�˺þã�
//�ջ�find(V.begin(),V.end(),temp)!=V.end()���ֻ�����ڻ��������ݽṹ�������������Լ�������struct node
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	string name;
//	int class_num = 0;
//	vector<int>C;//class���±�
//};
//struct stu {
//	string name;
//	int class_index;
//};
//int main(void)
//{
//	int n, k;
//	cin >> n >> k;
//	vector<vector<stu>>V(k);
//	vector<node>Stu(n);
//	for (int i = 0; i < k; i++)
//	{
//		int num, index;
//		cin >> index >> num;
//		V[i].resize(num);
//		for (int j = 0; j < num; j++)
//		{
//			cin >> V[i][j].name;
//			V[i][j].class_index = index;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> Stu[i].name;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			for (int m = 0; m < V[j].size(); m++)//����V[j]���Ƿ���Stu[i].name
//			{
//				if (V[j][m].name == Stu[i].name)
//				{
//					Stu[i].class_num++;
//					Stu[i].C.push_back(V[j][m].class_index);//��Ϊ�Ǵ�1-k����������push_back���������ʱ����С�����˳��Ͳ���Ҫ��������
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (Stu[i].C.size() > 1)
//		{
//			sort(Stu[i].C.begin(), Stu[i].C.end());
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << Stu[i].name << ' ';
//		int temp = Stu[i].class_num;
//		if (temp != 0)
//		{
//			cout << temp;
//			for (int j = 0; j < temp; j++)
//			{
//				cout << ' ' << Stu[i].C[j];
//			}
//			cout << endl;
//		}
//		else {
//			cout << temp << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}