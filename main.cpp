#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>

void task_1()
{
  const std::string answer_1 = "CHAT WITH HER!";
  const std::string answer_2 = "IGNORE_HIM!";
  std::string input = "";
  std::cin >> input;
  std::cout << ((std::set<char>(input.begin(), input.end()).size() % 2 == 0) ? answer_1 : answer_2) << std::endl;
}

void task_2()
{
  const int number_of_errors = 2;
  auto read_integers_to_multiset_from_console = [](int n) {
    std::multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
      int tmp = 0;
      std::cin >> tmp;
      ms.insert(tmp);
    }
    return ms;
  };
  int input_1 = 0;
  std::cin >> input_1;
  std::multiset<int> input_2 = read_integers_to_multiset_from_console(input_1);
  for (int i = 0; i < number_of_errors; ++i)
  {
    std::string tmp = "";
    std::getline(std::cin, tmp);
  }
  std::multiset<int> input_last = read_integers_to_multiset_from_console(input_1 - number_of_errors);
  std::for_each(input_last.begin(), input_last.end(), [&input_2](const int& n) {
    auto pos = input_2.find(n);
    input_2.erase(pos);
  });
  for (int i : input_2)
  {
    std::cout << i << std::endl;
  }
}

void task_3()
{
  std::string input = "abcd";
  std::sort(input.begin(), input.end());
  do
  {
    std::cout << input << std::endl;
  } while (std::next_permutation(input.begin(), input.end()));
}

int main()
{
  // task_1();
  // task_2();
  // task_3();
  return 0;
}
