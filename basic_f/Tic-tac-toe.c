#include <stdio.h>

char chipan[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void print_board() {
    printf("status:\n");
    printf("| %c | %c | %c |\n",chipan[0][0],chipan[0][1],chipan[0][2]);
    printf("|---|---|---|\n");
    printf("| %c | %c | %c |\n",chipan[1][0],chipan[1][1],chipan[1][2]);
    printf("|---|---|---|\n");
    printf("| %c | %c | %c |\n",chipan[2][0],chipan[2][1],chipan[2][2]); 
}

// to get players choice
int playerchoice(char player_id) {
    int coordinate;

    printf("Player %c, choose your coordinate: ",player_id);
    scanf("%d",&coordinate); // got players choice
    if (coordinate < 1 || coordinate > 9) {
        printf("not in range\n");
        return 0;
    } // make sure it is on chipan

    int row = (coordinate - 1) / 3;
    int column = (coordinate - 1) % 3;
    if (chipan[row][column] == 'X' || chipan[row][column] == 'O') {
        printf("this coordinate is occupied! , choose again!!!\n");
        return 0;
    }
    chipan[row][column] = player_id;
    return 1;
}

// win or lose or draw
int game_result() {
    for (int i = 0;i < 3;i++) {
        if (chipan[i][0] == chipan[i][1] && chipan[i][1] == chipan[i][2]) {
            printf("win game");
            return 0;
        }   
    }
    for (int j = 0;j < 3;j++) {
        if (chipan[0][j] == chipan[1][j] && chipan[1][j] == chipan[2][j]) {
            printf("win game");
            return 0;
        }
    }
    if (chipan[0][0] == chipan[1][1] && chipan[1][1] == chipan[2][2]) {
        printf("win game");
        return 0;
    }
    if (chipan[0][2] == chipan[1][1] && chipan[1][1] == chipan[2][0]) {
        printf("win game");
        return 0;
    }
    if (   chipan[0][0] != '1' && chipan[0][1] != '2' && chipan[0][2] != '3' 
        && chipan[1][0] != '4' && chipan[1][1] != '5' && chipan[1][2] != '6' 
        && chipan[2][0] != '7' && chipan[2][1] != '8' && chipan[2][2] != '9' ) {
            printf("tie game");
            return 0;
        }

    return 1;
}

int main() {
    char current_player = 'X';
    print_board();
    
    // start game
    while (game_result()) {
        playerchoice(current_player);
        print_board();
        if (current_player == 'X') {
            current_player = 'O';
        }
        else if (current_player == 'O') {
            current_player = 'X';
        }
    }
    return 0; 
}
