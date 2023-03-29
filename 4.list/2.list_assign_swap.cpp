#include <iostream>
#include <list>

void printList(const std::list<int> &list)
{
    for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
// assign
void test01()
{
    std::list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(40);
    L1.push_back(50);
    printList(L1);

    std::list<int> L2;
    L2 = L1;
    printList(L2);

    std::list<int> L3;
    L3.assign(L1.begin(), L1.end());
    printList(L3);

    std::list<int> L4;
    L4.assign(10, 50);
    printList(L4);
}
// sawp
void test02()
{
    std::list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(40);
    L1.push_back(50);
    printList(L1);

    std::list<int> L2;
    L2.assign(10, 20);
    printList(L2);
    L1.swap(L2);
    printList(L1);
    printList(L2);
}
int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
