#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <functional>
#include <iomanip>
#include <list>
#include <vector>

int main()
{
  // First task
  std::string input;
  std::cin >> input;
  if (input.size() % 2 == 0)
    std::cout << "CHAT WITH HER!" << '\n';
  else
    std::cout << "IGNORE HIM!" << '\n';

  // Second task
  int count;
  std::cin >> count;
  std::multiset<int> firstset;
  std::multiset<int> secondset;
  std::multiset<int> thirdset;
  std::vector<int> result(2);
  std::vector<int>::iterator it;

  for (int i = 0; i < count; i++)
  {
    int temp;
    std::cin >> temp;
    firstset.insert(temp);
  }
  for (int i = 0; i < count - 1; i++)
  {
    int temp;
    std::cin >> temp;
    secondset.insert(temp);
  }
  for (int i = 0; i < count - 2; i++)
  {
    int temp;
    std::cin >> temp;
    thirdset.insert(temp);
  }
  //Обошёлся без второго массива, но вводить всё-таки нужно
  it = std::set_difference(firstset.begin(), firstset.end(), thirdset.begin(), thirdset.end(), result.begin());
  for (it = result.begin(); it != result.end(); ++it)
    std::cout << *it << std::endl;

  // Third task
  std::string s = "abcd";
  do
  {
    std::cout << s << '\n';
  } while (std::next_permutation(s.begin(), s.end()));
}
