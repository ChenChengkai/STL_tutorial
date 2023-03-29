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
    // 第一种构造方式：默认构造
    std::list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(40);
    L1.push_back(50);
    printList(L1);

    // 第二种构造：区间方式
    std::list<int> L2(L1.begin(), L1.end());
    printList(L2);

    // 第三种构造：n个元素构造
    std::list<int> L3(5, 8);
    printList(L3);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
