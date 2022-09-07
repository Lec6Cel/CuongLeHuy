//#include <iostream>
//#include <conio.h>
//#define max 100
//using namespace std;
//struct stack {
//	char a[max];
//	char beg;
//	char end;
//	char mid;
//	int top;
//};
//
////create empty stack
//void create_stack(stack& S)
//{
//	S.top = 0;
//}
//
////check empty stack
//int empty_stack(stack S)
//{
//	if (S.top == 0) return 1;
//	else return 0;
//}
//
////push an element
//void push(char beg, char mid, char end, stack& S)
//{
//	if (S.top == max)
//		cout << " Stack is full \n";
//	else {
//		S.a[S.beg] = beg;
//		S.a[S.mid] = mid;
//		S.a[S.end] = end;
//		S.a[S.top]++;
//	}
//}
//
////pop an element from stack
//void pop(char& x, stack& S)
//{
//	if (S.top == 0)
//		cout << " Stack is empty!\n";
//	else {
//		x = S.a[S.top - 1];
//		S.top--;
//	}
//}
//
////the function solves the HanoiTower problems
//void move(int n, stack& S)
//{
//	char x;
//	int count = 0;
//	create_stack(S);
//	if (empty_stack == 0) {
//		push('A', 'B', 'C', S);
//		while (empty_stack != 0)
//			pop(x, S);
//		if (n == 1)
//		{
//			count++;
//			cout << n << " " << " will move from " << " " << S.a[S.beg] << " to " << " " << S.a[S.end] << endl;
//		}
//	}
//}
//void main()
//{
//	int n;
//	stack S;
//	cout << " the stack program ";
//	cout << " input n: ";
//	cin >> n;
//	move(n, S);
//	system("pause");
//}