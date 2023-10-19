#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct Node
{
    int data;
    int* address;
};

int main()
{
    int Array[256];
    std::list <int> list;
    std::vector <int> vec;


    list.push_back(123);
    list.push_back(38274);

    vec.push_back(2481632);

    Node a;
    Node b;
    Node c;

    a.data = 1;
    b.data = 12345;
    c.data = 874827;

    int var = 9;

    int* ptr = &var;

    cout << ptr << endl;
    cout << *ptr << endl;

    a.address = &b.data;

    cout <<  a.address << "\n";
    cout << *a.address << "\n";

    b.address = &c.data;

    cout <<  b.address << "\n";
    cout << *b.address << "\n";


    return 0;
}
