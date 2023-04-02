#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string str = "sunday";
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
    string rev_str = " ";
    while (!s.empty())
    {
        rev_str += s.top();
        s.pop();
    }
    cout << "Original string :" << str << endl;
    cout << "rev string :" << rev_str << endl;
    return 0;
}
