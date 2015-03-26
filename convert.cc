#include <iostream>

using namespace std;

void CtoF()
{
    float Ctemp, Ftemp;

    cout << "Please iuput the temperature in Celsius : ";
    cin >> Ctemp;

    Ftemp = (float)(Ctemp*9/5)+32;
    cout << Ctemp << " C = " << Ftemp << " F" << endl;
}


void FtoC()
{
    float Ctemp, Ftemp;

    cout << "Please iuput the temperature in Fahrenheit : ";
    cin >> Ftemp;

    Ctemp = (float)(Ftemp - 32)*5/9;
    cout << Ftemp << " F = " << Ctemp << " C" << endl;
}


int main() 
{
    int sel;

    while(1){
    cout << endl << "Input 1(C-->F) or 2(F-->C) to select temperature convert. 3 to leave. : ";
	cin >> sel;

        if(sel == 1)
            CtoF();
        else if(sel == 2)
            FtoC();
        else if(sel == 3)
            break;
        else
            cout << "Please input 1 or 2 !" << endl;
    }

    cout << endl;
    return 0;
}

