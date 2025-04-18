#include<iostream>
using namespace std;

int main()
{
    int pat = 0;
    int row;

    cout << "Choose a pattern to draw:" << endl;
    cout << "   1. Right-Angled Triangle" << endl;
    cout << "   2. Inverted Triangle" << endl;
    cout << "   3. Square" << endl;
    cout << "   4. Triangle(Pyramid pattern)" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> pat;
    cout << "Enter the number of rows: ";
    cin >> row;

    switch(pat)
    {
        case 1:
            for (int rows = 1; rows <= row; rows++)
            {
                for (int star = 0; star < rows; star++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 2:
            for (int rows = 0; rows <= row; rows++)
            {
                for (int star = row; star > rows; star--)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 3:
            for (int rows = 0; rows <= row; rows++)
            {
                for (int star = 0; star < row; star++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 4:
            for (int rows = 0; rows < row; rows++)
            {
                for (int star = row; star > rows; star--)
                {
                    cout << " ";
                }
                for (int star = 0; star < 2*rows+1; star++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        default:
            cout << "Invalid choice...";

    }
}
