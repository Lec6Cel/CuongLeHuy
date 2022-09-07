//#include<iostream>
//#include<stdlib.h>
//#include<conio.h>
//#include<ctime>
//using namespace std;
//
//int min(int a, int b)
//{
//    return (a < b ? a : b);
//}
//
//class Node
//{
//public:
//    int info;
//    Node* next;
//    Node* previous;
//    Node()
//    {
//        this->next = NULL;
//        this->info = NULL;
//    }
//    Node(int info)
//    {
//        this->info = info;
//        this->next = NULL;
//        this->previous = NULL;
//    }
//};
//
//class DoublyLinkedList
//{
//private:
//    Node* first, * last;
//public:
//    DoublyLinkedList()
//    {
//        this->first = NULL;
//        this->last = NULL;
//    }
//    bool displayFtoL();
//    bool displayLtoF();
//    void add_Beg(int x);
//    void add_End(int x);
//    bool remove_Beg();
//    bool remove_End();
//    bool find_Rm(int x);
//    bool find_addPre(int x, int y);
//};
//
//bool DoublyLinkedList::displayFtoL()
//{
//    if (first == NULL && last == NULL)
//        return false;
//
//    cout << "List: ";
//    for (Node* s = first; s != NULL; s = s->next)
//        cout << s->info << " ";
//    cout << "\n";
//
//    return true;
//
//}
//
//bool DoublyLinkedList::displayLtoF()
//{
//    if (first == NULL && last == NULL)
//        return false;
//
//    cout << "List: ";
//    for (Node* s = last; s != NULL; s = s->previous)
//        cout << s->info << " ";
//    cout << "\n";
//
//    return true;
//}
//
//void DoublyLinkedList::add_Beg(int x)
//{
//    Node* p = new Node(x);
//
//    if (first == NULL && last == NULL)
//        first = last = p;
//    else
//    {
//        first->previous = p;
//        p->next = first;
//        first = p;
//    }
//}
//
//void DoublyLinkedList::add_End(int x)
//{
//    Node* p = new Node(x);
//
//    if (first == NULL && last == NULL)
//        first = last = p;
//    else
//    {
//        p->previous = last;
//        last->next = p;
//        last = p;
//    }
//}
//
//bool DoublyLinkedList::remove_End()
//{
//    if (first == NULL && last == NULL)
//        return false;
//
//    else
//    {
//        if (first->next == NULL && last->next == NULL)
//        {
//            Node* p = first;
//            first = last = NULL;
//            delete p;
//        }
//        else
//        {
//            Node* p = last;
//            Node* h = p->previous;
//            h->next = NULL;
//            delete p;
//            last = h;
//        }
//        return true;
//    }
//}
//
//bool DoublyLinkedList::remove_Beg()
//{
//    if (first == NULL && last == NULL)
//        return false;
//
//    else
//    {
//        if (first->next == NULL && last->next == NULL)
//        {
//            Node* p = first;
//            first = last = NULL;
//            delete p;
//        }
//        else
//        {
//            Node* p = first;
//            Node* h = p->next;
//            h->previous = NULL;
//            delete p;
//            first = h;
//        }
//        return true;
//    }
//}
//
//bool DoublyLinkedList::find_Rm(int x)
//{
//    bool check = false;
//
//    for (Node* i = first; i != NULL; i = i->next) {
//        if (i->info == x)
//        {
//            if (i == first)
//            {
//                while (i != NULL && i->info == x)
//                {
//                    remove_Beg();
//                    i = first;
//                }
//                if (i == NULL)
//                {
//                    check = true;
//                    break;
//                }
//            }
//            else if (i != first && i != last)
//            {
//                Node* p = i->previous;
//                Node* h = i->next;
//                p->next = h;
//                h->previous = p;
//                Node* q = i;
//                i = p;
//                delete q;
//            }
//            else
//            {
//                remove_End();
//                check = true;
//                break;
//            }
//            check = true;
//        }
//    }
//    return check;
//}
//
//bool DoublyLinkedList::find_addPre(int x, int y)
//{
//    bool check = false;
//    int Min = 1e9;
//
//    for (Node* i = first; i != NULL; i = i->next)
//    {
//        if (i->info == x)
//        {
//            if (i == first)
//                add_Beg(y);
//            else
//            {
//                Node* p = new Node(y);
//                p->next = i;
//                p->previous = i->previous;
//                i->previous->next = p;
//                i->previous = p;
//            }
//            check = true;
//        }
//        else
//            Min = min(Min, abs(i->info - x));
//    }
//
//    if (!check)
//    {
//        for (Node* i = first; i != NULL; i = i->next)
//            if (abs(i->info - x) == Min)
//            {
//                if (i == first)
//                    add_Beg(y);
//                else
//                {
//                    Node* p = new Node(y);
//                    p->next = i;
//                    p->previous = i->previous;
//                    i->previous->next = p;
//                    i->previous = p;
//                }
//                check = true;
//            }
//    }
//    return check;
//}
//
//void menu(DoublyLinkedList& dll)
//{
//    srand(time(0));
//    int choose;
//    int x;
//    bool check;
//
//    do {
//        system("cls");
//        cout << "1. Display the list first to last.\n"
//            << "2. Display the list last to first\n"
//            << "3. Add an element at the beginning.\n"
//            << "4. Add an element to the end.\n"
//            << "5. Remove first element.\n"
//            << "6. Remove last element.\n"
//            << "7. Find an element in the list. If found, remove it.\n"
//            << "8. Find an element containing the value X or closest of it. Add an element before the found element.\n"
//            << "9. EXIT.\nYou choose: ";
//        cin >> choose;
//
//        switch (choose)
//        {
//        case 1:
//            check = dll.displayFtoL();
//            if (!check)
//                cout << "The list is empty\n";
//            break;
//
//        case 2:
//            check = dll.displayLtoF();
//            if (!check)
//                cout << "The list is empty\n";
//            break;
//
//        case 3:
//            cout << "Type the number you want to add: ";
//            x = rand() % INT_MAX + 1;
//            cout << x << "\nDone!!!\n";
//            dll.add_Beg(x);
//            break;
//
//        case 4:
//            cout << "Type the number you want to add: ";
//            x = rand() % INT_MAX + 1;
//            cout << x << "\nDone!!!";
//            dll.add_End(x);
//            break;
//
//        case 5:
//            check = dll.remove_Beg();
//            cout << (check ? "Done!!!\n" : "The list is empty\n");
//            break;
//
//        case 6:
//            check = dll.remove_End();
//            cout << (check ? "Done!!!\n" : "The list is empty\n");
//            break;
//
//        case 7:
//            cout << "Type the number you want to find and delete: ";
//            cin >> x;
//            check = dll.find_Rm(x);
//            cout << (check ? "Done!!!\n" : "The element isn't in the list\n");
//            break;
//
//        case 8:
//            cout << "Type the number x you want to find: ";
//            cin >> x;
//            cout << "Type the number you want to add before x: ";
//            int y;
//            y = rand() % INT_MAX + 1;
//            cout << y << "\n";
//            check = dll.find_addPre(x, y);
//            cout << (check ? "Done\n" : "The list is empty\n");
//            break;
//
//        case 9:
//            cout << "EXIT!!!!\n";
//            exit(0);
//
//        default:
//            cout << "Wrong input\n";
//        }
//        system("pause");
//    } while (true);
//}
//
//int main()
//{
//    DoublyLinkedList dll;
//
//    menu(dll);
//
//    return 0;
//}