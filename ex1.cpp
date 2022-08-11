#include <iostream>
#include <conio.h>
#include <cstdlib>
#define MAX 100
using namespace std;
void input(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 99;
	}
}
void output(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
}
void swap(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}
void InsertionSort(int a[MAX], int n)
{
	int x, i, j;
	for (int i = 1; i<n; i++)
	{
		x = a[i]; // biến x lưu giá trị a[i]
		j = i - 1;
		while (0 <= j && x <a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}
void SelectionSort(int a[], int n)
{
	int min_pos, i, j;
	for (i = 0; i<n - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j<n; j++)
			if (a[j]<a[min_pos])
				min_pos = j; 
			swap(a[min_pos], a[i]);	
	}
}
void BubbleSort(int a[MAX], int n)
{
	for (int i = 0; i<n - 1; i++)
		for (int j = n - 1; j > i; j--)
		{
			if (a[j - 1] > a[j]) // check if the previous element is bigger than the next element
			swap(a[j], a[j - 1]);
		}
}
void InterchangeSort(int a[MAX], int n)
{
	for (int i = 0; i<n - 1; i++)
		for (int j = i + 1; j<n; j++)
			if (a[i]>a[j])
				swap(a[i], a[j]);
}
void QuickSort(int a[MAX], int left, int right)
{
	int x = a[(left + right) / 2];
	int i = left;
	int j = right;
	while (i<=j)
	{
		while (a[i]<x) 
			i++;
		while (a[j]>x) 
			j--;
		if (i <= j) {
			swap(a[i], a[j]);
				i++; 
				j--;
		}
	}
	if (left<j) 
		QuickSort(a, left, j);
	if (i<right)
		QuickSort(a, i, right);
}
void shift(int a[], int i, int n)
{
	int j = 2 * i + 1;
	if (j >= n) // nếu vị trí j không tồn tại trong danh sách đang xét thì thoát khỏi chương trình
		return;
	if (j + 1 <n) // nếu tồn tại vị trí j+1 trong danh sách đang xét thì thoát khỏi chương trình
		if (a[j]<a[j + 1]) // nếu vị trí j không tồn tại phần tử a[j] <a[j+1]
			j++;
	if (a[i] >= a[j])
		return;
	else {
		int x = a[i];
		a[i] = a[j];
		a[j] = x;
		shift(a, j, n);
	}
}
void HeapSort(int a[], int n)
{
	int i = n / 2;
	while (i >= 0) // tạo heap ban đầu
	{
		shift(a, i, n - 1); i--;
	}
	int right = n - 1; // right là vị trí cuối Heap đang xét
	while (right>0)
	{
		swap(a[0], a[right]); // hoán vị phần tử a[0] cho phần tử cuối Heap đang xét
		right--; // giới hạn lại phần tử cuối đang xét
		if (right > 0) // Kiểm tra dãy đang xét còn nhiều hơn 1 phần tử
			shift(a, 0, right); // tạo Heap lại tại vị trí 0
	}
}
int Search(int a[], int n, int x)
{
	int i = 0;
	while (i<n && a[i] != x)
		i++;
	if (i < n)
		return i; // x in the list a, at the position i
	return -1; // not found x in a;
}
int BinarySearch(int a[], int n, int x)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == x) return mid;
		if (x>a[mid]) left = mid + 1;
		else right = mid - 1;
	}
	return -1; // not found x in a;
}
void menu(int a[MAX], int n)
{
	int ch, left, right, x;
	left = n / 2 + 1;
	right = n / 2 - 1;
	do {
		system("cls");
		cout << "\n1. Insertion Sort \n2. Selection Sort \n3. Interchange Sort \n4. Bubble Sort \n5. Quick Sort \n6. Heap Sort \n7. Sequential Search \n8. Binary Search \n";
		cout << "9. Exit!" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			InsertionSort(a, n);
			output(a, n);
			break;
		case 2:
			SelectionSort(a, n);
			output(a, n);
			break;
		case 3:
			InterchangeSort(a, n);
			output(a, n);
			break;
		case 4:
			BubbleSort(a, n);
			output(a, n);
			break;
		case 5:
			QuickSort(a, left, right);
			output(a, n);
			break;
		case 6:
			HeapSort(a, n);
			output(a, n);
			break;
		case 7:
			cin >> x;
			if (Search(a, n, x) == -1)
				cout << " not found! ";
			else
				cout << x << "was in position " << Search(a, n, x);
			break;
		case 8:
			cin >> x;
			if (BinarySearch(a, n, x) == -1)
				cout << "not found! ";
			else
				cout << x << " was in position " << BinarySearch(a, n, x);
			break;
		case 9:
			break;
		default:
			cout << " wrong input !";
		} system("pause");
	} while (true);
}
int main()
{
	int a[MAX], n;
	cout << "input the elements: ";
	cin >> n;
	input(a,n);
	output(a,n);
	system("pause");
	menu(a, n);
	return 0;
}
