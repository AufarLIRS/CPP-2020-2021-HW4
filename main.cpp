#include <iostream>
#include <set>
#include <algorithm>

void Task1()
{
  std::string name;
  std::cin >> name;
  std::set<char> letters;
  for (char& l : name)
  {
    letters.insert(l);
  }
  if (letters.size() % 2 == 0)
  {
    std::cout << "CHAT WITH HER!" << std::endl;
  }
  else
    std::cout << "IGNORE HIM!" << std::endl;
};

void Task2()
{
  int n;
  std::cin >> n;
  std::multiset<int> FirstErrors;
  for (int i = 0; i < n; i++)
  {
    int a;
    std::cin >> a;
    FirstErrors.insert(a);
  }
  std::multiset<int> SecondErrors;
  for (int i = 0; i < n - 1; i++)
  {
    int a;
    std::cin >> a;
    if (auto w = FirstErrors.find(a); w != FirstErrors.end())
    {
      FirstErrors.erase(w);
    }
    SecondErrors.insert(a);
  }
  for (int i = 0; i < n - 2; i++)
  {
    int a;
    std::cin >> a;
    if (auto w = SecondErrors.find(a); w != SecondErrors.end())
    {
      SecondErrors.erase(w);
    }
  }
  std::cout << *FirstErrors.begin() << std::endl;
  std::cout << *SecondErrors.begin() << std::endl;
}

void Task3()
{
  std::string s = "abcd";
  do
  {
    std::cout << s << '\n';
  } while (std::next_permutation(s.begin(), s.end()));
}

int main()
{
  Task1();
  // Task2();
  // Task3();
}
