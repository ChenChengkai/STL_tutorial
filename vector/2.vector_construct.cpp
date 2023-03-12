#include <iostream>
#include <vector>

void printVector(std::vector<int> &v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// vector容器构造
void test01()
{
    std::vector<int> v1; // 1.默认构造，无参构造
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    // 2.通过区间构造
    std::vector<int> v2(v1.begin(), v1.end()); // 左闭右开
    printVector(v2);

    // 3.通过n个elem构造
    std::vector<int> v3(10, 100);
    printVector(v3);

    // 4.拷贝构造
    std::vector<int> v4(v3);
    printVector(v4);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
