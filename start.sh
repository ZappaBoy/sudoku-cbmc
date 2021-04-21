#/bin/bash

cbmc --unwind 10 sudoku-sat.c --trace > sat.out
python3 sat_parser.py

cbmc --unwind 10 sudoku-matrix.c --trace > matrix.out
python3 matrix_parser.py
