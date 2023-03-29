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
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(40);
    L1.push_back(50);
    printList(L1);
    if (L1.empty())
    {
        std::cout << "L1为空！" << std::endl;
    }
    else
    {
        std::cout << "L1不为空！" << std::endl;
        std::cout << "L1元素个数：" << L1.size() << std::endl;
    }
    L1.resize(10, 5);
    printList(L1);
    L1.resize(2);
    printList(L1);
}

int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
