//顺序1
//#include<stdio.h>
//int main()
//{
//	float C, F;
//	scanf_s("%f", &F);
//	C = 5 * (F - 32) / 9;
//	printf("%.2f", C);
//	return 0;
//}

//顺序2
//#include<stdio.h>
//int main()
//{
//	char x, y, z;
//	scanf_s("%c", &x);
//	y = x + 32;
//	z = x + 33;
//	printf("%c%c", y, z);
//	return 0;
//}

//顺序3
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e, f, g, h, k;
//	scanf_s("%d", &k);
//	a = k % 2;
//	b = (k / 2) % 2;
//	c = (k / 4) % 2;
//	d = (k / 8) % 2;
//	e = (k / 16) % 2;
//	f = (k / 32) % 2;
//	g = (k / 64) % 2;
//	h = (k / 128) % 2;
//	printf("%d%d%d%d%d%d%d%d", h, g, f, e, d, c, b, a);
//	return 0;
//}

//顺序4
//#include<stdio.h>
//int main()
//{
//	int a, b, s;
//	scanf_s("%d%d", &a, &b);
//	s = a * b;
//	printf("%d", s);
//	return 0;
//}

//顺序5
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	float x;
//	scanf_s("%d%d%d", &a, &b, &c);
//	x = (a + b + c) / 3;
//	printf("%.2f", x);
//	return 0;
//}

//顺序7
//#include<stdio.h>
//int main()
//{
//	float r, s, v;
//	scanf_s("%f", &r);
//	s = 4 * 3.1415926 * r * r;
//	v = 4 * 3.1415926 * r * r * r / 3;
//	printf("%.2f %.2f", s, v);
//	return 0;
//}

//顺序8
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c, p, s;
//	scanf_s("%f%f%f", &a, &b, &c);
//	p = (a + b + c) / 2;
//	s = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("%.2f", s);
//	return 0;
//}

//顺序9
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c, p, x1, x2;
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	p = b * b - 4 * a * c;
//	x1 = (-b + sqrt(p)) / 2*a;
//	x2 = (-b - sqrt(p)) / 2*a;
//	printf("%.2lf %.2lf", x1, x2);
//	return 0;
//}

//顺序10
//#include<stdio.h>
//int main()
//{
//	float v0, t, a, s;
//	scanf_s("%f%f%f", &v0, &a, &t);
//	s = v0 * t + a * t * t / 2;
//	printf("%.2f", s);
//	return 0;
//}

//顺序11
//#include<stdio.h>
//int main()
//{
//	float r, l, s;
//	scanf_s("%f", &r);
//	l = 2 * 3.1415926 * r;
//	s = 3.1415926 * r * r;
//	printf("%.2f %.2f", l, s);
//	return 0;
//}

//顺序12
//#include<stdio.h>
//int main()
//{
//	int p, w, s;
//	double d,f;
//	scanf_s("%d%d%d%lf", &p, &w, &s, &d);
//	f = p * w * s * (1 - d);
//	printf("%.3lf", f);
//	return 0;
//}

//顺序13
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float h, t;
//	scanf_s("%f", &h);
//	t = sqrt(2 * h / 9.8);
//	printf("%.2f", t);
//	return 0;
//}

//顺序14
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, m, hundred, fifty, twenty, ten, five, one;
//	scanf_s("%d", &m);
//	a = m % 100;
//	hundred = (m - a) / 100;
//	b = a % 50;
//	fifty = (a - b) / 50;
//	c = b % 20;
//	twenty = (b - c) / 20;
//	d = c % 10;
//	ten = (c - d) / 10;
//	one = d % 5;
//	five = (d - one) / 5;
//	printf("%d %d %d %d %d %d", hundred, fifty, twenty, ten, five, one);
//	return 0;
//}

//选择1
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a > b&& b > c)
//	{
//		printf("%d", c);
//	}
//	else if (a > b&& c > b)
//	{
//		printf("%d", b);
//	}
//	else if(b>a&&c>a)
//	{
//		printf("%d", a);
//	}
//	return 0;
//}

//选择2
//#include<stdio.h>
//int main()
//{
//	int grade;
//	scanf_s("%d", &grade);
//	if (grade >= 90&&grade<=100)
//	{
//		printf("A");
//	}
//	else if (grade >= 80 && grade <= 89)
//	{
//		printf("B");
//	}
//	else if (grade >=70 && grade <= 79)
//	{
//		printf("C");
//	}
//	else if(grade>=60&&grade<=69)
//	{
//		printf("D");
//	}
//	else if (grade >= 0 && grade <= 59)
//	{
//		printf("E");
//	}
//	else
//	{
//		printf("error!");
//	}
//	return 0;
//}

//选择3
//#include<stdio.h>
//int main()
//{
//	int g, s, b, z;
//	scanf_s("%d", &z);
//	g = z % 10;
//	s = (z / 10) % 10;
//	b = z / 100;
//	printf("%d%d%d", g, s, b);
//	return 0;
//}

//选择4
//#include<stdio.h>
//int main()
//{
//	int l;
//	float j;
//	scanf_s("%d", &l);
//	if (l <= 100000)
//	{
//		j = l * 0.1;
//	}
//	else if (l > 100000 && l <= 200000)
//	{
//		j = 10000 + (l - 100000) * 0.075;
//	}
//	else if (l > 200000 && l <= 400000)
//	{
//		j = 17500 + (l - 200000) * 0.05;
//	}
//	else if (l > 400000 && l <= 600000)
//	{
//		j = 22500 + (l - 400000) * 0.03;
//	}
//	else
//	{
//		j = 25500 + (l - 600000) * 0.015;
//	}
//	printf("%.2f", j);
//	return 0;
//}

//选择5
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x, y;
//	scanf_s("%f", &x);
//	if (x<1)
//	{
//		y = x * x + 2 * x + sin(x);
//	}
//	else if (x >= 1 && x <= 10)
//	{
//		y = 2 * x - 1;
//	}
//	else
//	{
//		y = sqrt(2 * x * x * x - 11);
//	}
//	printf("%.2f", y);
//	return 0;
//}

//选择6
//#include<stdio.h>
//int main()
//{
//	char x;
//	scanf_s("%c", &x);
//	if (x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z')
//	{
//		printf("This is an alphabetic character\n");
//	}
//	else if (x >= '0' && x <= '9')
//	{
//		printf("This is a dight.\n");
//	}
//	else
//	{
//		printf("It is other character.\n");
//	}
//	return 0;
//}

//选择7
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		if (a == b == c)
//		{
//			printf("1");
//		}
//		else if (a == b || a == c || b == c)
//		{
//			printf("2");
//		}
//		else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a)
//		{
//			printf("3");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	else
//	{
//		printf("error!\n");
//	}
//	return 0;
//}

//选择8
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	scanf_s("%d", &a);
//	if (a >= 1 && a <= 100)
//	{
//		b = a * a;
//		printf("%d", b);
//	}
//	else
//	{
//		printf("-1\n");
//	}
//	return 0;
//}

//选择9
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf_s("%d", &a);
//	if (a <= 20 && a >= 0)
//	{
//		b = a * a * a;
//		printf("%d", b);
//	}
//	else
//	{
//		printf("-1\n");
//	}
//	return 0;
//}

//选择10
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}

//选择11
//#include<stdio.h>
//int main()
//{
//	int mouth;
//	scanf_s("%d", &mouth);
//	switch (mouth)
//	{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("31\n"); break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("30\n"); break;
//			case 2:printf("28\n"); break;
//			default:printf("error!\n");
//		break;
//	}
//	return 0;
//}

//选择12
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a != 0)
//	{
//		d = b * b - 4 * a * c;
//		if (d > 0)
//		{
//			printf("2\n");
//		}
//		else if (d = 0)
//		{
//			printf("1\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//	else
//	{
//		printf("error!\n");
//	}
//	return 0;
//}

//选择13
//#include<stdio.h>
//int main()
//{
//	int s;
//	double y;
//	scanf_s("%d", &s);
//	if (s < 250 && s >= 0)
//	{
//		y = 10 * s;
//	}
//	else if (s >= 250 && s < 500)
//	{
//		y = 10 * s * 0.98;
//	}
//	else if (s >= 500 && s < 1000)
//	{
//		y = 10 * s * 0.95;
//	}
//	else if (s >= 1000 && s < 2000)
//	{
//		y = 10 * s * 0.92;
//	}
//	else if(s>=2000&&s<3000)
//	{
//		y = 10 * s * 0.9;
//	}
//	else if (s >= 3000)
//	{
//		y = 10 * s * 0.85;
//	}
//	else
//	{
//		printf("error!\n");
//	}
//	printf("%.2lf", y);
//	return 0;
//}

//选择14
//#include<stdio.h>
//int main()
//{
//	char level;
//	scanf_s("%c", &level);
//	switch (level)
//	{
//	case 'A':printf("85-100\n"); break;
//	case 'B':printf("70-84\n"); break;
//	case 'C':printf("60-69\n"); break;
//	case 'D':printf("0-60\n"); break;
//	default:printf("error!"); break;
//	}
//	return 0;
//}

//选择15
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c, d, e, f, g, h;
//	scanf_s("%d%d", &a, &b);
//	c = a + b;
//	d = a - b;
//	e = sqrt(c);
//	f = sqrt(d);
//	g = e * e;
//	h = f * f;
//	if (a < b)
//	{
//		printf("error!");
//	}
//	else if (a > b&& g == c && h == d)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}

//选择16
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	scanf_s("%d", &x);
//	if (x > -5 && x < 0)
//	{
//		y = x;
//	}
//	else if (x == 0)
//	{
//		y = x - 1;
//	}
//	else if (x > 0 && x < 10)
//	{
//		y = x + 1;
//	}
//	else
//	{
//		printf("error!");
//	}
//	printf("%d", y);
//	return 0;
//}

//选择17
//#include<stdio.h>
//int main()
//{
//	char x;
//	scanf_s("%c", &x);
//	switch (x)
//	{
//	case 'Y':
//	case 'y':
//		printf("agree"); break;
//	case 'N':
//	case 'n':
//		printf("disagree"); break;
//	default:printf("loss"); break;
//	}
//	return 0;
//}

//选择18
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	if ((x % 4 == 0 && x % 100!=0)||x%400==0)
//	{
//		printf("0");
//	}
//	else
//	{
//		printf("1");
//	}
//	return 0;
//}

//选择19
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double s, a, b, c, p;
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	if (a + b > c&& a + c > b && b + c > a)
//	{
//		p = (a + b + c) / 2;
//		s = sqrt(p * (p - a) * (p - b) * (p - c));
//		printf("%.2lf",s);
//	}
//	else
//	{
//		printf("-1");
//	}
//	return 0;
//}

//选择20
//#include<stdio.h>
//int main()
//{
//	float r, l, s;
//	scanf_s("%f", &r);
//	if (r > 0)
//	{
//		l = 2 * 3.1415926 * r;
//		s = 3.1415926 * r * r;
//		printf("%.2f,%.2f", l, s);
//	}
//	else
//	{
//		printf("error!");
//	}
//	return 0;
//}