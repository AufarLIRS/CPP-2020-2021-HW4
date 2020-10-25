#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void n1()
{
  string name;
  cin >> name;
  set<char> a(name.begin(), name.end());
  if (a.size() % 2 == 0)
  {
    cout << "CHAT WITH HER!" << endl;
  }
  else
  {
    cout << "IGNORE HIM!" << endl;
  }
}

void n2()
{
  short n;
  cin >> n;
  multiset<short> first;
  multiset<short> second;
  multiset<short> third;
  for (short i = 0; i < n; i++)
  {
    short a;
    cin >> a;
    first.insert(a);
  }
  for (short i = 0; i < n - 1; i++)
  {
    short a;
    cin >> a;
    second.insert(a);
  }
  for (short i = 0; i < n - 2; i++)
  {
    short a;
    cin >> a;
    third.insert(a);
  }
  // search for first dissapeared number
  for (auto it = first.begin(); it != first.end(); ++it)
  {
    if (second.count(*it) < first.count(*it))
    {
      cout << *it << endl;
      break;
    }
  }
  // search for second disappeared number
  for (auto it = second.begin(); it != second.end(); ++it)
  {
    if (third.count(*it) < second.count(*it))
    {
      cout << *it << endl;
      break;
    }
  }
}

void n3()
{
  string str = "abcd";
  cout << str << endl;
  while (next_permutation(str.begin(), str.end()))
  {
    cout << str << endl;
  }
}

int main()
{
  // n1();
  // n2();
  // n3();
  return 0;
}
