///*
//˼·��ʹ��̰���㷨���Ҿֲ����Ž⼴��
//0.���յ㴦����Ϊһ������վ���۸�Ϊ0������ΪDis,���������ҳ��Ƿ��ܵ��յ㣨��Ϊ�յ����վ�ļ۸�Ϊ0��������������������station[i]-station[now]<=max_run_dis���ж��Ƿ���Ե����յ㣩
//1.��Ϊһ��ʼ�����ǿյģ�����ֻҪ��һ������վ��λ�ò���0��������Ҳ�߲��ˣ����0
//2.����ǰ������λ�ó�ʼ����0�����ٴ�1һֱ������ң���0�������Ϳ��Ե���ģ���С�۸�ļ���վ�����������
//2.1��������ļ���վ�ļ۸񶼱ȵ�ǰ������λ�õļ۸�����ҳ���������վ������С��һ������վ��Ȼ�󽫳������͹�ȥ����ʱʹ�õ��ͱȵ��Ǹ�����վ���ͱ��ˣ�
//2.2��������ļ���վ�ļ۸���ڱȵ�ǰ������λ�õļ۸�С�����ͼӵ����õ���ü���վ���ͣ�Ȼ���ٴ��Ǹ�����վ����
//3.����ܵ�������total_price��������ܵ������������ǰ��������վ�ľ���station[now].dis���ϼ����ͺ������Ե���ľ���max_run_dis
//*/
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	double price;
//	double dis;
//}station[501];
//bool cmp(node a, node b)
//{
//	return a.dis < b.dis;
//}
//int main(void)
//{
//	int n;
//	double  maxTank, Dis, aver;
//	cin >> maxTank >> Dis >> aver >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> station[i].price >> station[i].dis;
//	}
//	station[n].dis = Dis;//�����յ����վ
//	station[n].price = 0;
//	double  max_run_dis = maxTank * aver;
//	sort(station, station + n, cmp);
//	if (station[0].dis != 0)//һ��ʼ������û���͵ģ������һ������վ��λ�ò��ǳ�ʼλ�õĻ���������������ȥ
//	{
//		cout << "The maximum travel distance = 0.00" << endl;
//		system("pause");
//		return 0;
//	}
//	double total_price = 0.00;//�����ѵ��ܼ�Ǯ
//	int now = 0;//��ǰ�������ļ���վ,��������վ����С�۸�,��С�۸��Ӧ�ļ���վ,��ǰ�����е���
//	double  nowTank = 0;
//	//ÿ��ѭ��ѡ��Ҫȥ����һ������վ
//	while (now < n)
//	{									//�����ļ���վ�뵱ǰ����վ֮��ľ���Ҫ�ȳ�����ʻ��������С,�����Ҫ�������ж������Ƿ�������ȫ��
//		int k = -1;//ÿ��ѭ��ʱ��Ҫ����k��min_price�ĳ�ʼ������Ϊÿ��ѭ����������������ı�
//		double min_price = 100000;
//		for (int i = now + 1; i <= n && station[i].dis - station[now].dis <= max_run_dis; i++)
//		{
//			if (station[i].price < min_price)//�Һ�������վ����С�۸���Ǹ�����վ
//			{
//				min_price = station[i].price;
//				k = i;
//				if (min_price < station[now].price)//1.�����������վ�ļ۸�ȵ�ǰ����վ�ļ۸񻹵ͣ�����������õ����Ǹ�����վ����
//				{								 //2.�����������վ�ļ۸񶼱ȵ�ǰ�۸�ߣ����������if��ѭ�������ҵ���������վ����С�۸���Ǹ�����վ��Ȼ���ȴӵ�ǰ����վ�����ͣ��ٵ��Ǹ�����վ
//					break;
//				}
//			}
//		}
//		if (k == -1)//����״̬���޷��ҵ�����վ
//		{
//			break;
//		}
//		double need = (station[k].dis - station[now].dis) / aver;//�ӵ�ǰ����վ�������۸���͵ļ���վ����Ҫ����
//		if (station[k].price < station[now].price)//����1�����
//		{
//			if (nowTank < need)// ��Ҫ���ͱȵ�ǰ�����е��Ͷ�
//			{
//				total_price += (need - nowTank)*station[now].price;
//				now = k;//��ǰ����վ��k����վ
//				nowTank = 0;//����k����վ֮������û�����ˣ�����nowTank=0
//			}
//			else {// ��Ҫ���ͱȵ�ǰ�����е����٣�����ǰ������͹���k����վ��,����Ҫ����
//				nowTank -= need;
//				now = k;
//			}
//		}
//		else {//����2�����,���ȼ����ͣ��ٵ�k
//			total_price += (maxTank - nowTank) * station[now].price;
//			nowTank = maxTank - need;
//			now = k;
//		}
//	}
//	if (now == n)
//	{
//		printf("%.2lf\n", total_price);
//	}
//	else {
//		printf("The maximum travel distance = %.2lf\n", station[now].dis + max_run_dis);//������ܹ�����ȫ�̵Ļ������ٿ����ߵ���ǰ����վ�ľ�������ڵ�ǰ����վ���ͼ����ľ���
//	}
//	system("pause");
//	return 0;
//}