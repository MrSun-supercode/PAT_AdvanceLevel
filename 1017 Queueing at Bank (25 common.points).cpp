////˼·:���Ƚ����е�ʱ��ȫ������Ϊ���������ڼ��㣨�Ժ�������ʱ�������ǿ�����������
////Ȼ�󽫺������ݴ���vector����ʱ��С��17:00֮ǰ�����ݣ�������ʱ���Ⱥ�˳���С��������
////Ȼ���趨k��window���ڣ�ÿ��window���ڼ�¼��ǰ����������ʱ�䣬��ʼ��Ϊ8:00��28800�룬����һ���˿�8:00����ռ��window16���ӣ���window[0]����ֵΪ28800+16*60
////��Ȼ����Ҫ�ҵ���Ӧ��window�ٽ��м��㣬��Ӧ��window���ҵ���ǰ����window����С��ֵ�����Ƚ��������window
////����˿�����ʱ������minwindow����ֱ�ӽ��з�������ȴ���������window��ֵ
////����˿�����ʱ������minwindowС������Ҫ���еȴ���sumֵ���£�windowֵҲҪ���¡�
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {//�˿���ʱ��Ľṹ��
//	int comingtime, processtime;
//}tempnode;
//bool cmp(node a, node b)//�Զ�������ʽ����С��������
//{
//	return a.comingtime < b.comingtime;
//}
//int main(void)
//{
//	int n, k;
//	cin >> n >> k;
//	int hour, minute, second, time;
//	vector<node>T;
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d:%d:%d %d", &hour, &minute, &second, &time);
//		int coming_time = hour * 3600 + minute * 60 + second;
//		if (coming_time > 61200) continue;//������ݲ�������ֱ������
//		tempnode.comingtime = coming_time;
//		tempnode.processtime = time * 60;//ע��������Ҫ*60��������Ϊ��
//		T.push_back(tempnode);
//	}
//	sort(T.begin(), T.end(), cmp);
//	vector<int> window(k, 28800);
//	double sum = 0.0;
//	for (int i = 0; i < T.size(); i++)
//	{
//		int current_index = 0, minwindow = window[0];//current_indexΪ��ǰ����Ĵ��ڣ�minwindowΪ���д����н�����������Ĵ��ڣ���Ϊ��һ���˿ͷ���Ĵ���
//		for (int j = 1; j < k; j++)
//		{
//			if (minwindow > window[j])
//			{
//				minwindow = window[j];
//				current_index = j;
//			}
//		}
//		if (T[i].comingtime >= minwindow)
//		{//��ǰwindowֵ��Ҫ����Ϊ�˿͵����ʱ��ӹ˿�ռ�õ�ʱ�䣨��Ϊ�˿���ʱ�Ž��еķ���
//			window[current_index] = T[i].comingtime + T[i].processtime;
//		}
//		else {//��ǰwindowֵ��Ҫ����Ϊ��ǰwindowʱ��+�˿�ռ��ʱ�䣨��Ϊ�˿͵ȴ����ڣ�ֱ�����ڿճ��Ž��з���
//			sum += (window[current_index] - T[i].comingtime);//�ȴ���ʱ�伴��ǰwindowֵ-�˿�����ʱ��
//			window[current_index] += T[i].processtime;
//		}
//	}
//	if (T.size() == 0)//���û�й˿ͷ��������0.0�������������else����Ϊ�κ���/0��T.size��û������
//	{
//		cout << "0.0" << endl;
//	}
//	else {
//		printf("%.1lf", sum / 60.0 / T.size());//���뻯Ϊ���ӣ�����ע�Ᵽ��һλС��������/60.0
//	}
//	system("pause");
//	return 0;
//}