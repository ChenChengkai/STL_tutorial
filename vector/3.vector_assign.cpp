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
    std::vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // 1.operator=赋值操作
    std::vector<int> v2 = v1;
    printVector(v2);

    // 2.assign v.begin v.end赋值操作
    std::vector<int> v3(v2.begin(), v2.end());
    printVector(v3);

    // 3.assign n,elem赋值操作
    std::vector<int> v4;
    v4.assign(10, 100);
    printVector(v4);
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
