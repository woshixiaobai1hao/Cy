#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//void reverse(char* str)
//{
//	//����
//	assert(str);
//	//�ַ�������
//	int len = strlen(str);
//	char*left = str;
//	char*right = str + len - 1;
//	//����
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	/*scanf("%s", arr);*/
//	//��ȡһ��
//	gets(arr);
//	//�����ַ���
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d%d",&n,&i);
//	int sum = 0;
//	int j = 0;
//	int l = 0;
//	l = n;
//	for (j = 0; j < i; j++)
//	{
//
//		sum = sum + n;
//		n = n * 10 + l;
//	}
//	printf("%d", sum);
//	return 0;
//}
//����1��100000��ˮ�ɻ���
//
//��ӡ
//     *
//    ***
//   *****
//  *******
// *********
//***********
// *********
//  *******
//   *****
//    ***
//	   *
int main()
{
	int i = 0;
	scanf("%d", &i);
	int n = 0;
	//��ӡ�ϰ벿��
	for (n = 0; n < i; n++)
	{
		int j = 0;
		for (j = 0; j <i-1-n; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*n+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (n = 0; n < i - 1; n++)
	{
		int j = 0;
		for (j = 0; j < n + 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (i - 1 - n) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}