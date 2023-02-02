#include <iostream>
using namespace std;
void calculate(float cargo);

main()
{
    float cargo;
    cout << "Enter number of cargo:  ";
    cin >> cargo;
    calculate(cargo);
}
void calculate(float cargo)
{
    float ton = 0.0;
    float minibus = 0.0;
    float truck = 0.0;
    float train = 0.0;
    float priceMini = 0.0;
    float priceTruck = 0.0;
    float priceTrain = 0.0;
    float total = 0.0;
    float count = 0;

    while (count < cargo)
    {
        cout << "Enter ton of cargo:  ";
        cin >> ton;
        count++;
        total = total + ton;

        if (ton <= 3)
        {
            minibus = minibus + ton;
            priceMini = priceMini + (ton * 200);
        }
        else if (ton > 3 && ton <= 11)
        {
            truck = truck + ton;
            priceTruck = priceTruck + (ton * 175);
        }
        else
        {
            train = train + ton;
            priceTrain = priceTrain + (ton * 120);
        }
    }
    float average = (priceMini + priceTruck + priceTrain) / total;
    cout << average << endl;
    float percentage1 = (minibus / total) * 100;
    cout << percentage1 << " %" << endl;
    float percentage2 = (truck / total) * 100;
    cout << percentage2 << " %" << endl;
    float percentage3 = (train / total) * 100;
    cout << percentage3 << " %" << endl;
}
