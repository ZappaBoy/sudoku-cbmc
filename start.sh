#/bin/bash

cbmc --unwind 10 sudoku_matrix.c --trace > matrix.out
python3 matrix_parse.py
