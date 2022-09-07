//#include <iostream>
//using namespace std;
//struct Node
//{
//    int value;
//    Node* next;
//    Node* pre;
//};
//struct head_tail
//{
//    Node* head;
//    Node* tail;
//};
//void init(head_tail& ht)
//{
//    ht.head = NULL;
//    ht.tail = NULL;
//}
//Node* createNode(int value)
//{
//    Node* p = new Node;
//    p->value = value;
//    p->next = NULL;
//    p->pre = NULL;
//    return p;
//}
//void addFirst(head_tail& ht, int value)
//{
//    Node* p = createNode(value);
//    if (ht.head == NULL)
//        ht.head = ht.tail = p;
//    else
//    {
//        p->next = ht.head;
//        ht.head->pre = p;
//        ht.head = p;
//    }
//}
//void addTail(head_tail& ht, int value)
//{
//    Node* p = createNode(value);
//    if (ht.head == NULL)
//        ht.head = ht.tail = p;
//    else
//    {
//        Node* temp = ht.head;
//        while (temp->next != NULL)
//            temp = temp->next;
//        temp->next = p;
//        p->pre = temp;
//        ht.tail = p;
//    }
//}
//int deleteHead(head_tail& ht)
//{
//    if (ht.head != NULL)
//    {
//        Node* temp = ht.head;
//        if (ht.head->next == NULL)
//        {
//            ht.head = NULL;
//            ht.tail = NULL;
//        }
//        else
//        {
//            ht.head = ht.head->next;
//            ht.head->pre = NULL;
//        }
//        delete temp;
//        return 1;
//    }
//    return 0;
//}
//int deleteTail(head_tail& ht)
//{
//    if (ht.head != NULL)
//    {
//        Node* temp = ht.head;
//        if (ht.head->next == NULL)
//        {
//            ht.head = NULL;
//            ht.tail = NULL;
//        }
//        else
//        {
//            while (temp->next != NULL)
//                temp = temp->next;
//            ht.tail = temp->pre;
//            temp->pre->next = NULL;
//        }
//        delete temp;
//        return 1;
//    }
//    return 0;
//}
//int deleteNode(head_tail& ht, int value)
//{
//    if (ht.head != NULL)
//    {
//        Node* temp = ht.head;
//        while (temp != NULL && temp->value != value)
//            temp = temp->next;
//        if (temp == NULL)
//            return 0;
//        else
//        {
//            if (temp->next == NULL && temp->pre == NULL)
//            {
//                ht.head = NULL;
//                ht.tail = NULL;
//            }
//            else if (temp->pre == NULL)
//            {
//                ht.head = ht.head->next;
//                ht.head->pre = NULL;
//            }
//            else if (temp->next == NULL)
//            {
//                ht.tail = ht.tail->pre;
//                ht.tail->next = NULL;
//            }
//            else
//            {
//                temp->pre->next = temp->next;
//                temp->next->pre = temp->pre;
//            }
//            delete temp;
//            return 1;
//        }
//    }
//    return 0;
//}
//void findAndAddBefore(head_tail& ht, int find, int value)
//{
//    Node* p = createNode(value);
//    Node* temp = ht.head;
//    int closeX = INT_MAX;
//    int closeX_value;
//    int x;
//    while (temp != NULL && temp->value != find)
//    {
//        x = abs(find - temp->value);
//        if (x < closeX)
//        {
//            closeX = x;
//            closeX_value = temp->value;
//        }
//        temp = temp->next;
//    }
//    if (temp == NULL)
//    {
//        temp = ht.head;
//        while (temp->value != closeX_value)
//            temp = temp->next;
//    }
//    if (temp->pre == NULL)
//    {
//        p->next = temp;
//        temp->pre = p;
//        ht.head = p;
//    }
//    else
//    {
//        temp->pre->next = p;
//        p->pre = temp->pre;
//        p->next = temp;
//        temp->pre = p;
//    }
//}
//void show(head_tail ht)
//{
//    while (ht.head != NULL)
//    {
//        cout << ht.head->value << "\t";
//        ht.head = ht.head->next;
//    }
//}
//int main()
//{
//    system("cls");
//    head_tail ht;
//    init(ht);
//}