///*
//˼·���Ƚ�������������Ȼ��ֱ��ǰ����ʹӺ���ǰ���У���̰���㷨���ֲ����Ž⣩
//��ǰ����������Ǹ�����������������ĳ˻����ӵ�sum�У������������������ߵ�Ԫ�ؿ϶�����С�ģ���������С��˺󸺸��������������������Ϳ��Եõ�һ���ϴ������
//�Ӻ���ǰ���������������������������ĳ˻����ӵ�sum�У�����������������ұߵ�Ԫ�ؿ϶������ģ���������������˵���Ҳ����Դ�
//ע�⣺ֻҪ����һ������*һ����������϶���ʹsum��С�����Բ�ѡ
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int n1, n2;
//	cin >> n1;
//	vector<int>V1(n1);
//	for (int i = 0; i < n1; i++)
//	{
//		cin >> V1[i];
//	}
//	cin >> n2;
//	vector<int>V2(n2);
//	for (int i = 0; i < n2; i++)
//	{
//		cin >> V2[i];
//	}
//	sort(V1.begin(), V1.end());//����
//	sort(V2.begin(), V2.end());
//	int pointer1, pointer2,sum=0;
//	pointer1 = 0, pointer2 = 0;//��ǰ�������
//	while (pointer1<n1&&pointer2<n2&&V1[pointer1]<0&&V2[pointer2]<0)//����ָ�붼������n1��n2�����Ҷ�Ӧ��ֵ��С��0
//	{
//		sum += V1[pointer1] * V2[pointer2];
//		pointer1++;//����ָ������ƶ�
//		pointer2++;
//	}
//	pointer1 = n1 - 1;//�Ӻ���ǰ����
//	pointer2 = n2 - 1;
//	while (pointer1>=0&&pointer2>=0&&V1[pointer1]>0&&V2[pointer2]>0) // ����ָ�붼��С��0�����Ҷ�Ӧ��ֵ������0
//	{
//		sum += V1[pointer1] * V2[pointer2];
//		pointer1--;
//		pointer2--;
//	}
//	//��������vector��һ����һ���������ݣ���ʹsum��С��
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}