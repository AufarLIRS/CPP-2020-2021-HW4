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
  std::map<int, int> difference;
  int n;
  std::cout << "Введите изначальное количество ошибок:";
  std::cin >> n;
  std::cout << std::endl;
  int a[n];
  int b[n - 1];
  int c[n - 2];
  std::cout << "Введите номера ошибок, выданных компилятором в первый раз:";
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    int key = a[i];
    difference[key]++;
  }
  std::cout << std::endl << "Введите номера ошибок, выданных компилятором во второй раз:";
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
      std::cout << "Номер исчезнувшей ошибки после внесения первого исправления - " << key << std::endl;
      break;
    }
  }
  difference.clear();
  for (int i = 0; i < n - 1; i++)
  {
    int key = b[i];
    difference[key]++;
  }
  std::cout << std::endl << "Введите номера ошибок, выданных компилятором в третий раз:";
  for (int i = 0; i < n - 2; i++)
  {
    std::cin >> c[i];
    int key = c[i];
    difference[key]--;
  }
  std::cout << std::endl;
  for (int i = 0; i < n - 1; i++)
  {
    int key = b[i];
    if (difference[key] == 1)
    {
      std::cout << "Номер исчезнувшей ошибки после внесения второго исправления - " << key << std::endl;
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
