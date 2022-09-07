#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
	int data;
	node* link;
};
class linkedlist {
private:
	node* first;
	node* last;
public:
	void init()
	{
		first = NULL;
		last = NULL;
	}
	node* CreateNode(int x) {
		node* p = new node;
		if (p == NULL)
			exit(1);
		p->data = x;
		p->link = NULL;
		return p;
	}

	void AddF(int x)
	{
		node* p = CreateNode(x);
		if (first == NULL)
		{
			first = p;
			last = first;
		}
		else
		{
			p->link = first;
			first = p;
		}
	}
	void AddL(int x)
	{
		node *p = CreateNode(x);
		if (first == NULL)
		{
			first = p;
			last = first;
		}
		else
		{
			last->link = p;
			last = p;
		}
	}
	void moveToFront(node** head_ref)
	{
		/* If linked list is empty, or
		it contains only one node,
		then nothing needs to be done,
		simply return */
		if (*head_ref == NULL || (*head_ref)->link == NULL)
			return;

		/* Initialize second last
		and last pointers */
		node* secLast = NULL;
		node* last = *head_ref;

		/*After this loop secLast contains
		address of second last node and
		last contains address of last node in Linked List */
		while (last->link != NULL) {
			secLast = last;
			last = last->link;
		}

		/* Set the next of second last as NULL */
		secLast->link = NULL;

		/* Set next of last as head node */
		last->link = *head_ref;

		/* Change the head pointer
		to point to last node now */
		*head_ref = last;
	}
	bool Issorted(node* first) {
		if (first == NULL)
			return true;
		for (node* t = first; t->link != NULL; t = t->link)
			if (t->data <= t->link->data)
				return false;
		return true;
	}
	int Size(node* a)
	{
		int temp = 1;
		while (a->link != NULL)
		{
			++temp;
			a = a->link;
		}
		return temp;
	}
	void TIMMID(node*& first) {
		node* p = first;
		int n = Size(first);
		if (n % 2 != 0) {
			for (int i = 1; i <= n / 2 + 1; i++) {
				p = p->link;
			}
			cout << p->data;
		}
		else {
			node* x = first;
			for (int i = 1; i <= n / 2 - 1; i++) {
				x = x->link;
			}
			cout << x->data << " ";
			node* tmp = first;
			for (int i = 1; i <= n / 2; i++) {
				tmp = tmp->link;
			}

			cout << " va " << tmp->data;
		}
	}
	void Process_list()
	{
		node* p;
		p = first;
		while (p != NULL)
		{
			cout << p->data << endl;
			p = p->link;
		}
	}
};
void main()
{
	node* first = NULL;
	linkedlist l;
	l.AddF(10);
	l.AddF(20);
	l.AddF(30);
	l.AddF(40);
	l.AddF(50);
	l.Process_list();
	if (l.Issorted(first))
		cout << "Danh Sach da sort" << endl;
	else
		cout << "chua sort " << endl;

	cout << "Phan tu o giua ";

	l.TIMMID(first);
	system("pause");
}