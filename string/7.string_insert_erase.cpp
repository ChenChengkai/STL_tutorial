#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    std::string str = "hello";
    str.insert(1, "111");
    std::cout << "str:" << str << std::endl;
    str.erase(1, 3);
    std::cout << "str:" << str << std::endl;
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
