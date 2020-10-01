#include <iostream>

using namespace std;

int arr[] = {1,2,3,4};
int suma = 0 ;

int parImpar ()
{
    for (int i=0;i<=5; i++)
        if (i%2 == 0)
        {
         // cout<<"numere pare";
        suma = suma + arr[i];
        }
        else
        {
            // cout<<"numere pare";
            suma = suma - arr[i];
        }
        return suma;
        
}

int main() {
    cout<<"rezultat: " << parImpar();
    return 0;
}