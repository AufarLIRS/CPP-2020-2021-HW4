#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>

void CountUniqueLetters(std::string str)
{
  std::set<char> uniqueLetters(begin(str), end(str));
  if (uniqueLetters.size() % 2 == 0)
    std::cout << "CHAT WITH HER!" << std::endl;
  else
    std::cout << "IGNORE HIM!" << std::endl;
}

void PrintAllPermutations(std::string str)
{
  do
  {
    std::cout << str << std::endl;
  } while (std::next_permutation(str.begin(), str.end()));
}
void TwoMistakes()
{
  std::map<int, int> x;
  int n;
  std::cin >> n;
  int a[n];
  int b[n];
  int c[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    x[a[i]]++;
  }
  n--;
  for (int i = 0; i < n; i++)
  {
    std::cin >> b[i];
    x[b[i]]--;
  }
  for (int i = 0; i < n + 1; i++)
  {
    if (x[a[i]])
    {
      std::cout << a[i] << std::endl;
      break;
    }
  }
  x.clear();
  for (int i = 0; i < n; i++)
  {
    x[b[i]]++;
  }
  n--;
  for (int i = 0; i < n; i++)
  {
    std::cin >> c[i];
    x[c[i]]--;
  }
  for (int i = 0; i < n + 1; i++)
  {
    if (x[b[i]])
    {
      std::cout << b[i] << std::endl;
      break;
    }
  }
}

int main()
{
  // Task 1
  CountUniqueLetters("wjmzbmr");
  CountUniqueLetters("xiaodao");
  CountUniqueLetters("sevenkplus");
  // Task 2
  TwoMistakes();
  // Task 3
  PrintAllPermutations("abcd");
}
