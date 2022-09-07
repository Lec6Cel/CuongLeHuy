//#include <iostream>
//#include <cstdlib>
//#include <conio.h>
//using namespace std;
//struct Node
//{
//	int info;
//	Node* link;
//};
//class linklist
//{
//private:
//	Node* first;
//public:
//	void init()
//	{
//		first = NULL;
//	}
//
//	void Insert_first(int x)
//	{
//		Node* p;
//		p = new Node;
//		p->info = x;
//		p->link = first;
//		first = p;
//	}
//
//	void Insert_last(int x)
//	{
//		Node* p;
//		p = new Node;
//		p->info = x;
//		p->link = NULL;
//		if (first == NULL) //only first pointer
//			first = p;
//		else
//		{
//			Node* q = first;
//			while (q->link != NULL)
//				q = q->link;
//			q->link = p;
//		}
//	}
//	void InsertAfterQ(Node* p, Node* q)
//	{
//		p = new Node;
//		if (q != NULL)
//		{
//			p->link = q->link;
//			q->link = p;
//		}
//	}
//	void Process_list()
//	{
//		Node* p;
//		p = first;
//		while (p != NULL)
//		{
//			cout << p->info << endl;
//			p = p->link;
//		}
//	}
//	Node* Search(int x)
//	{
//		Node* p = first;
//		while ((p != NULL) && (p->info != x))
//			p = p->link;
//		return p;
//	}
//	void Deletefirst()
//	{
//		if (first != NULL)
//		{
//			Node* p = first;
//			first = p->link;
//			p->link = NULL;
//			delete(p);
//		}
//	}
//	void Deletelast()
//	{
//		Node* last = first;
//		Node* pre = NULL;
//		if (first != NULL)
//		{
//			while (last->link != NULL)
//			{
//				pre = last;
//				last = last->link;
//			}
//		}
//		if (pre == NULL)
//		{
//			Deletefirst();
//		}
//		else
//		{
//			pre->link = NULL;
//			delete(last);
//		}
//	}
//	void DeleteNode( int x)
//	{
//		if (first != NULL)
//		{
//			Node* p = first;
//			Node* prev = NULL;
//
//			while (p != NULL && p->info != x)
//			{
//				prev = p;
//				p = p->link;
//			}
//			if (p != NULL)
//			{
//				if (prev == NULL)
//				{
//					Deletefirst();
//				}
//				else
//				{
//					prev->link = p->link;
//					p->link = NULL;
//					delete(p);
//				}
//			}
//		}
//	}
//};
//void menu(linklist& l)
//{
//	Node* first;
//	int choose, x, add;
//	do {
//		system("cls");
//		cout << "1. Create an empty list \n";
//		cout << "2. Display the list \n";
//		cout << "3. Insert an Element \n";
//		cout << "4. Remove an Element \n";
//		cout << "5. Exit \n";
//		cin >> choose;
//		switch (choose) {
//		case 1:
//			l.init();
//			break;
//		case 2:
//			system("cls");
//			l.Process_list();
//			system("pause");
//			break;
//		case 3:
//			cout << "input x: \n";
//			cin >> x;
//			cout << "1. InsertHead\n";
//			cout << "2. InsertLast\n";
//			/*cout << "3. InsertAfterQ\n";*/
//			cin >> add;
//			switch (add)
//			{
//			case 1:
//				l.Insert_first(x);
//				l.Process_list();
//			case 2:
//				l.Insert_last(x);
//				l.Process_list();
//				/*case 3:
//					l.InsertAfterQ(x);
//					l.Process_list();*/
//			}
//			continue;
//		case 4:
//			cout << "enter the number: ";
//			cin >> x;
//			if (l.Search(x) == NULL)
//			{
//				cout << "not found! \n";
//			}
//			else
//			{
//				l.DeleteNode(x);
//				cout << x << " was found and removed \n ";
//				system("pause");
//				l.Process_list();
//			}
//			continue;
//		case 5:
//			cout << "The program was exit!\n";
//			system("pause");
//			break;
//		default:
//			cout << "wrong input!";
//		} continue;
//	} while (choose != 5);
//}
//void main() {
//	linklist l;
//	menu(l);
//	system("pause");
//}