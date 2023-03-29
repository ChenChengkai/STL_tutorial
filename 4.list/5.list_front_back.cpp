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
    // 尾插
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(40);
    L1.push_back(50);
    printList(L1);
    std::cout << "头部元素：" << L1.front() << std::endl;
    std::cout << "尾部元素：" << L1.back() << std::endl;
}

int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
