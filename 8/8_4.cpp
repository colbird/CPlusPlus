#include <iostream>
using namespace std;

void readASolution(int grid[][9]);
bool isValid(const int grid[][9]);
bool isValid(int i, int j, const int grid[][9]);

int main(){
    // Read a Sudoku puzzle
    int grid[9][9];
    readASolution(grid);

    cout << (isValid(grid) ? "valid solution" : "Invalid solution");

    return 0;
}

// Read a Sudoku puzzle from the keyboard
void readASolution(int grid[][9]){
    cout << "Enter a Sudoku puzzle:" << endl;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> grid[i][j];
}

// Check whether the fixed cells are valid in the grid
bool isValid(const int grid[][9]){
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (grid[i][j] < 1 || grid[i][j] > 9 ||
            !isValid(i, j, grid))
                return false;
    
    return true;    // The fixed cells are valid
}

// Check whether grid[i][j] is valid in the grid
bool isValid(int i, int j, const int grid[][9]){
    // Check whether grid[i][j] is valid at the i's row
    for (int column = 0; column < 9; column++)
        if (column != j && grid[i][column] == grid[i][j])
            return false;

    // Check whether grid[i][j] is valid at the j's column
    for (int row = 0; row < 9; row++)
        if (row != i && grid[row][j] == grid[i][j])
            return false;

    // Check wheter grid[i][j] is vlaid in the 3-byj-3 box
    for (int row = (i / 3) * 3; row < (i / 3) * 3 + 3; row++)
        for (int col = (j / 3) * 3; col < (j / 3) * 3 + 3; col++)
            if (row != i && col != j && grid[row][col] == grid[i][j])
                return false;

    return true;
}
