//#include <iostream>
//#include <cstdlib>
//#include <conio.h>
//using namespace std;
//#include <conio.h>
//#define MAX 100
//void input(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 100;
//		cout << a[i] << " ";
//	}
//}
//void output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << a[i] << endl;
//}
//bool add_Element(int a[], int& n, int vt, int x)
//{
//	if (vt < 0 || vt > n)
//		return false;
//	n++;
//	for (int i = n - 1; i >= vt; i--)
//		a[i] = a[i - 1];
//	a[vt] = x;
//	return true;
//}
//int Sequential_Search(int a[], int n, int x) //complexity O(n)
//{
//	int i = 0;
//	while (i < n && a[i] != x)
//		i++;
//	if (i == n)
//		return 0;
//	else
//		return 1;
//}
//int Binary_Search(int a[], int x, int n) //complexity O(logn)
//{
//	int left = 0, right = n - 1, mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] == x) 
//			return mid;
//		if (x > a[mid]) 
//			left = mid + 1;
//		else 
//			right = mid - 1;
//		return 0;
//	} 
//	return -1;
//}
//void Delete(int a[], int& n, int pos)
//{
//	if (n <= 0) {
//		return;
//	}
//	if (pos < 0)
//		pos = 0;
//	else if (pos >= n) {
//		pos = n - 1;
//	}
//	for (int i = pos; i < n - 1; i++) {
//		a[i] = a[i + 1];
//	}
//	--n;
//}
//int Search_Delete(int a[], int& n, int x)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			Delete(a, n, i);
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int a[MAX], n, choose, x;
//	cout << "input the list \n";
//	cout << "nhap so phan tu: \n";
//	cin >> n;
//	input(a, n);
//	cout << "\noutput the list: \n";
//	output(a, n);
//	do {
//		cout << "input an number x: \n";
//		cin >> x;
//		cout << " \n choose 1-4: \n";
//		cout << " 1.Find an element in the list (by sequential search).\n";
//		cout << " 2.Find an element in the list (by binary search).\n";
//		cout << " 3.Find an element in the list. If found, remove it.\n";
//		cout << " 4.Exit \n";
//		cin >> choose;
//		
//		system("cls");
//		switch (choose)
//		{
//		case 1:
//			if (Sequential_Search(a, n, x))
//				cout << x << " found! " << endl;
//			else
//				cout << x << " not found! " << endl;
//			break;
//		case 2:
//			if (Binary_Search(a, n, x))
//				cout << x << " found! " << endl;
//			else
//				cout << x << " not found! " << endl;
//			break;
//		case 3:
//			if (Search_Delete(a, n, x))
//				output(a, n);
//			else
//				cout << x << " not found ";
//			break;
//		case 4:
//			break;
//		default:
//			cout << "wrong input: ";
//		}
//	} while (choose < 1 || choose > 4);
//	system("pause");
//	return 0;
//}