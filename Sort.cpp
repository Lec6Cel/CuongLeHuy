//#include<iostream>
//#include<cstdlib>
//#include<conio.h>
//#include <ctime>
//#define MAX 100
//using namespace std;
//void Input(int a[],int n)
//{
//	for(int i=0;i<n;i++)
//		a[i]=rand()%20;
//}
//void Output(int a[],int n)
//{
//	for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
//	cout<<endl;
//}
//void swap(int &a,int &b){
//	int tmp=a;
//	a=b;
//	b=tmp;
//}
//void Inchange_sort(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]>a[j])
//				swap(a[i],a[j]);
//		}
//			cout<<"Buoc " <<i+1<<" : ";
//			Output(a,n);
//	}
//}
//void Selection_Sort(int a[],int n){
//	for(int i=0;i<n-1;i++){
//	int min=i;
//	for(int j=i+1;j<n;j++){
//		if(a[min]>a[j])
//			min=j;
//	}
//	swap(a[min],a[i]);
//		cout<<"Buoc " <<i+1<<" : ";
//		Output(a,n);
//	}
//
//}
//void Insert_sort(int a[],int n){
//	for(int i=1;i<n;i++)
//	{
//		int x=a[i],pos=i-1;
//		while(pos>=0 && a[pos]>x){
//			a[pos+1]=a[pos];
//			--pos;
//		}
//		a[pos+1]=x;
//		cout<<"Buoc " <<i<<" : ";
//		Output(a,n);
//	}
//}
//void Bubble_sort(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-1-i;j++){
//		if(a[j]>a[j+1])
//			swap(a[j],a[j+1]);
//		}
//		cout<<"Buoc " <<i+1<<" : ";
//		Output(a,n);
//	}
//}
//void heapify(int a[],int n,int i){
//	int lagest=i;
//	int l=2*i+1;
//	int r=2*i+2;
//	if(l<n && a[l]>a[lagest])
//		lagest=l;
//	if(r<n && a[r]>a[lagest])
//		lagest=r;
//	if(lagest!=i){
//		swap(a[i],a[lagest]);
//		heapify(a,n,lagest);
//	}
//}
//void heap_sort(int a[],int n){
//	for(int i=n/2 - 1;i>=0;i--)
//	{
//		heapify(a,n,i);
//	}
//	cout<<" Max heap: " ;
//	Output(a,n);
//	for(int i=n-1;i>=0;i--){
//		swap(a[i],a[0]);
//		heapify(a,i,0);
//		cout<<"Buoc " <<i+1<<" : ";
//		Output(a,n);	
//	}
//}
//void QuickSort(int a[],int l, int r){
//	int x = a[(l + r) / 2];
//	int i = l;
//	int j = r;
//	int n;
//	while (i < j)
//	{
//		while (a[i] < x)
//			i++;
//		while (a[j] > x)
//			j--;
//		if (i <= j) {
//			swap(a[i], a[j]);
//			i++;
//			j++;
//		}
//	}
//	if (l < j)
//		QuickSort(a, l, j);
//	if (i < r)
//		QuickSort(a, i, r);
//}
//int BS(int a[], int n,int x){
//	int l=0;
//	int r=n-1;
//	while(l>=r){
//	int mid=(l+r)/2;
//	if(a[mid]==x)
//		return mid;
//	else if(a[mid]>x)
//		r=mid-1;
//	else
//		l=mid+1;
//	}
//
//}
//void Menu(int a[],int n){
//	int chon, l=0, r=0;
//	do {
//	system("cls");
//	cout<<"\n----Menu-------"
//		<<"\n1.Inchangesort"
//		<<"\n2.Seletionesort"
//		<<"\n3.Insertssort"
//		<<"\n4.Bubblesort"
//		<<"\n5.Heapsort"
//		<<"\n6 Quicksort"
//		<<"\n7.Exit!"
//		<<"\nNhap lua chon cua ban: ";
//		cin>> chon;
//			switch (chon) {
//			case 1:
//				Inchange_sort(a, n);
//				system("pause");
//				break;
//			case 2:
//				Selection_Sort(a, n);
//				system("pause");
//				break;
//			case 3:
//				Insert_sort(a, n);
//				system("pause");
//				break;
//			case 4:
//				Bubble_sort(a, n);
//				system("pause");
//				break;
//			case 5:
//				heap_sort(a, n);
//				system("pause");
//				break;
//			case 6:
//				QuickSort(a, l, r);
//				Output(a, n);
//				system("pause");
//				break;
//			case 7:
//				break;
//			default:
//				cout << "wrong input!" << endl;
//			}
//		} while (chon < 1 || chon >=8);
//}
//int main(){
//	srand(time(0));
//	int a[MAX],n;
//	cout<<"Nhap danh sach: ";
//	do{
//		cin>>n;
//		if(n<=0||n>100)
//		cout<<"Khong hop le !Nhap lai "<< endl;
//
//	}while(n<=0||n>100);
//	Input(a,n);
//	Output(a,n);
//	Menu(a,n);
//	system("pause");
//	return 0;
//}