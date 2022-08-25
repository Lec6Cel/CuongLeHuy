#include<iostream>
#include<conio.h>
using namespace std;
struct Node {
	int key;
	Node *left;
	Node *right;
};
void init(Node*&root)
{
	root = NULL;
}
void Insernode(Node*&root, int x)
{

	if (root == NULL)
	{
		Node*p = new Node;
		p->key = x;
		p->left = NULL;
		p->right = NULL;
		root = p;
	}
	else
	{
		if (root->key > x)
		{
			Insernode(root->left, x);
		}
		else
			if (root->key < x) {
				Insernode(root->right, x);
			}
	}
}
Node*Search(Node*&root, int x) {
	if (root == NULL)
	{
		return NULL;
	}
	else	if (root->key > x)
	{
		Search(root->left, x);
	}
	else	if (root->key < x) {
		Search(root->right, x);
	}
	else {
		return root;
	}

}
void TheMang(Node*&X, Node*&Y) {
	if (Y != NULL)
	{
		TheMang(X, Y->left);
	}
	else
		X->key = Y->key;
	X = Y;
	Y = Y->right;
}
void Deletenode(Node*&root, int x) {
	if (root == NULL)
	{
		return;
	}
	else {
		if (root->key > x) {
			Deletenode(root->left, x);
		}
		else if (root->key < x) {
			Deletenode(root->right, x);
		}
		else {
			Node*X = root;
			if (root->left == NULL)
				root = root->right;
			else if (root->right == NULL) {
				root = root->left;
			}
			else
				TheMang(X, root->right);
		}
	}

}
void LNR(Node* root) {
	if (root != NULL)
	{
		LNR(root->left);
		cout << root->key << "\t";
		LNR(root->right);
	}
}
void NLR(Node* root)
{
	if (root != NULL)
		{
			cout << root->key << "\t";
			NLR(root->left);
			NLR(root->right);
	}
}
void LRN(Node *root)
{
	if (root != NULL) {
		LRN(root->left);
		LRN(root->right);
		cout << root->key << "\t";
	}
}
void Menu(Node* &root)
{
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t =========== MENU ===========";
		cout << "\n1. Nhap du lieu";
		cout << "\n2. Xuat du lieu cay LNR";
		cout << "\n3. Xuat du lieu cay NLR";
		cout << "\n4. Xuat du lieu cay LRN";
		cout << "\n5.Tim phan tu";
		cout << "\n6.Xoa phan tu";
		cout << "\n0. Ket thuc";
		cout << "\n\n\t\t ============================";

		int luachon;

		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 6)
		{
			cout << "\nLua chon khong hop le";
			system("pause");
		}
		else if (luachon == 1)
		{
			int x;
			cout << "\nNhap so nguyen x: ";
			cin >> x;
			Insernode(root, x);
		}
		else if (luachon == 2)
		{
			cout << "\n\t\t DUYET CAY THEO LNR\n";
			LNR(root);
			system("pause");
		}
		else if (luachon == 3)
		{
			cout << "\n\t\t DUYET CAY THEO NLR\n";
			NLR(root);
			system("pause");
		}
		else if (luachon == 4)
		{
			cout << "\n\t\t DUYET CAY THEO LRN\n";
			LRN(root);
			system("pause");
		}
		else if (luachon == 5)
		{
			int x;
			cout << " Nhap phan tu ma ban muon tim ";
			cin >> x;
			Node*p = Search(root, x);
			if (p == NULL)
				cout << "Khong tim thay phan tu " << x << endl;
			else
				cout << " Tim thay phan tu " << x << endl;
			system("pause");
		}
		else if (luachon == 6)
		{
			int x;
			cout << "Nhap phan tu ban muon xoa ";
			cin >> x;
			Deletenode(root, x);
		}
		else
		{
			break;
		}
	}
}


int main()
{
	Node*root;
	init(root);
	Menu(root);

	system("pause");
	return 0;
}