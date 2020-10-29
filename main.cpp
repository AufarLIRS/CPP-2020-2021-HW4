#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void task_1(){
	string uname ="";
	cin >> uname;
	const string answer_1 = "CHAT WITH HER!";
	const string answer_2 = "INGORE_HIM!";
	cout << ((set<char>(uname.begin(), uname.end()).size() % 2 == 0) ? answer_1 : answer_2) << endl;
	}

void task_2(){
  int n;
  cin >> n;
  multiset<int> Error_1;
  for (int i = 0; i < n; i++){
    int a;
    cin >> a;
    Error_1.insert(a);
  }
  multiset<int> Error_2;
  for (int i = 0; i < n - 1; i++){
    int a;
    cin >> a;
    if (Error_1.find(a) != Error_1.end()){
      Error_1.erase(Error_1.find(a));
    }
    Error_2.insert(a);
  }
  for (int i = 0; i < n - 2; i++){
    int a;
    cin >> a;
    if (Error_2.find(a) != Error_2.end()){
      Error_2.erase(Error_2.find(a));
    }
  }
 cout << *Error_1.begin() << endl;
 cout << *Error_2.begin() << endl;
}

void task_3(){
  string str = "abcd";
  cout << str <<endl;
  while (next_permutation(str.begin(), str.end())){
    cout << str << endl;
  }
}

int main()
{
    task_1();
    //task_2();
    //task_3();
    return 0;
}
