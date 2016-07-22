#include<stdio.h>

////1、统计一个数二进制中的1的个数。
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


////2、你知道两个int（32位）整数m和n的二进制表达中，有多少个位（bit）不同么？
//int Count_diff_bit(int m, int n)
//{
//	int a = m^n;
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a = a&(a - 1);
//	}
//	printf("%d与%d二进制表达中不同的位有：%d位。\n", m,n,count);
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


//3、判断一个数是不是2 的n次方。
bool Is_two_n(int num)
{
	if (!(num&(num-1)))
	{
		printf("%d是2的n次方。\n", num);
		return true;

	}
	else
	{
		printf("%d不是2的n次方。\n", num);
	}
	return false;
}
int main()
{
	int num = 18;
	Is_two_n(num);
	return 0;
}


////4、写一个宏定义，实现的功能是将一个int型的数的奇偶位互换。
////例如：6的二进制位0110，第一位与第二位互换，第三位与第四位互换，得到1001,输出应该为9；
//
//#define CHANGE(NUM) ((NUM&0x55555555)<<1)|((NUM&0xaaaaaaaa)>>1)
//
//int main()
//{
//	int num = 6;
//	int ret=CHANGE(num);
//	printf("%d奇偶位互换结果为：%d\n",num, ret);
//	return 0;
//}

////5、将一个数的二进制序列逆序，然后输出逆序之后的二进制序列所对应的数。
//int Reverse_num_bit(int num)
//{
//	int i = 0;
//	int ret = 0;
//	for (; i < 32; i++)
//	{
//		ret <<= 1;
//		ret |= ((num >> i) & 1);
//	}
//	printf("%d的二进制逆序之后为%d\n", num, ret);
//	return ret;
//}
//int main()
//{
//	int num = 10;
//	Reverse_num_bit(num);
//	return 0;
//
//}


////6、编写一个函数，这个函数可以将一个整数的指定位置1或置0
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

////7、给一组数，只有一个数只出现了一次，其他所有数都是成对出现，怎么找出这个单独的数？
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


////8、给两组数，只有两个数只出现了一次，其他所有数都是成对出现，怎么找出这两个单独的数？
//void Find_single_two_num(int arr[], int size,int* p1,int* p2)
//{
//	int i = 0;
//	int pos = 0;
//	int xor = 0;
//	for (; i < size; i++)
//	{
//		xor = xor^arr[i];//xor的值为两个单个数的异或
//	}
//	int tmp = xor;
//	while (xor)//找到xor中的第一个比特位为1的位置,就是两个单值不同的位
//	{
//		if ((xor & 1) == 1)
//		{
//			break;
//		}
//		pos++;
//		xor >>=1;
//	}
//	for (i = 0; i < size; i++)//分组，将两个单个的值分到两个不同的组
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