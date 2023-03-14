#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <time.h>
class Person
{
public:
    Person(std::string name, int score)
    {
        this->m_Name = name;
        this->m_Score = score;
    }
    std::string m_Name;
    int m_Score;
};

void createPerson(std::vector<Person> &v)
{
    std::string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        std::string name = "选手";
        name += nameSeed[i];
        int score = 0;
        Person p(name, score);
        v.push_back(p);
    }
}
void setScore(std::vector<Person> &v)
{
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        // 将评委的分数放入到deque中
        std::deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }
        // std::cout << it->m_Name << " 打分：" << std::endl;

        // 排序
        std::sort(d.begin(), d.end());
        // delete the highest the lowest score
        d.pop_back();
        d.pop_front();
        int sum = 0;
        for (std::deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
        {
            // std::cout << *dit << " ";
            sum += *dit;
        }
        // std::cout << std::endl;
        int avg = sum / d.size();
        it->m_Score = avg;
    }
}
void showScore(std::vector<Person> &v)
{
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << "姓名：" << it->m_Name << " 得分：" << it->m_Score << std::endl;
    }
}
int main(int argc, char const *argv[])
{
    srand((unsigned int)time(NULL));
    // 1.创建五名选手
    std::vector<Person> v;
    createPerson(v);
    showScore(v);
    std::cout << std::endl;
    // 2.给五名选手打分
    setScore(v);
    showScore(v);
    // 3.显示最后得分
    return 0;
}
