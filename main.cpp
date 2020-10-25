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
int FindDifference(int n)
{
  std::map<int, int> difference;
  int a[n];
  int b[n - 1];
  int numberOfException = 0;
  std::cout << std::endl << "Номера ошибок:";
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    int key = a[i];
    difference[key]++;
  }
  std::cout << std::endl << "Номера ошибок:";
  for (int i = 0; i < n - 1; i++)
  {
    std::cin >> b[i];
    int key = b[i];
    difference[key]--;
  }
  for (int i = 0; i < n; i++)
  {
    int key = a[i];
    if (difference[key] == 1)
    {
      numberOfException = key;
      break;
    }
  }
  return numberOfException;
}
void TwoMistakes()
{
  int n;
  std::cout << "Введите изначальное количество ошибок:";
  std::cin >> n;
  std::cout << std::endl;
  std::cout << "Номер ошибки, исчезнувшей после первого исправления - " << FindDifference(n);
  n--;
  std::cout << "Номер ошибки, исчезнувшей после второго исправления - " << FindDifference(n);
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
