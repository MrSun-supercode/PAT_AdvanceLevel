///*
//���۲�������͹鲢����Ķ��������ʡ�
//����������ߵ����������У��ұ����������У������������ҵ���һ���������п�ʼ��������Ȼ���жϺ�������V1��ȣ���û�����򣬲�������ֻ��ǰ�߿�ʼ�����ţ���˵���ǲ�������
//������ǹ鲢���򣬵��ǹ鲢��������ֻ������ģ�⣬�����Դ�ͷд����Ϊ�鲢������һ���ݹ�Ĺ��̣������޷����м������жϴӶ�������һ���Ĳ���
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//vector<int>V1;
//vector<int>V2;
//bool isSame(vector<int>V1, vector<int>V2)
//{
//	for (int i = 0; i < V1.size(); i++)
//	{
//		if (V1[i] != V2[i])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	V1.resize(n);
//	V2.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V1[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V2[i];
//	}
//	int i;
//	for (i = 0; i < n; i++)//�ж��ҵ�V2�е�һ���������������ֵ����j
//	{
//		if (V2[i] > V2[i + 1])
//		{
//			break;
//		}
//	}
//	int j = i + 1;
//	bool flag = false;
//	for (int i = j; i < n; i++)//��j��ʼ���������ֵV2��V1����ȣ���˵���ǲ�������
//	{
//		if (V1[i] != V2[i])
//		{
//			flag = true;
//			break;
//		}
//	}
//	if (!flag)
//	{
//		cout << "Insertion Sort" << endl;
//		sort(V2.begin(), V2.begin() + i + 1 + 1);//���������ڽ���һ���Ļ�ֻ����һ�����ּ��뵽ǰ���������н������򼴿�
//		for (int i = 0; i < n; i++)
//		{
//			if (i == 0)
//			{
//				cout << V2[i];
//			}
//			else cout << ' ' << V2[i];
//		}
//	}
//	else {
//		cout << "Merge Sort" << endl;
//		bool flag = false;
//		for (int step = 2; step / 2 < n; step *= 2)//���ﲻ��step/2�Ļ����Ե�3����ȥ,��Ϊ�����step<n�Ļ�step���8����ô���һ�˹鲢����ֻ�ܷ�Ϊ8,2���������У�������޷���10�����ֵ���������������������Ҫ��*2����������������У�Ȼ�����²�min(i+step,n)��ȡn
//		{
//			if (isSame(V1, V2))//�������ʽ����ȣ�˵���ҵ����м����У�Ȼ���ٽ���һ�β����������
//			{
//				flag = true;
//			}
//			for (int i = 0; i < n; i += step)//���й鲢�����ģ����̣�����2Ϊ������������4������8������������step*=2
//			{
//				sort(V1.begin() + i, V1.begin() + min(i + step, n));//��min(i+step��n)��ʾ������������Ϊ10������4λ����ʱ�������в���4������ֻ��2�����������min�Ļ�V2�ᳬ������ֵ�����Ը���һ���߽磬���i+step��n���ˣ���ô���Ľ��޾���n
//			}
//			if (flag)//���flagΪtrue�����ɣ���Ϊ�ϲ��Ѿ�����ȵĻ����϶������һ��������
//			{
//				for (int i = 0; i < n; i++)
//				{
//					if (i == 0)
//					{
//						cout << V1[i];
//					}
//					else cout << ' ' << V1[i];
//				}
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}