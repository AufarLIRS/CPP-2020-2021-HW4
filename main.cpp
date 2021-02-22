#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//static bool findInStr(string str, char ch, int num)
//{
//    for (int i = 0; i < num; ++i)
//    {
//        if (str[i] == ch)
//            return (1);
//    }
//    return (0);
//}

static bool findInArr(std::vector<int> &arr, int num)
{
    int n = arr.size();

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == num)
        {
            arr.erase(arr.begin() + i);
            return (1);
        }
    }
    return (0);
}

//static void task1(string str)
//{
//    size_t count = 0;
//    string chat = "CHAT WITH HER!";
//    string ignore = "IGNORE HIM!";

//    for (int i = 0; i < str.size(); ++i)
//    {
//        if (findInStr(str, str[i], i) == 0)
//            count++;
//    }
//    if (count % 2 == 0)
//        cout << chat << endl;
//    else
//        cout << ignore << endl;
//}

static void task2(std::vector<int> &errors1, std::vector<int> &errors2, std::vector<int> &errors3)
{
    int n = errors1.size();
    int answer[2];
    std::vector<int> errors2copy = errors2;

    for (int i = 0; i < n; ++i)
    {
        if (findInArr(errors2copy, errors1[i]) == 0)
        {
            answer[0] = errors1[i];
            break;
        }
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (findInArr(errors3, errors2[i]) == 0)
        {
           answer[1] = errors2[i];
           break;
        }
    }
    cout << answer[0] << " " << answer[1] << endl;
}

static int fact(int x)
{
    if (x > 16 || x < 0) return 0;
    if (x == 0 || x == 1) return 1;
    int a = 1;
    for(int i=1; i<=x; i++)
    {
        a = a * i;
    }
    return a;
}

static void task3()
{
    int a, n, f, size, m, d;
    char *str = "abcd";
    size = strlen(str);
    char tmp[size+1];
    char rez[size+1];

    for (int k=1; k <= fact(size); k++)
    {
        memset(tmp, 0, sizeof(tmp));
        memset(rez, 0, sizeof(rez));
        for (int i=0; i<size; i++) tmp[i] = str[i];
        n = k-1;
        a = size;
        for (int i=0; i<size; i++)
        {
            f = fact(a-1);
            m = n % f;
            d = n / f;
            while (d >= a) d = d % a;
            rez[i] = tmp[d];
            tmp[d] = 0;
            for (int j=0; j<size; j++)
            {
                if ((tmp[j] == 0) && (j < size-1))
                {
                    tmp[j] = tmp[j+1];
                    tmp[j+1] = 0;
                }
            }
            a--;
        }
        printf("%d\t%s\n", k, rez);
    }
}

int main()
{
//    string inputStr;
//    int n;
//    int c;

//    getline(cin, inputStr);
//    task1(inputStr);

//    cin >> n;

//    std::vector<int> errors1;
//    std::vector<int> errors2;
//    std::vector<int> errors3;

//    for (int i = 0; i < n; ++i)
//    {
//        cin >> c;
//        errors1.push_back(c);
//    }
//    for (int i = 0; i < n - 1; ++i)
//    {
//        cin >> c;
//        errors2.push_back(c);
//    }
//    for (int i = 0; i < n - 2; ++i)
//    {
//        cin >> c;
//        errors3.push_back(c);
//    }
//    task2(errors1, errors2, errors3);
    task3();

    return 0;
}
