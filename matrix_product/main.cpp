
#include <stdio.h>
#include <array>
#include <iostream>

int main()
{
    int aMatrix[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int bMatrix[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int product[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            for (int temp = 0; temp < 2; temp++)
            {
                product[row][col] += aMatrix[row][temp] * bMatrix[temp][col];
                /* code */
            }

            if (row == 0 && col == 0)
            {
                std::cout << "Product:\n";
                std::cout << product[row][col] << " ";
            }
            else
            {
                std::cout << product[row][col] << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}