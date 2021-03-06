#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char **argv)
{
    srand(static_cast<unsigned int>(time(0)));

    const int ROW = 5, COL = 5;
    int A[ROW][COL] = {{}};

    // Matrix filling
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            A[i][j] = static_cast<int>(rand() % 10);

    std::cout << "\nMatrix: \n\n";
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
            std::cout << A[i][j] << ' ';
        std::cout << '\n';
    }

    std::cout << "\nTask 1: \n\n";
    int sum = 0;
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            if ((i - 1) >= j)
            {
                std::cout << A[i][j] << ' ';
                sum += A[i][j];
            }
            else
            {
                std::cout << "* ";
            }
        }
        std::cout << '\n';
    }
    std::cout << "\nThe sum of the elements\nbelow the main diagonal: " << sum << '\n';

    return 0;
}