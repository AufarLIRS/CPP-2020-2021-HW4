#include <iostream>
#include <algorithm>
#include <set>

void Task1()
{
    std::cout << "Enter data" << std::endl;
    std::string username;
    std::set<char> chars;
    std::cin >> username;
    for(char& ch: username)
    {
        chars.insert(ch);
    }

    if((chars.size() % 2) == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }
}

void Task2()
 {
   short n;
   std::cin >> n;
   std::multiset<short> first;
   std::multiset<short> second;
   std::multiset<short> third;
   for (short i = 0; i < n; i++)
   {
     short a;
     std::cin >> a;
     first.insert(a);
   }
   for (short i = 0; i < n - 1; i++)
   {
     short a;
     std::cin >> a;
     second.insert(a);
   }
   for (short i = 0; i < n - 2; i++)
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

void Task3()
{
    std::string str = "abcd";
    std::cout << str << std::endl;
    while (next_permutation(str.begin(), str.end())) {
        std::cout << str << std::endl;
    }
}
int main()
{
    Task1();
    Task2();
    Task3();
    return 0;
}
