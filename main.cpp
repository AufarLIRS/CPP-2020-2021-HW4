#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

int main()
{
  // task 1
  std::set<char> set;
  std::string name;
  std::cin >> name;
  for (unsigned i = 0; i < name.size(); i++)
  {
    set.insert(name[i]);
  }
  if (set.size() % 2 != 0)
  {
    std::cout << "IGNORE HIM!" << std::endl;
  }
  else
  {
    std::cout << "CHAT WITH HER!" << std::endl;
  }

  // task 2
  int n, temp;
  std::cin >> n;
  long a = 0, b = 0, c = 0;
  for (int i = 0; i < n; i++)
  {
    std::cin >> temp;
    a = a + temp;
  }
  for (int i = 0; i < n - 1; i++)
  {
    std::cin >> temp;
    b += temp;
  }

  for (int i = 0; i < n - 2; i++)
  {
    std::cin >> temp;
    c += temp;
  }
  std::cout << a - b << std::endl;
  std::cout << b - c << std::endl;

  // task 3
  char abcd[] = "abcd";
  do
  {
    std::cout << abcd << '\t';
  } while (std::next_permutation(abcd, abcd + 4));
  std::cout << std::endl;

  return 0;
}
