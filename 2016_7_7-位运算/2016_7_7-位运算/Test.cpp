#include<stdio.h>

////1��ͳ��һ�����������е�1�ĸ�����
//int Count_one_bit(int num)
//{
//	int count = 0;
//	int n = num;
//	while (num)
//	{
//		count++;
//		num&=(num - 1);
//	}
//	printf("%d:%d\n", n,count);
//	return count;
//}
//int main()
//{
//	int num1 = 15;
//	Count_one_bit(num1);
//	int num2 = -1;
//	Count_one_bit(num2);
//	return 0;
//};


////2����֪������int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬô��
//int Count_diff_bit(int m, int n)
//{
//	int a = m^n;
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a = a&(a - 1);
//	}
//	printf("%d��%d�����Ʊ���в�ͬ��λ�У�%dλ��\n", m,n,count);
//	return count;
//
//}
//
//int main()
//{
//	//int a = 15;//0000 1111
//	//int b = 10;//0000 1010
//	int a = 1999;
//	int b = 2299;
//	Count_diff_bit(a, b);
//	return 0;
//}


//3���ж�һ�����ǲ���2 ��n�η���
bool Is_two_n(int num)
{
	if (!(num&(num-1)))
	{
		printf("%d��2��n�η���\n", num);
		return true;

	}
	else
	{
		printf("%d����2��n�η���\n", num);
	}
	return false;
}
int main()
{
	int num = 18;
	Is_two_n(num);
	return 0;
}


////4��дһ���궨�壬ʵ�ֵĹ����ǽ�һ��int�͵�������żλ������
////���磺6�Ķ�����λ0110����һλ��ڶ�λ����������λ�����λ�������õ�1001,���Ӧ��Ϊ9��
//
//#define CHANGE(NUM) ((NUM&0x55555555)<<1)|((NUM&0xaaaaaaaa)>>1)
//
//int main()
//{
//	int num = 6;
//	int ret=CHANGE(num);
//	printf("%d��żλ�������Ϊ��%d\n",num, ret);
//	return 0;
//}

////5����һ�����Ķ�������������Ȼ���������֮��Ķ�������������Ӧ������
//int Reverse_num_bit(int num)
//{
//	int i = 0;
//	int ret = 0;
//	for (; i < 32; i++)
//	{
//		ret <<= 1;
//		ret |= ((num >> i) & 1);
//	}
//	printf("%d�Ķ���������֮��Ϊ%d\n", num, ret);
//	return ret;
//}
//int main()
//{
//	int num = 10;
//	Reverse_num_bit(num);
//	return 0;
//
//}


////6����дһ������������������Խ�һ��������ָ��λ��1����0
//int Set_Pos_bit(int num,int pos,int flag)
//{
//	if (flag == 1)
//	{
//		num |= (1 << (pos - 1));
//	}
//	else if (flag == 0)
//	{
//		num &= (1 << (pos - 1));
//	}
//	printf("%d\n", num);
//	return num;
//}
//
//int main()
//{
//	int num = 5;
//	Set_Pos_bit(num, 2, 1);
//	return 0;
//}

////7����һ������ֻ��һ����ֻ������һ�Σ��������������ǳɶԳ��֣���ô�ҳ��������������
//int Find_single_num(int arr[], int size)
//{
//	int i = 0;
//	int ret = 0;
//	for (; i < size; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("Single num :%d\n", ret);
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 5, 4, 1, 2, 5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Find_single_num(arr, size);
//	return 0;
//}


////8������������ֻ��������ֻ������һ�Σ��������������ǳɶԳ��֣���ô�ҳ�����������������
//void Find_single_two_num(int arr[], int size,int* p1,int* p2)
//{
//	int i = 0;
//	int pos = 0;
//	int xor = 0;
//	for (; i < size; i++)
//	{
//		xor = xor^arr[i];//xor��ֵΪ���������������
//	}
//	int tmp = xor;
//	while (xor)//�ҵ�xor�еĵ�һ������λΪ1��λ��,����������ֵ��ͬ��λ
//	{
//		if ((xor & 1) == 1)
//		{
//			break;
//		}
//		pos++;
//		xor >>=1;
//	}
//	for (i = 0; i < size; i++)//���飬������������ֵ�ֵ�������ͬ����
//	{
//		if ((arr[i] >> pos) & 1)
//		{
//			*p1^= arr[i];
//		}
//		else
//		{
//			*p2 ^= arr[i];
//		}
//	}	
//	return;
//}
//int main()
//{
//	int arr[] = { 1, 2, 5, 7, 1, 2, 5 ,8};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int p1=0;
//	int p2=0;
//	Find_single_two_num(arr, size, &p1, &p2);
//	printf("Single num1 :%d\n", p1);
//	printf("Single num2 :%d\n", p2);
//	return 0;
//}