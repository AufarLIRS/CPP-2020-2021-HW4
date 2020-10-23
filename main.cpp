#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void task_1()
{
  const string answer_1 = "CHAT WITH HER!";
  const string answer_2 = "IGNORE_HIM!";
  string input = "";
  cin >> input;
  cout << ((set<char>(input.begin(), input.end()).size() % 2 == 0) ? answer_1 : answer_2) << endl;
}

void task_2()
{
  const int number_of_compilations = 2;
  vector<int> fixed_errors;
  auto read_integers_to_multiset_from_console = [](int n) {
    multiset<int>* ms = new multiset<int>;
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> tmp;
      ms->insert(tmp);
    }
    return ms;
  };
  int input_1 = 0;
  cin >> input_1;
  vector<multiset<int>*> errors{ read_integers_to_multiset_from_console(input_1) };
  for (int i = 1; i <= number_of_compilations; i++)
  {
    errors.push_back(read_integers_to_multiset_from_console(input_1 - i));
    set_difference(errors[i - 1]->begin(), errors[i - 1]->end(), errors[i]->begin(), errors[i]->end(),
                   inserter(fixed_errors, fixed_errors.begin()));
    cout << *fixed_errors.begin() << endl;
  }
}

void task_3()
{
  string input = "abcd";
  std::sort(input.begin(), input.end());
  do
  {
    cout << input << endl;
  } while (std::next_permutation(input.begin(), input.end()));
}

int main()
{
  // task_1();
  // task_2();
  // task_3();
  return 0;
}
