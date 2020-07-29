#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int calc(int a, int b);
//
//int main()

//{
	////printf("%d %d %d\n", 10, 20, 30);
	////printf("\n%d %d,%d\n", 10,20, 10+20);//  연산 형태로도 쓸수 있다.



	////printf("\n%d\n", 10);
	////printf("%c\n", 65);
	////printf("%g\n", 10.0);

	////printf("%c\n", 29);

	//int i;
	//
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", i);
	//}

	//printf("Hello World \n");

//	int c;
//	c = calc(1, 5);
//	printf("%d\n", c);
//
//
//
// }
//	
//int calc(int a, int b)
//{
//	int i;
//	int n = 0;
//
//	for (i = a; i <= b; i++)
//		n = n + i;
//
//	return n;
//
//}



//
//void say_hello(void);
//
//int main() 
//
//{
//
//	int x, y, z;
//
//	x = 1;
//	y = 20;
//	z = 3;
//	z = x + y;
//
//	say_hello();
//
//	return 0;
// }
//
//
//void say_hello(void)
//{
//	int x = 1;
//	x = 10;
//
//	printf("Hello, World:\n");
//
//	return;
//}



//void swap(int*, int*);
//void sum(int, int);
//
//main()
//
//{
//	sum(1, 5);
//	sum(10,5);
//	sum(1,10);
//	sum(2, 2);
//
//
//}
//
//void swap(int *a, int *b)
//{
//	int temp;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//void sum(int min, int max)
//{
//	int n, i;
//	
//
//	if (min > max)
//		swap(&min, &max);
//
//	printf("%d", min);
//	n = min;
//
//	for (i = min+1; i <= max; i++)
//	{
//		printf("%d",i);
//		n += i;
//
//	}
//
//	printf("=%d\n", n);
//	printf("%d 에서 %d 까지의 합은 %d\n\n", min, max, n);
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d %d\n", a, b);
//
//	int t = a;  //swap a,b
//	a = b;
//	b = t;
//
//	printf("%d %d\n", a,b);
//}

//int main()
//{
//	printf("%d  %c \n", 65, 65);
//	printf("%d  %c\n ",  'A', 'A');
//	printf("%d  %c ",  'T', 'T');
//	
//}

//
//int main()
//{
//	int n = 15;
//
//	printf("제 나이는 %d살 입니다. ", n);
//
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int t = a;
//	a = b;
//	b = t;
//
//	printf("%d %d %d\n", a, b, t);
//}

//int int()
//
//{
//	int a;
//	int n;
//	a = 10;
//	n = 50;
//	
//
//	printf("%d\n", a);
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//
//	int a = 1;
//	int b = 19;
//	int x;
//
//	x = a;
//	a = b;
//	a = x;
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	printf("%c %c %c %c \n", 77, 111, 99, 97);
//
//	printf("%d %d %d %d \n", '0', '1', '2', '3'); //'0' '1' '2' '3' 문자이다..데이타가 이니다.//아스키코드
//
//	printf("%d %d %c\n", 65, 'a', 65);
//
//	return 0;
//}


//
//int main()
//{
//	// 진수 변화
//	// scanf()함수 사용해야 겠다.
//	//산술 연산자.
//
//printf("%x\n",23);// 16진수 출력
//printf("%o\n", 23);// 8진수 출력
//printf("%d\n", 0b00010111); //정수 출력
//printf("%d\n", 0x23);//16진수를 정수출력
//printf("%d\n", 0b00100011);//2진수를 정수 출력
//
//return 0;
//
//}



//int main()
//{
//	printf("%o\n", 156);// 156을 8진수로 
//printf("%O\n", 156); // 0이 나온다 대문자 O는 사용 안된다.

//	return 0;
//}

//
//
//int main()
//{
//	printf("%d\n", 0xF3);//16진수 정수 변환
//	printf("%o\n", 129);//정수 8진수 변환 
//	printf("%d\n", 0xA4D);  // 16진수를 정수로
//	printf("%o\n", 0xA4D);// 16진수를 8진수로
//	printf("%X\n", 235); // 10진수 16진수 변환 대문자
//	printf("%x\n", 235);//소문자 
//	return 0;
//}

//int main()
//{
//	int n=0;
//	printf("점수 입력 =");
//	scanf("%d",&n);
//	printf("당신의 점수는 %d 입니다.\n", n);
//
//	return 0;
//}

//int main()
//{
//	int n;
//	printf("점수를 입력해 주시와요..!!!\n");
//	scanf("%d", &n);
//	printf("당신의 16진수 주소는 %X 입니다.", n);
//
//	return 0;
//}

//int main()
//{ 
//	unsigned char p;
//	p = 0x00;
//	int a;
//	printf("숫자를 입력해 주세요...!!!\n");
//	scanf("%d", &a);
//
//	printf("당신의 행운의 8진수는 %o 입니다.\n", a);
//	printf("당신의 행운의 16진수는 %X 입니다.\n", &a);
//
//	printf("당신의 행운의 2진수는 %c입니다.\n", p);
//	printf("당신의 행운의 메모리 주소는 %p\n ", &a);
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main(void)
//
//{
//    int decimal;
//    int binary[50] = { 0 };
//    int i, j;
//    int num = 0;    //몇번째 자리까지 있는지 세기위해 만든 변수
//
//    printf("정수를 입력하세요. ");
//    scanf("%d", &decimal);
//    printf("이진수 : ");
//
//
//    for (i = 0; decimal > 0; i++)    //decimal이 0이되는 순간 for문 종료
//    {
//        if ((decimal % 2) == 0)        //decimal이 2로 나누어떨어지면
//        {
//            binary[i] = 0;            //binary[i]에 0저장
//            decimal = decimal / 2;    //decimal을 2로 나눈값을 decimal에 저장
//            num++;                    //num 1증가
//        }
//
//        else
//        {
//            binary[i] = 1;            //decimal이 2로 나누어떨어지지 않으면 binary[i]에 1저장
//            decimal = decimal / 2;    //decimal을 2로 나눈값을 decimal에 저장
//            num++;                    //num 1증가
//        }
//    }
//
//    //이때까지는 이진수가 역순으로 저장된다.
//    //따라서 정상적으로 뒤집어 줘야할 필요가 있다.(아래쪽 for문)
//
//    for (j = 1; j <= num; j++)            //j = 1부터 (num - 1) ~ 0까지 이기때문에
//    {                                    //num(위쪽 for문에서 증가된값)값은 binary[i]에 저장된 값의 개수
//        printf("%d", binary[num - j]);    //(num - j) 이렇게 하면 역순으로 출력된다.
//
//        if ((num - j) % 4 == 0)
//        {
//            printf(" ");    //4자리수 마다 
//        }
//    }
//
//    printf("\n");
//    return 0;
//}

//
//int main()
//{
//	int a = 10, b = 3;
//
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	printf("%d\n", a % b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	a = b;// 스왑
//
//	printf("a 값은 %d\n", a);
//	printf("b 값은 %d\n", b);
//
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	a += b;//  a= a+b;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int b = 10;
//	int x = 0;
//	x = ++b; // 증가 한다음 x에 대입 그러니까.. X값은 b값이 먼저 증가 한다음 대입  된다.
//	
//	printf("%d\n", b);
//	printf("%d\n", x);
//
//	printf("\n-----------------------------\n");
//
//	int a = 10;
//	int r = 0;
//	
//	r = a++; // 대입한다음 증가 한다 그러니까 r값이 먼저 10이 되고. 그다음 a값이 증가 한다.
//
//	printf("%d\n", a);
//	printf("%d\n", r);
//
//	return 0;
//
//}

//int main()
//{
//	
//	int z= 20;
//
//	printf("%p\n", &z);  // 주소는 %p   데이터 z  &z)
//	printf("%d\n", z);
//
//	return 0;
//	
//}


// 연산자 

int main()
{
	int decimal;
	int binary[50] = { 0, };
	int i, j;
	int num = 0;

	printf("정수를 입력 하세요= ");
	scanf("%d", &decimal);
	printf(" 이진수 : ");


	for (i = 0; decimal > 0; i++)
	{
		if ((decimal % 2) == 0)
		{
			binary[i] = 0;
			decimal = decimal / 2;
			num++;
		}
		else
		{
			binary[i] = 1;
			decimal = decimal / 2;
			num++;

		}
	}


	for (j = 1; j <= num; j++)
	{
		printf("%d", binary[num - j]);

		if ((num -j) % 4 == 0)  //  (num = j)일때 에러는 안나지만 전혀 다른 값이 나온다.
		{
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}
