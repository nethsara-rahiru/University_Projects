#include<iostream>
using namespace std;

int input(string temps [2], int tempi [4], int row)
{

    int mark1 = 0;
    int mark2 = 0;

    cout << "Student " << row + 1 << endl;
    cout << "\tPlease enter the Registration Number      : ";
    cin >> temps[0];
    cout << "\tPlease enter the Name                     : ";
    cin >> temps[1];
    cout << "\tPlease enter the First assessment Marks   : ";
    cin >> mark1;
    tempi[0] = mark1;
    cout << "\tPlease enter the Second assessment Marks  : ";
    cin >> mark2;
    tempi[1] = mark2;
    tempi[2] = mark1 + mark2;
    tempi[3] = (mark1 + mark2) / 2;
}

int main()
{
    int rows = 0;

    cout << "Enter the number of students  :  ";
    cin >> rows;

    string stuDetails [rows][2];
    int stuMarks [rows][4];
    string temps [2];
    int tempi [4];

    for(int i = 0; i < rows; i++)
    {
        input(temps, tempi, i);
        for(int j = 0; j < 2; j++)
        {
            stuDetails [i][j] = temps [j];
        }
        for(int j = 0; j < 4; j++)
        {
            stuMarks [i][j] = tempi [j];
        }
    }
    
    cout << "--------- DataBase ----------" << endl;
    for(int r = 0; r < rows; r++)
    {
        for(int c = 0; c < 2; c++)
        {
            cout << stuDetails [r][c] << "\t";
        }
        for(int c = 0; c < 4; c++)
        {
            cout << stuMarks [r][c] << "\t";
        }
        cout << endl;
    }

    
}