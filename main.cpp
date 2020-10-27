#include <algorithm>
#include <ctime>
#include <iostream>
#include <iterator>
#include <map>
#include <vector>

// Task 1 - проверка никнейма.
void findGirl(std::string nickname)
{
  std::cout << "Enter her/his nickname: ";
  std::cin >> nickname;
  std::map<char, char> findNumberOfLetters;
  for (auto it = nickname.begin(); it != nickname.end(); it++)
    findNumberOfLetters[*it] = *it;
  findNumberOfLetters.size() % 2 == 0 ? std::cout << "CHAT WITH HER!" << std::endl :
                                        std::cout << "IGNORE HIM!" << std::endl;
}

// Task 2 - Удаление номера ошибки из последовательности
void comparisonOfArrays()
{
  srand(time(NULL));
  int numbers, count1 = 0, count2 = 0;
  std::cout << "Enter array length of errors: ";
  std::cin >> numbers;
  std::vector<int> errors_(numbers);

  for (int i = 0; i < numbers; i++)
  {
    errors_[i] = rand() % 109;
    errors_.push_back(errors_[i]);
    std::cout << errors_[i] << ' ';
  }
  std::cout << std::endl;
  int newNumbers = numbers;

  while (newNumbers != numbers - 2)
  {
    count2 = errors_[rand() % newNumbers];
    errors_.erase(remove(errors_.begin(), errors_.end(), count2), errors_.end());
    for (int j = 0; j < newNumbers - 1; j++)
    {
      std::cout << errors_[j] << ' ';
    }
    if (count1 == 0)
      count1 = count2;
    newNumbers -= 1;
    std::cout << std::endl;
  }
  std::cout << count1 << std::endl;
  std::cout << count2 << std::endl;
}

// Task 3 - все перестановки строки “abcd”.
void allPermutations(std::string permutation = "abcd")
{
  do
  {
    std::cout << permutation << std::endl;
  } while (std::next_permutation(permutation.begin(), permutation.end()));
}

int main()
{
  std::string nickname_;
  findGirl(nickname_);
  comparisonOfArrays();
  allPermutations();
  return 0;
}
