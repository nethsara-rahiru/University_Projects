#include<iostream>
using namespace std;


void set(int pat, int input)
{
    int rows = 6;
    int count;
    int i = 1;

    for( i; i <= rows; i++)
    {
        count = count + 1;
        if ( count == input + 1)
            {
                break;
            }
        for(int c = 0; c < pat; c++)
        {
            if( c == 0)
            {
                for( int f = 0; f < input / 6 - pat + 1; f++)
                {
                    for( int g = 0; g < 6; g++)
                    {
                    cout << " ";
                    }
                }
            }
            for( int a = rows; a > i; a--)
            {
                cout << " ";
            }
            for(int star = 0; star < i; star++)
            {
                cout << "*";
            }
            for(int star = 0; star < i - 1; star++)
            {
                cout << "*";
            }
            for( int a = rows; a > i; a--)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() 
{
    int input;

    cout << "Enter the Number of rows : ";
    cin >> input;

    int bottom = input / 6 + 1;

    for(int a = 1; a <= bottom; a++)
    {
        for(int b = a; b <= a; b++)
        {
            //block(b);
            set(b, input);
        }
    }
    
}