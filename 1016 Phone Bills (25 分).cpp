//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<map>
//#include<vector>
//using namespace std;
//struct node {
//	string name;//�˵�������
//	bool status;//�˵���״̬��on-line ������off-line
//	int month, day, hour, minute;//�˵����·ݣ��죬Сʱ�Լ�����
//	int time;//��Ӧ���ܷ������������0��
//};
//int rate[24] = { 0 };//��ÿ��ʱ��ε��շѴ�������rate�У�ע��rate[24]��������ʱ����շ�֮�ͣ����ڼ�������ķ��ü�ͨ��n����ķ���Ϊrate[24]*60*n
//bool cmp(node a, node b)
//{//���������򣺵�������ͬʱ����ͨ��ʱ���С�������򣻵�������ͬʱ���������ֵ����С���������������ڲ�������
//	return a.name == b.name ? a.time < b.time : a.name < b.name;//
//}
//double billFormZero(node a, int* rate)//�ú������ڼ����0��a������ݵ�ʱ�������ѵķ���
//{
//	double total = rate[a.hour] * a.minute + rate[24] * 60 * a.day;//����ǰ���з��ӵĻ����Լ���ǰ�����������Ļ������
//	for (int i = 0; i < a.hour; i++)
//	{
//		total += rate[i] * 60;//�ٽ�total���ϵ�ǰ������Сʱ�Ļ���
//	}
//	return total / 100.0;//ע���������Ԫ����rate��ÿ����/���ӣ�����100.0������С������������
//}
//int main(void)
//{
//	for (int i = 0; i < 24; i++)
//	{
//		cin >> rate[i];
//		rate[24] += rate[i];//ע��rate[24]��������ʱ����շ�֮�ͣ����ڼ�������ķ��ü�ͨ��n����ķ���Ϊrate[24]*60*n
//	}
//	int n;
//	cin >> n;
//	vector<node>List(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> List[i].name;
//		scanf_s("%d:%d:%d:%d", &List[i].month, &List[i].day, &List[i].hour, &List[i].minute);
//		List[i].time = List[i].day * 24 * 60 + List[i].hour * 60 + List[i].minute;
//		string temp;
//		cin >> temp;
//		if (temp == "on-line")
//		{
//			List[i].status = true;
//		}
//		else List[i].status = false;
//	}
//	sort(List.begin(), List.end(), cmp);
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << List[i].name << List[i].month << List[i].day << List[i].hour << List[i].minute << endl;
//	}*/
//	map<string, vector<node>>custom;
//	for (int i = 1; i < n; i++)//��������ݶ���������������custom�У���һ��statusΪtrue���ڶ���statusΪfalse
//	{
//		if (List[i].name == List[i - 1].name&&List[i].status == false && List[i - 1].status == true)
//		{
//			custom[List[i - 1].name].push_back(List[i - 1]);
//			custom[List[i].name].push_back(List[i]);
//		}
//	}
//	for (auto it : custom)
//	{
//		vector<node>temp = it.second;//it.firstΪ��ֵ��secondΪ���ݣ����ڴ���˵��itΪcustom�е�firstΪһ����secondΪ�ܶ�����ݣ�����it={"CYJJ","{status=true,status=false}"}
//		cout << it.first << ' ';
//		printf("%02d\n", temp[0].month);
//		double total = 0.0;
//		for (int i = 0; i < temp.size(); i += 2)//����aaa�������ͬ�������ݲ�һ������2����������2n��������Ҫi+=2
//		{
//			double t = billFormZero(temp[i + 1], rate) - billFormZero(temp[i], rate);
//			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2lf\n", temp[i].day, temp[i].hour, temp[i].minute, temp[i + 1].day, temp[i + 1].hour, temp[i + 1].minute, temp[i + 1].time - temp[i].time, t);
//			total += t;
//		}
//		cout << "Total amount: $";
//		printf("%.2lf\n", total);
//	}
//	system("pause");
//	return 0;
//}