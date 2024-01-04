#include <stdio.h>

// #define ROWS 5
// #define COLS 5

// int star = 0;

// int countFood(char grid[ROWS][COLS], int row, int col) {
//     // Check if the current position is out of bounds or if it's a wall
//     if (row < 0 || row >= ROWS || col < 0 || col >= COLS || grid[row][col] == '#') {
//         return 0;
//     }
//     // Check if the current position has food
//     if (grid[row][col] == 'P') {
//         // Mark the food as visited by replacing '*' with '.'
//         grid[row][col] = '#';
//         // Explore in all four directions recursively
//         int up = countFood(grid, row - 1, col);
//         int down = countFood(grid, row + 1, col);
//         int left = countFood(grid, row, col - 1);
//         int right = countFood(grid, row, col + 1);
//         // Return the total count including the current food
//         return 0 + up + down + left + right;
//     } 
//     else if (grid[row][col] == '*') {
//         // Mark the food as visited by replacing '*' with '.'
//         grid[row][col] = '#';
//         // Explore in all four directions recursively
//         int up = countFood(grid, row - 1, col);
//         int down = countFood(grid, row + 1, col);
//         int left = countFood(grid, row, col - 1);
//         int right = countFood(grid, row, col + 1);
//         star++;
//         // Return the total count including the current food
//         return 0 + up + down + left + right;
//     }
//     else if (grid[row][col] == '.'){
//         grid[row][col] = '#';
//         int up = countFood(grid, row - 1, col);
//         int down = countFood(grid, row + 1, col);
//         int left = countFood(grid, row, col - 1);
//         int right = countFood(grid, row, col + 1);
//         // Return the total count including the current food
//         return 0 + up + down + left + right;
//     }
//     else {
//         return 0;
//     }
// }

// int main() {
//     // Example grid
//     char grid[ROWS][COLS] = {
//         "#####",
//         "#P..#",
//         "###.#",
//         "#*.*#",
//         "#####"
//     };

//     // Find Pacmon's starting position
//     int pacmonRow, pacmonCol;
//     for (int i = 0; i < ROWS; ++i) {
//         for (int j = 0; j < COLS; ++j) {
//             if (grid[i][j] == 'P') {
//                 pacmonRow = i;
//                 pacmonCol = j;
//                 break;
//             }
//         }
//     }

//     // Count the number of food Pacmon can eat
//     int foodCount = countFood(grid, pacmonRow, pacmonCol);

//     printf("Pacmon can eat %d food items.\n", star);

//     return 0;
// }
