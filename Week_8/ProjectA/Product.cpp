#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cstdlib>

using namespace std;
#define N 2000000

int main()
{
	float* v1 = new float[N];
	float* v2 = new float[N];
	float dot_product = 0;
	srand((float)time(NULL));
	for (int i = 0; i < N; i++)
		v1[i] = rand() % 100;//Ϊ����v1��ֵ
	for (int i = 0; i < N; i++)
		v2[i] = rand() % 105;//Ϊ����v2��ֵ
	clock_t start, finish;
	float duration;
	start = clock();
	for (int i = 0; i < N; i++)
		dot_product += v1[i] * v2[i];//��������˽��
	cout << "dot_product=" << dot_product << endl;
	finish = clock();
	duration = (float)(finish - start) * 1000 / CLOCKS_PER_SEC;
	printf("%.2f milliseconds\n", duration);
	delete[] v1;
	delete[] v2;
	return 0;
}