#include <iostream>
using namespace std;
void printShape(int rows);

main()
{
    int rows;
    cout << "Enter numbers of rows:  ";
    cin >> rows;
    printShape(rows);
}

void printShape(int rows)
{
    for (int i = 1; i <= rows; i = i + 1)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}