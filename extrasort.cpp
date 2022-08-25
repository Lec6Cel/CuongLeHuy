#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#define MAX 100
using namespace std;
void input(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 50;
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void CountingSort(int a[], int n, int C[])
{
	int count[MAX] = { 0 }; //count array = 0
	/*cout << count[n];*/
	for (int i = 0; i < n; i++) { //count the number of data then place the count at the appropriate index
		count[a[i]]++;
		/*cout << count[i] << " ";*/
	}
	for (int i = 1; i < MAX; i++) {
		count[i] += count[i - 1];
		/*cout << count[i] << " ";*/
	}
	for (int i = n - 1; i >= 0; i--) {
		count[a[i]]--;
		C[count[a[i]]] = a[i];
	}
	for (int i = 0; i < n; i++)
		cout << C[i] << " ";
}	
int main()
{
	int n, a[MAX], C[MAX];
	srand(time(0));
	cout << "input n: \n";
	cin >> n;
	input(a,n);
	cout << "display the array before sorting! " << endl;
	output(a, n);
	cout << "\ndisplay the array after sorting! " << endl;
	CountingSort(a,n,C);
	system("pause");
	return 0;
}