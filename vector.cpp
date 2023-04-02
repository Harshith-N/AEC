#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num;
    num.push_back(10);
    num.push_back(25);
    num.push_back(30);
    num.push_back(99);
    cout << "the numbers in the vector are: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    cout << "the even nos are : ";
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << " ";
        }
        return 0;
    }
}