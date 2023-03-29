#include <iostream>
#include <list>

class Person
{
public:
    Person(std::string name, int age, int height)
    {
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }
    std::string m_Name;
    int m_Age;
    int m_Height;
};

void printList(const std::list<Person> &l)
{
    for (std::list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        std::cout << it->m_Name << " " << it->m_Age << " " << it->m_Height << std::endl;
    }
}

bool myCompare(const Person &p1, const Person &p2)
{
    if (p1.m_Age > p2.m_Age)
    {
        return true;
    }
    else if (p1.m_Age == p2.m_Age)
    {
        if (p1.m_Height < p2.m_Height)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
void test01()
{
    std::list<Person> L1;

    Person p1("刘备", 35, 175);
    Person p2("曹操", 45, 180);
    Person p3("孙权", 40, 170);
    Person p4("赵云", 25, 190);
    Person p5("张飞", 35, 160);
    Person p6("关羽", 35, 200);
    L1.push_back(p1);
    L1.push_back(p2);
    L1.push_back(p3);
    L1.push_back(p4);
    L1.push_back(p5);
    L1.push_back(p6);
    std::cout << "排序前：" << std::endl;
    printList(L1);
    L1.sort(myCompare);
    std::cout << "排序后：" << std::endl;
    printList(L1);
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
