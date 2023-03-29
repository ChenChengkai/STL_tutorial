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

void test01()
{
    std::list<int> L1;
    L1.push_back(50);
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(40);
    printList(L1);
    L1.reverse();
    printList(L1);
    L1.sort();
    printList(L1);
    L1.sort([](int a, int b)
            { return a > b; });
    printList(L1);
}

int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
