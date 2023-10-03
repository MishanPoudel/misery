#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int base[3][3];
    cout << "\t\tMatrix game" << endl;
    cout << "Objective:" << endl
         << "Try changing all 1s to 0s" << endl;

    // Initialize the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int randomValue = rand() % 10;
            base[i][j] = (randomValue < 7) ? 0 : 1;
        }
    }

    // Print the initial matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << base[i][j];
        }
        cout << endl;
    }

    int row, column;
    bool allZeros = false;

    do
    {
        cout << "Enter row (0, 1, or 2): ";
        cin >> row;
        cout << "Enter column (0, 1, or 2): ";
        cin >> column;

        // Input validation
        if (row >= 0 && row < 3 && column >= 0 && column < 3)
        {
            cout << "Setting base[" << row << "][" << column << "] to 0" << endl;
            base[row][column] = 0;

            // Check if all values are now 0
            allZeros = true;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (base[i][j] == 1)
                    {
                        allZeros = false;
                        break;
                    }
                }
                if (!allZeros)
                    break;
            }

            // Print the updated matrix
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "\t" << base[i][j];
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Invalid input. Please enter row and column values between 0 and 2." << endl;
        }
    } while (!allZeros);

    cout << "Congratulations! You've changed all 1s to 0s." << endl;

    return 0;
}
