#include <iostream>
using namespace std;
void treated(int period);

main()
{
    int period;

    cout << "Enter day:  ";
    cin >> period;

    treated(period);
}
void treated(int period)
{
    int treatedPatients = 0;
    int untreatedPatients = 0;
    int doctors = 7;

    for (int count = 1; count <= period; count = count + 1)
    {
        int day;
        cout << "Enter number of patient coming current day:  ";
        cin >> day;
        if (untreatedPatients > treatedPatients && count % 3 == 0)
        {
            doctors = doctors + 1;
        }
        if (day > doctors)
        {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + (day - doctors);
        }
        else
        {
            treatedPatients = treatedPatients + day;
        }
    }
    cout << "Treated: " << treatedPatients << endl;
    cout << "Untreated: " << untreatedPatients << endl;
}