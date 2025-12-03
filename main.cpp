#include <iostream>
using namespace std;

int input()
{
    int x;

    do
    {
        cout << "Inserisci un numero positivo" << endl;

        cin >> valore;
        
    }
    while(x<=0);
    
}
int main()
{
   int a,b;

   int dichiarazA, dichiarazB, sommaA, sottrazioneA;

   dichiarazA = input(a);

   dichiarazB = input(b);

   sommaA= somma(a,b);

   sottrazioneA = sottrazione(a,b);
}


