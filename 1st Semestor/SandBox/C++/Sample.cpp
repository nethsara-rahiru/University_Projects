#include<iostream>
using namespace std;

int main()
{
    // Vaiables
    int m = 0;
    int n = 0;

    // Difining the size of the Matrixs
    cout << "Rows  = ";
    cin >> m;
    cout << "Colus = ";
    cin >> n;

    // Arrays
    int A[m][n];
    int B[m][n];

    // Get inputs for the Matrix
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++ )
        {
            cout << "Please Enter value for A[" << r << "][" << c << "] : ";
            cin >> A[r][c];
        }
    }
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++ )
        {
            cout << "Please Enter value for B[" << r << "][" << c << "] : ";
            cin >> B[r][c];
        }
    }

        cout << endl;
        cout << endl;

    // Calculating the final Matrix    
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++ )
        {
            int value = 0;
            for (int i = 0; i < n; i++ )
            {
                value = A[c][i] * B[i][r] + value;
            }
            cout << value << "   ";
        }
        cout << endl;
    }
}