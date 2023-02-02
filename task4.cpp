#include <iostream>
using namespace std;
void numberAmplifier(int num);

main()
{
    int num;
    cout << "Enter number:  ";
    cin >> num;
    numberAmplifier(num);
}
void numberAmplifier(int num)
{
    for (int count = 1; count <= num; count = count + 1)
    {
        if (count % 4 == 0)
        {
            cout << count * 10 << " ";
            continue;
        }
        cout << count << " ";
    }
}