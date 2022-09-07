//#include <iostream>
//using namespace std;
//
//// 12.1 Declare the data structure
//struct Node
//{
//    int info;
//    Node* next;
//    Node* previous;
//};
//
//struct doublylinkedList
//{
//    Node* first;
//    Node* last;
//};
//
//// 12.2 Create empty list
//void init(doublylinkedList& ls)
//{
//    ls.first = NULL;
//    ls.last = NULL;
//}
//
//// 12.3 Display the list
//void output(doublylinkedList ls)
//{
//    Node* p = ls.first;
//    while (p != NULL)
//    {
//        cout << p->info << "\t";
//        p = p->next;
//    }
//    cout << endl;
//}
//
//// 12.4 Add an element at the beginning
//void addFirst(doublylinkedList& ls, int x)
//{
//    Node* p = new Node;
//
//    p->info = x;
//    p->next = ls.first;
//    p->previous = ls.last;
//
//    if (ls.first != NULL)
//        ls.first->previous = p;
//    else
//        ls.last = p;
//
//    ls.first = p;
//}
//
//// 12.5 Add an element to the end
//void addLast(doublylinkedList& ls, int x)
//{
//    Node* p = new Node;
//
//    p->info = x;
//    p->next = NULL;
//    p->previous = ls.last;
//
//    if (ls.last != NULL)
//        ls.last->next = p;
//    else
//        ls.first = p;
//
//    ls.last = p;
//}
//
//// 12.6 Remove first element
//int deleteFirst(doublylinkedList& ls)
//{
//    if (ls.first != NULL)
//    {
//        Node* p = ls.first;
//        ls.first = ls.first->next;
//        delete(p);
//        if (ls.first != NULL)
//            ls.first->previous = NULL;
//        else
//            ls.last = NULL;
//        return 1;
//    }
//    return 0;
//}
//
//// 12.7 Remove last element
//int deleteLast(doublylinkedList& ls)
//{
//    if (ls.last != NULL)
//    {
//        Node* p = ls.last;
//        ls.last = ls.last->previous;
//        if (ls.last != NULL)
//            ls.last->next = NULL;
//        else
//            ls.first = NULL;
//        delete p;
//        return 1;
//    }
//    return 0;
//}
//
//// 12.8 Find and remove an element
//Node* Search(doublylinkedList ls, int x)
//{
//    Node* p;
//    p = ls.first;
//    //su dung vong lap
//    while ((p != NULL) && (p->info != x)) {
//        p = p->next;
//    }
//    return p;
//}
//
//void deleteAt(doublylinkedList& ls, int k)
//{
//    Node* p = Search(ls, k);
//    if (p != NULL)
//    {
//        if (p->previous == NULL) {
//            deleteFirst(ls);
//            return;
//        }
//        if (p->next == NULL) {
//            deleteLast(ls);
//            return;
//        }
//        p->previous->next = p->next;
//        p->next->previous = p->previous;
//        p->previous = NULL;
//        p->previous = NULL;
//        delete p;
//    }
//}
///* 12.9 Find an element containing the value X or closest of it. Add an
//element before the found element. */
//
//void addBefore(doublylinkedList& ls, int v, int x)
//{
//    Node* q = ls.first;
//    while (q != NULL && q->info != v)
//        q = q->next;
//
//    if (q != NULL)
//    {
//        if (q == ls.last)
//            addFirst(ls, x);
//        else
//        {
//            Node* p = new Node;
//            p->info = x;
//            p->next = NULL;
//            p->previous = NULL;
//
//            p->previous = q->previous;
//            q->previous->next = p;
//
//            q->previous = p;
//            p->next = q;
//        }
//    }
//}
//
//
//int main()
//{
//    doublylinkedList ls;
//    int k, v, x;
//    init(ls);
//
//    addFirst(ls, 15);
//    addFirst(ls, 10);
//    addFirst(ls, 5);
//
//    addLast(ls, 20);
//    addLast(ls, 25);
//    addLast(ls, 30);
//
//    cout << "Values of list:\n";
//    output(ls);
//
//    cout << "Delete first element:\n";
//    deleteFirst(ls);
//    output(ls);
//
//    cout << "Delete last element:\n";
//    deleteLast(ls);
//    output(ls);
//
//    cout << "Type tha value to delete: ";
//    cin >> k;
//    deleteAt(ls, k);
//    output(ls);
//
//    cout << "Type value to add before: ";
//    cin >> x;
//    cout << "Type the value: ";
//    cin >> k;
//    cout << "Add " << x << " after " << k << " :\n";
//    addBefore(ls, k, x);
//    output(ls);
//
//    system("pause");
//    return 0;
//}