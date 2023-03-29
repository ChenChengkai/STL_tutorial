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
    // 头插
    L1.push_front(100);
    L1.push_front(200);
    L1.push_front(300);
    printList(L1);
    // 尾删
    L1.pop_back();
    L1.pop_back();
    printList(L1);
    // 头删
    L1.pop_front();
    L1.pop_front();
    printList(L1);
    // insert插入
    L1.insert(L1.begin(), 1000);
    printList(L1);
    std::list<int>::iterator it = L1.begin();
    L1.insert(++it, 2000);
    printList(L1);

    // 删除
    it = L1.begin();
    L1.erase(++it);
    printList(L1);

    // 移除
    L1.push_back(10000);
    L1.push_back(10000);
    L1.push_back(10000);
    L1.push_back(10000);
    printList(L1);
    L1.remove(10000);
    printList(L1);

    L1.clear();
    printList(L1);
}

int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
