#include <iostream>
#include <vector>
#include <algorithm>
class Person
{
public:
    Person(std::string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    std::string m_Name;
    int m_Age;
};

void myPrint_(Person *val)
{
    std::cout << val->m_Name << " " << val->m_Age << std::endl;
}
void myPrint(Person val)
{
    std::cout << val.m_Name << " " << val.m_Age << std::endl;
}
void test01()
{
    std::vector<Person> v;
    Person p1("刘备", 30);
    Person p2("关羽", 28);
    Person p3("张飞", 26);
    Person p4("赵云", 24);
    Person p5("马超", 22);
    // 插入数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    // 第一种遍历方式
    std::vector<Person>::iterator itBegin = v.begin(); // 起始迭代器，指向容器中第一个元素
    std::vector<Person>::iterator itEnd = v.end();     // 结束迭代器，指向容器中最后一个元素的下一个位置
    while (itBegin != itEnd)
    {
        std::cout << itBegin->m_Name << " " << itBegin->m_Age << std::endl;
        itBegin++;
    }

    // 第二种遍历方式
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << (*it).m_Name << " " << (*it).m_Age << std::endl;
    }

    // 第三种遍历方式
    std::for_each(v.begin(), v.end(), myPrint);
    std::cout << std::endl;
}

// 存放自定义类型的指针
void test02()
{
    std::vector<Person *> v;
    Person p1("刘备:", 30);
    Person p2("关羽:", 28);
    Person p3("张飞:", 26);
    Person p4("赵云:", 24);
    Person p5("马超:", 22);
    // 插入数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    // 第一种遍历方式
    std::vector<Person *>::iterator itBegin = v.begin(); // 起始迭代器，指向容器中第一个元素
    std::vector<Person *>::iterator itEnd = v.end();     // 结束迭代器，指向容器中最后一个元素的下一个位置
    while (itBegin != itEnd)
    {
        std::cout << (*itBegin)->m_Name << " " << (*itBegin)->m_Age << std::endl;
        itBegin++;
    }

    // 第二种遍历方式
    for (std::vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << (*it)->m_Name << " " << (*it)->m_Age << std::endl;
    }

    // 第三种遍历方式
    std::for_each(v.begin(), v.end(), myPrint_);
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
