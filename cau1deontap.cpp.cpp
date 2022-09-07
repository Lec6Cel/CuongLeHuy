#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node* makenode(int x){
	Node*a= new Node();
	a->data=x;
	a->next=NULL;
	return a;
}
bool emptyl(Node*a)
{
	return a==NULL;
}
int Size(Node*a)
{
	int temp=1;
	while(a->next!=NULL)
	{
		++temp;
		a=a->next;
	}
	return temp;
}
void Addfirst(Node*&a,int x){
	Node* p=makenode(x);
	if(a==NULL)
	{
		a=p;
	}
	else
	{	p->next=a;
		a=p;
		
	}
}
void Addlast(Node*&a,int x){
	Node*p=makenode(x);
	if(a==NULL)
	{
		a=p;
	}
	else{
		Node* tmp=a;
		while(tmp->next!=	NULL)
		{
			tmp=tmp->next;
		}
		tmp->next=p;
	}
}
void Addnode(Node*&a,int x,int k)
{
	int n=Size(a);
	if(k<=0||k>n+1)
		cout<< " Vi tri chen khong hop le";
	if(n==1)
	{
		Addfirst(a,x);
	}
	else if(n==k+1){
		Addlast(a,x);
	}
	Node*p=a;
	for(int i=1;i<k-1;i++)
	{
			p=p->next;
	}
	Node*temp=makenode(x);
	temp->next=p->next;
	p->next=temp;

}
void Deletefirst(Node*&a){
	if(a==NULL)	return;
	a=a->next;	
}
void Deletelast(Node*&a){
	if(a==NULL) return;
	Node* truoc=NULL;
	Node* sau=a;
	while(sau->next!=NULL){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==NULL){
		a=NULL;
	}
	else
		truoc->next=NULL;
}
void Deletemid(Node* &a,int pos)
{
	if(pos<=0||pos>Size(a)) {
	cout<< " Vi tri xoa khong hop le " << endl;
	}
	Node *truoc=NULL;
	Node *sau=a;
	for(int i=1;i<pos;i++){
		truoc = sau;
		sau=sau->next;
	}
	if(truoc==NULL)
	{
		a=a->next;
	}
	else{
		truoc->next=sau->next;
	}

	
}
void Output(Node*a){
	Node*p;
	p=a;
	while(p!=NULL)
		{
			cout<<p->data<<"\t";
			p=p->next;
		}
}
bool isSorted(Node *head) 
{  
    if (head == NULL) 
        return true; 
    
    for (Node *t=head; t->next != NULL; t=t->next) 
       if (t->data > t->next->data) 
            return false; 
            
    return true; 
} 
void TIMMID(Node* &a){
	Node*p=a;
	int n=Size(a);
	if(n%2!=0){
		for(int i=1;i<=n/2+1;i++){
			p=p->next;
		}
			cout<<p->data;
	}
	else{
	    Node*x=a;
		for(int i=1;i<=n/2-1;i++){
			x=x->next;
		}
		cout <<x->data <<" ";
		Node*tmp=a;
		for(int i=1;i<=n/2;i++){
			tmp=tmp->next;
		}
	
		cout<<" va "<<tmp->data;
	}
}
int main(){
	Node*a=NULL;
	Addfirst(a,5);
	Addfirst(a,4);
	Addfirst(a,3);
	Addfirst(a,2);
	Addfirst(a,1);
	Addfirst(a,0);
	Output(a);
	if(isSorted(a))
		cout<<"Danh Sach da sort" << endl;
	else
		cout<<"chua sort "<< endl;
	
	cout <<"Phan tu o giua ";
	
	TIMMID(a);
	system("pause");
	return 0;
}