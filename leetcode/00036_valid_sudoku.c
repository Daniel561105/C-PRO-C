//36

#include <stdio.h>
#include <stdbool.h>

// there should be a proper way to solve the loop problem instead of giving every situation
bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                if (board[i][j] == board[i][k] && board[i][j] != '.' && j != k) return 0;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                if (board[j][i] == board[k][i] && board[j][i] != '.' && j != k) return 0;
            }
        }
    }
    // first square
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // second square
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j < 6; j++) {
            for (int k = 0; k < 3; k++) {
                for (int l = 3; l < 6; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // third square
    for (int i = 0; i < 3; i++) {
        for (int j = 6; j < 9; j++) {
            for (int k = 0; k < 3; k++) {
                for (int l = 6; l < 9; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // fourth square
    for (int i = 3; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 3; k < 6; k++) {
                for (int l = 0; l < 3; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // fifth square
    for (int i = 3; i < 6; i++) {
        for (int j = 3; j < 6; j++) {
            for (int k = 3; k < 6; k++) {
                for (int l = 3; l < 6; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // sixth square
    for (int i = 3; i < 6; i++) {
        for (int j = 6; j < 9; j++) {
            for (int k = 3; k < 6; k++) {
                for (int l = 6; l < 9; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // seventh square
    for (int i = 6; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 6; k < 9; k++) {
                for (int l = 0; l < 3; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // eigth square
    for (int i = 6; i < 9; i++) {
        for (int j = 3; j < 6; j++) {
            for (int k = 6; k < 9; k++) {
                for (int l = 3; l < 6; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    // ninth square
    for (int i = 6; i < 9; i++) {
        for (int j = 6; j < 9; j++) {
            for (int k = 6; k < 9; k++) {
                for (int l = 6; l < 9; l++) {
                    if (board[i][j] == board[k][l] && board[i][j] != '.' 
                    && (i,j) != (k,l)) return 0;
                }
            }
        }
    }
    return 1;
}