#include<iostream>
using namespace std;

int nextStep(int arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr[i] + 5;
    }  
    
}
int main ()
{
    int arr[5] = {1,2,3,4,5};

    nextStep(arr);

    for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << endl; 
        }  

}