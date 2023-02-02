#include <iostream>
using namespace std;
void shape(int number);

main()
{
    int number;
    cout << "Enter number of rows:  ";
    cin >> number;
    shape(number);
}
void shape(int number)
{
    for (int i = number; i >= 1; i = i - 1)
    {
        for (int j = number; j > i; j = j - 1)
        {
            cout << "*";
        }
        for (int k = 1; k <= i; k = k + 1)
        {
            cout << " ";
        }
        for (int z = 1; z <= i; z = z + 1)
        {
            cout << " ";
        }
        for (int y = number; y > i; y = y - 1)
        {
            cout << "*";
        }
        cout << endl;
    
    }
    
}