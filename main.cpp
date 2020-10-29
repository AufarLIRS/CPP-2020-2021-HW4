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

void task_2();

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
//    task_2();
//    task_3("abcd");
    return 0;
}
