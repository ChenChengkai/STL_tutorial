#include <iostream>
#include <fstream>
#include <string>

void test01()
{
    std::string str = "hello";
    // read
    for (int i = 0; i < str.size(); i++)
    {
        std::cout << str[i] << std::endl;
    }

    for (int i = 0; i < str.size(); i++)
    {
        std::cout << str.at(i) << std::endl;
    }
    // write
    str[0] = 'x';
    for (int i = 0; i < str.size(); i++)
    {
        std::cout << str[i] << std::endl;
    }
    str.at(1) = 'x';
    for (int i = 0; i < str.size(); i++)
    {
        std::cout << str.at(i) << std::endl;
    }
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
