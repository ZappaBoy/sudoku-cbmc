#define N 9
#define TRUE 1
#define FALSE 0

int is_row_win(int sudoku[N][N], int row_index_to_check) {
    int j, s;

    for (s = 1; s <= N; s++) {
        j = 0;
        while (j < N && sudoku[row_index_to_check][j] != s) {
            j++;
        }

        if (j >= N) {
            return FALSE;
        }
    }
    return TRUE;
}

int is_col_win(int sudoku[N][N], int col_index_to_check) {
    int i, s;

    for (s = 1; s <= N; s++) {
        i = 0;
        while (i < N && sudoku[i][col_index_to_check] != s) {
            i++;
        }

        if (i >= N) {
            return FALSE;
        }
    }
    return TRUE;
}

int is_square_win(int sudoku[N][N], int i_square_to_check, int j_square_to_check) {
    int i, j, s;

    for (s = 1; s <= N; s++) {
        i = 0;

        int found = FALSE;
        for (i = 0; i < 3; ++i) {
            for (j = 0; j < 3; ++j) {
                if (sudoku[i_square_to_check * 3 + i][j_square_to_check * 3 + j] == s) {
                    found = TRUE;
                }
            }
        }

        if (found == FALSE) {
            return FALSE;
        }
    }
    return TRUE;
}

int check_win(int sudoku[N][N]) {
    // check all row
    for (int i = 0; i < N; i++) {
        if (!is_row_win(sudoku, i)) {
            return FALSE;
        }
    }

    for (int j = 0; j < N; j++) {
        if (!is_col_win(sudoku, j)) {
            return FALSE;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (!is_square_win(sudoku, i, j)) {
                return FALSE;
            }
        }
    }

    return TRUE;
}

int main() {
    int sudoku[N][N] = {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9},
    };
    /*int sudoku[N][N] = {
            {8, 2, 1, 5, 4, 6, 3, 7, 9},
            {9, 6, 4, 8, 3, 7, 5, 2, 1},
            {5, 3, 7, 2, 1, 9, 6, 8, 4},
            {7, 1, 6, 4, 8, 2, 9, 5, 3},
            {3, 4, 9, 7, 5, 1, 8, 6, 2},
            {2, 8, 5, 6, 9, 3, 4, 1, 7},
            {1, 5, 8, 9, 7, 4, 2, 3, 6},
            {4, 7, 2, 3, 6, 5, 1, 9, 8},
            {6, 9, 3, 1, 2, 8, 7, 4, 5},
    };*/

    while (TRUE) {

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                int z = nondet_ushortint();
                __CPROVER_assume(z>=1 && z<=9);

                if (sudoku[i][j] == 0) {
                    sudoku[i][j] = z;
                }
            }
        }

        __CPROVER_assert(check_win(sudoku) == FALSE, "check win");
    }

}
