//#include <iostream>
//#include <cstdlib>
//#include <conio.h>
//using namespace std;
//#define MAX 100
//int a[MAX];
//int sp = -1;
//
//int isempty(int a[], int sp)
//{
//	if (sp == -1)
//		return 1;
//	return 0;
//}
//int isfull(int a[], int sp)
//{
//	return (sp == MAX - 1);
//}
//void push(int a[], int& sp, int x)
//{
//	if (isfull(a, sp))
//		cout << " Ngan xep day !";
//	else
//	{
//		sp++;
//		a[sp] = x;
//	}
//}
//int pop(int a[], int& sp)
//{
//	if (isempty(a, sp))
//	{
//		cout << "Ngan xep rong !";
//		return -1;
//	}
//	else
//		return a[sp--];
//}
//int main()
//{
//	int m, k;
//	cout << "Chuong trinh chuyen doi thap phan sang nhi phan!" << endl;
//	do
//	{
//		cout << "Nhap so thap phan can chuyen: ";
//		cin >> m;
//	} while (m <= 0);
//	while (m != 0)
//	{
//		k = m % 2;
//		push(a, sp, k);
//		m = m / 2;
//	}
//	cout << "So nhi phan la: ";
//	while (isempty(a, sp) == 0)
//	{
//		cout << pop(a, sp);
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
