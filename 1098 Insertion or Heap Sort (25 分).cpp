///*
//�������˼·��1089���ƣ�Ҳ�����ж��Ƿ��ǲ���������������һ���Ƕ�����Ȼ���ն�����ĵݹ鷽����ÿ��������Ѹ��ڵ�
//���ҵ��������֮���ж��Ƿ��V2һ�£���һ�¼�������һ�ε���������������������
//�������ʵ�ֺܱ�׼��ע�����������������vector�ж��Ǵ�1-n���±�����ģ��±�0û���õ���������Կ������ݽṹ399ҳ��ipad��Ϊ423ҳ��
//���ĺ�ͨ͸�ˣ���Ҳ���ȿ���ʵ���������⣬�о��������ˣ����̽���ʦ����ޡ�
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int>V1;
//vector<int>V2;
//void HeapSort(vector<int>V);//���������
//void adjustHeap(vector<int>&V, int s, int m);//��swap��Ķѵ���Ϊ�����
//bool isSame(vector<int>V1, vector<int>V2)
//{
//	for (int i = 1; i < V1.size(); i++)
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
//	V1.resize(n + 1);
//	V2.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> V1[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> V2[i];
//	}
//	int index = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (V2[i] > V2[i + 1])
//		{
//			index = i;
//			break;
//		}
//	}
//	index++;
//	bool flag = false;
//	for (int i = index; i <= n; i++)
//	{
//		if (V1[i] != V2[i])
//		{
//			flag = true;
//			break;
//		}
//	}
//	if (flag)//HeapSort
//	{
//		cout << "Heap Sort" << endl;
//		HeapSort(V1);
//	}
//	else {
//		cout << "Insertion Sort" << endl;
//		sort(V2.begin(), V2.begin() + index + 1);
//		for (int i = 1; i <= n; i++)
//		{
//			if (i == 1)
//			{
//				cout << V2[i];
//			}
//			else cout << " " << V2[i];
//		}
//	}
//	system("pause");
//	return 0;
//}
//void HeapSort(vector<int>V)//���������
//{
//	for (int i = (V.size() - 1) / 2; i > 0; i--)
//	{
//		adjustHeap(V, i, V.size() - 1);//��������ѣ�ֻ�蹹�����ӽڵ�Ľڵ㣩
//	}
//	for (int i = (V.size() - 1); i > 1; i--)//��Ϊ��һֱ��1���������Բ���Ҫ����1
//	{
//		swap(V[1], V[i]);//����һ�Σ��������ݣ��ѵĸ��ڵ�һֱΪ��ǰ�ѵ����ڵ㣩��������vector���һλ���Դ�����
//		adjustHeap(V, 1, i - 1);//�������ٵ�����ʹ��Ϊ�����
//		if (isSame(V, V2))
//		{
//			i--;//��Ϊ�����Ҫ�����һ�ε������̣����Ա�����i--
//			swap(V[1], V[i]);
//			adjustHeap(V, 1, i - 1);
//			for (int i = 1; i < V.size(); i++)
//			{
//				if (i == 1)
//				{
//					cout << V[i];
//				}
//				else cout << ' ' << V[i];
//			}
//			return;
//		}
//	}
//}
//void adjustHeap(vector<int>&V, int s, int m)//��swap��Ķѵ���Ϊ�����
//{
//	int temp = V[s], j;
//	for (j = 2 * s; j <= m; j *= 2)//s���������ӽڵ㣬��ô2*sһ���������ӽڵ��±꣬��2*s+1һ���������ӽڵ��±�
//	{
//		if (j < m&&V[j] < V[j + 1])//j<m��֤��ǰs�����������ӽڵ�һ����j��һ����j+1
//		{
//			j++;//��s�������ӽڵ������Ǹ�����j++˵�����ӽڵ�����ӽڵ�󣬷���j����
//		}
//		if (temp > V[j])//�����ǰ�ڵ��Ѿ������ҽڵ�����ֵ�������轻�����˳�����
//		{
//			break;
//		}
//		V[s] = V[j];//s��ֵΪj��ע���ʱj�±��ֵ��Ȼû��
//		s = j;//s=j,��������s��j�ڵ���ӽڵ�
//	}
//	V[s] = temp;
//}