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
vector<int> FindException(int n, vector<int> a, vector<int> b, vector<int> c)
{
  vector<int> vec_out_exc;
  int exc;
  map<int, int> mp;
  for (int num : a)
  {
    int key = num;
    mp[key]++;
  }
  for (int num : b)
  {
    int key = num;
    mp[key]--;
  }
  for (int num : a)
  {
    int key = num;
    if (mp[key] == 1)
    {
      exc = key;
      break;
    }
  }

  vec_out_exc.push_back(exc);
  mp.clear();
  for (int num : b)
  {
    int key = num;
    mp[key]++;
  }
  for (int num : c)
  {
    int key = num;
    mp[key]--;
  }
  for (int num : b)
  {
    int key = num;
    if (mp[key] == 1)
    {
      exc = key;
      break;
    }
  }
  vec_out_exc.push_back(exc);
  return vec_out_exc;
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
  vector<int> a, b, c;
  a.resize(n);
  b.resize(n - 1);
  c.resize(n - 2);
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
