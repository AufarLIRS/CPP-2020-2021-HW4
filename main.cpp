#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
using namespace std;

void CountNoRepeatLetters(string str)
{
  set<char> uniqueLetters(begin(str), end(str));
  if (uniqueLetters.size() % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
  else
    cout << "IGNORE HIM!" << endl;
}
void Permutations(string str)
{
  cout << str << endl;
  while (next_permutation(str.begin(), str.end()))
    cout << str << endl;
}
vector<int> FindException(int n, int a[], int b[], int c[])
{
  vector<int> vec;
  int exc;
  int key;
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    key = a[i];
    mp[key]++;
  }
  for (int i = 0; i < n - 1; i++)
  {
    key = b[i];
    mp[key]--;
  }
  for (int i = 0; i < n; i++)
  {
    key = a[i];
    if (mp[key] == 1)
    {
      exc = key;
      break;
    }
  }

  vec.push_back(exc);
  mp.clear();
  for (int i = 0; i < n - 1; i++)
  {
    key = b[i];
    mp[key]++;
  }
  for (int i = 0; i < n - 2; i++)
  {
    key = c[i];
    mp[key]--;
  }
  for (int i = 0; i < n - 1; i++)
  {
    key = b[i];
    if (mp[key] == 1)
    {
      exc = key;
      break;
    }
  }
  vec.push_back(exc);
  return vec;
}
int main()
{
  CountNoRepeatLetters("wjmzbmr");
  CountNoRepeatLetters("xiaodao");
  CountNoRepeatLetters("sevenkplus");

  Permutations("abcd");

  int n;
  cout << "Enter count exceptions: ";
  cin >> n;
  int* a = new int[n];
  int* b = new int[n - 1];
  int* c = new int[n - 2];
  cout << "Enter line exceptions" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    cin >> b[i];
  }
  for (int i = 0; i < n - 2; i++)
  {
    cin >> c[i];
  }
  vector<int> vec(2);
  vec = FindException(n, a, b, c);
  for (unsigned int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << endl;
  }
  return 0;
}
