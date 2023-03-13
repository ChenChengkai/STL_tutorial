#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    std::string str1 = "xhello";
    std::string str2 = "zhello";
    if (str1.compare(str2) == 0)
    {
        std::cout << "str1等于str2" << std::endl;
    }
    else if (str1.compare(str2) > 0)
    {
        std::cout << "str1大于str2" << std::endl;
    }
    else
    {
        std::cout << "str1小于str2" << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
