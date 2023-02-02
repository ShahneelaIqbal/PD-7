#include <iostream>
using namespace std;
void percentage(int lines);

main()
{
    int lines;
    cout << "Enter number of lines:  ";
    cin >> lines;
    percentage(lines);
}
void percentage(int lines)
{
    int numbers;
    float countPer1 = 0.0;
    float countPer2 = 0.0;
    float countPer3 = 0.0;
    for (int i = 0; i < lines; i++)
    {
        cout << "Enter number:  ";
        cin >> numbers;
        if (numbers % 2 == 0)
        {
            countPer1 = countPer1 + 1;
        }
        if (numbers % 3 == 0)
        {
            countPer2 = countPer2 + 1;
        }
        if (numbers % 4 == 0)
        {
            countPer3 = countPer3 + 1;
        }
    }
    float percentage1 = (countPer1 / lines) * 100;
    cout << percentage1 << " %" << endl;
    float percentage2 = (countPer2 / lines) * 100;
    cout << percentage2 << " %" << endl;
    float percentage3 = (countPer3 / lines) * 100;
    cout << percentage3 << " %" << endl;
}