#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    bool zero = true;
    srand(time(0));
    int base[3][3];
    cout << "\t\tMatrix game" << endl;
    cout << "Objective:" << endl
         << "Try changing all 1s to 0s" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int randomValue = rand() % 10;
            base[i][j] = (randomValue < 7) ? 0 : 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t\t" << base[i][j];
        }
        cout << endl;
    }

    int i, j, row, column;
    do
    {
        cout << "Enter row:";
        cin >> row;
        cout << "Enter column:";
        cin >> column;
        cout << "Setting base[" << row << "][" << column << "] to 0" << endl;
        base[row][column] = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << base[i][j];

                if (base[i][j] == 0)
                {
                    zero = false;
                    break;
                }
            }
            cout << endl;
        }
    } while (zero = true);
}
