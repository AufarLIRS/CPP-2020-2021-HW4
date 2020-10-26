#include <iostream>
#include <set>
#include <algorithm>

void n1()
{
  std::string name;
  std::cin >> name;
  std::set<char> a(name.begin(), name.end());
  if (a.size() % 2 == 0)
  {
    std::cout << "CHAT WITH HER!" << std::endl;
  }
  else
  {
    std::cout << "IGNORE HIM!" << std::endl;
  }
}

void n2()
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
  // search for first dissapeared number
  for (auto it = first.begin(); it != first.end(); ++it)
  {
    if (second.count(*it) < first.count(*it))
    {
      std::cout << *it << std::endl;
      break;
    }
  }
  // search for second disappeared number
  for (auto it = second.begin(); it != second.end(); ++it)
  {
    if (third.count(*it) < second.count(*it))
    {
      std::cout << *it << std::endl;
      break;
    }
  }
}

void n3()
{
  std::string str = "abcd";
  std::cout << str << std::endl;
  while (next_permutation(str.begin(), str.end()))
  {
    std::cout << str << std::endl;
  }
}

int main()
{
  // n1();
  // n2();
  // n3();
  return 0;
}
