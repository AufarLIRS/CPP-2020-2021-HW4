#include <iostream>
#include <algorithm>
#include <set>
#include <string>


void task_1(std::string username)
{
    std::set<char> chars(username.begin(), username.end());

    if(chars.size() % 2 == 0)
        std::cout << "CHAT WITH " << username << std::endl;
    else
        std::cout << "IGNORE HIM!" << std::endl;
}

void task_2()
{
    unsigned short n;
    std::cin >> n;

    std::multiset<unsigned short> first;
    std::multiset<unsigned short> second;
    std::multiset<unsigned short> third;

    for(unsigned short i = 0; i < n; i++)
    {
        unsigned short a;
        std::cin >> a;
        first.insert(a);
    }

    for (unsigned short i = 0; i < n - 1; i++)
    {
        unsigned short a;
        std::cin >> a;
        second.insert(a);
    }

    for (unsigned short i = 0; i < n - 2; i++)
    {
        short a;
        std::cin >> a;
        third.insert(a);
    }

    for (auto it = first.begin(); it != first.end(); ++it)
    {
        if (second.count(*it) < first.count(*it))
        {
          std::cout << *it << std::endl;
          break;
        }
    }

    for (auto it = second.begin(); it != second.end(); ++it)
    {
        if (third.count(*it) < second.count(*it))
        {
          std::cout << *it << std::endl;
          break;
        }
    }

}

void task_3(std::string chars)
{
    do
    {
        std::cout << chars << std::endl;
    }while (std::next_permutation(chars.begin(), chars.end()));

}

int main()
{
//    task_1("sevenkplus");
    task_2();
//    task_3("abcd");
    return 0;
}
