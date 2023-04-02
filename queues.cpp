#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> numb;
    int num, sum = 0;
    cout << "enter the numbers(-1 to stop): ";
    while (cin >> num && num != -1)
    {
        numb.push(num);
    }
    while (!numb.empty())
    {
        sum += numb.front();
        numb.pop();
    }
    cout << "the sum of the number is " << sum << endl;
    return 0;
}