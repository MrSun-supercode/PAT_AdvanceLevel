///*
//˼·��ֱ�ӽ�����ʽ����������ŵ�vector�У����������λ�������Ե�5678�ڴ泬�ޣ��������������ʽ�����ϵ�vector�е���vector�ڴ泬�ޣ�
//*/
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cmath>
////using namespace std;
////int main(void)
////{
////	vector<long int>V;
////	int n;
////	for (int i = 0; i < 2; i++)
////	{
////		cin >> n;
////		for (int i = 0; i < n; i++)
////		{
////			long int temp;
////			cin >> temp;
////			V.push_back(temp);
////		}
////	}
////	sort(V.begin(), V.end());
////	cout << V[(V.size() - 1) / 2] << endl;
////	system("pause");
////	return 0;
////}
///*
//˼·��ֻ������һ��ʽ�ӵ����֣�Ȼ��ڶ���ʽ�ӱ�������жϣ�Ȼ���ҵ���ֵ������ֻ�������ڶ������ڴ泬�ޱ�Ϊ�˴𰸴����������һ��
//*/
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cmath>
////using namespace std;
////int main(void)
////{
////	int n1, n2, index = 0, t, sum;
////	cin >> n1;
////	vector<long int>V(n1);
////	for (int i = 0; i < n1; i++)
////	{
////		cin >> t;
////		V[i] = t;
////	}
////	cin >> n2;
////	int mid = (n1 + n2 + 1) / 2;
////	bool flag = false;
////	for (int i = 0; i < n2; i++)
////	{
////		int temp;
////		cin >> temp;
////		flag = false;
////		for (auto it = V.cbegin(); it != V.cend();)
////		{
////			if (temp < (*it) && index != mid - 1) {
////				index++;
////				flag = true;
////				break;
////			}
////			else if (temp >= (*it) && index != mid - 1) {//���������ֱ��ɾ����
////				index++;
////				it = V.erase(it);
////			}
////			if (index == mid - 1) {
////				break;
////			}
////		}
////		if (index == mid - 1) {
////			if (V.size() == 0) {
////				sum = temp;
////				break;
////			}
////			else {
////				if (temp > V[0]) {
////					sum = V[0];
////					break;
////				}
////				else {
////					sum = temp;
////					break;
////				}
////			}
////
////		}
////	}
////	cout << sum << endl;
////	system("pause");
////	return 0;
////}
///*
//���S����˼·���ƣ����Ǳ��Ҽ򵥺ܶ�ܶ�
//*/
//#include<iostream>
//using namespace std;
//int n[200001];
//int main(void)
//{
//	int N,m,mid,i,cnt=0;
//	cin >> N;
//	for (i = 1; i <= N; i++)
//	{
//		cin >> n[i];
//	}
//	n[N+1]= 0x7fffffff;//���������һλ����Ϊ���޴��ֵ����ֹ����temp���n[i]���������������
//	cin >> m;
//	mid = (N + m + 1) / 2;//��λ��������
//	i = 1;//i��¼temp��n����Ƚ�ʱ�Ƚϵ����±�
//	for (int j = 0; j < m; j++)
//	{
//		int temp;
//		cin >> temp;
//		while (temp>n[i])//���temp��n[i]��,cntҪ��һ��iҲҪ��һ�����´�ֱ��������ǰn��λ�ã�����ʱҲΪ����temp�ȵ�ǰi����֮������ֵ���������
//		{
//			cnt++;
//			if (cnt==mid)
//			{
//				cout << n[i]<<endl;
//			}
//			i++;
//		}
//		cnt++;//���temp��n�����һ������С����ôֱ��cnt��һ��Ȼ���ж�
//		if (cnt==mid)
//		{
//			cout << temp << endl;
//		}
//	}
//	while (i<=N)//���������ɺ�û�н����˵����λ��λ��n�����ڣ����i��λ�ÿ�ʼ������ֱ���ҵ���λ��
//	{
//		cnt++;
//		if (cnt == mid)
//		{
//			cout << n[i] << endl;
//			break;
//		}
//		i++;
//	}
//	system("pasue");
//	return 0;
//}