#include <iostream>
using namespace std;
void PrintShape(int rows);
void PrintShape2(int rows);

main()
{
    int rows;
    cout << "Numbers of rows:  ";
    cin >> rows;
    PrintShape(rows);
    PrintShape2(rows);
}

void PrintShape(int rows)
{
    int half = rows / 2;

    for (int j = half; j >= 0; j = j - 1)
    {
        for (int i = 1; i <= half; i = i + 1)
        {
            cout << " ";
        }
        for (int k = half; k <= rows / 2; k = k + 1)
        {
            cout << "*";
        }
        half = half - 1;
        cout << "\n";
    }
}

void PrintShape2(int rows)
{
    int half = rows / 2;

    for (int j = half; j >= 0; j = j - 1)
    {
       
        for (int k = half; k <= rows / 2; k = k + 1)
        {
            cout << " ";
        }
        for (int i = 1; i <= half; i = i + 1)
        {
            cout << "*";
        }

        half = half - 1;
        cout << "\n";
    }
}