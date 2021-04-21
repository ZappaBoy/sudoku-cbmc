#include <stdio.h>
#define N 9
#define TRUE 1
#define FALSE 0

_Bool nondet_bool();
int nondet_int();
// Initial state definition
// We can use this variables to define initial sudoku values
int x11 = 0;
int x12 = 0;
int x13 = 0;
int x14 = 0;
int x15 = 0;
int x16 = 0;
int x17 = 0;
int x18 = 0;
int x19 = 0;

int x21 = 0;
int x22 = 0;
int x23 = 0;
int x24 = 0;
int x25 = 0;
int x26 = 0;
int x27 = 0;
int x28 = 0;
int x29 = 0;

int x31 = 0;
int x32 = 0;
int x33 = 0;
int x34 = 0;
int x35 = 0;
int x36 = 0;
int x37 = 0;
int x38 = 0;
int x39 = 0;

int x41 = 0;
int x42 = 0;
int x43 = 0;
int x44 = 0;
int x45 = 0;
int x46 = 0;
int x47 = 0;
int x48 = 0;
int x49 = 0;

int x51 = 0;
int x52 = 0;
int x53 = 0;
int x54 = 0;
int x55 = 0;
int x56 = 0;
int x57 = 0;
int x58 = 0;
int x59 = 0;

int x61 = 0;
int x62 = 0;
int x63 = 0;
int x64 = 0;
int x65 = 0;
int x66 = 0;
int x67 = 0;
int x68 = 0;
int x69 = 0;

int x71 = 0;
int x72 = 0;
int x73 = 0;
int x74 = 0;
int x75 = 0;
int x76 = 0;
int x77 = 0;
int x78 = 0;
int x79 = 0;

int x81 = 0;
int x82 = 0;
int x83 = 0;
int x84 = 0;
int x85 = 0;
int x86 = 0;
int x87 = 0;
int x88 = 0;
int x89 = 0;

int x91 = 0;
int x92 = 0;
int x93 = 0;
int x94 = 0;
int x95 = 0;
int x96 = 0;
int x97 = 0;
int x98 = 0;
int x99 = 0;

int all_values_setted(){
    return
        (x11 != 0) &&
        (x12 != 0) &&
        (x13 != 0) &&
        (x14 != 0) &&
        (x15 != 0) &&
        (x16 != 0) &&
        (x17 != 0) &&
        (x18 != 0) &&
        (x19 != 0) &&

        (x21 != 0) &&
        (x22 != 0) &&
        (x23 != 0) &&
        (x24 != 0) &&
        (x25 != 0) &&
        (x26 != 0) &&
        (x27 != 0) &&
        (x28 != 0) &&
        (x29 != 0) &&

        (x31 != 0) &&
        (x32 != 0) &&
        (x33 != 0) &&
        (x34 != 0) &&
        (x35 != 0) &&
        (x36 != 0) &&
        (x37 != 0) &&
        (x38 != 0) &&
        (x39 != 0) &&

        (x41 != 0) &&
        (x42 != 0) &&
        (x43 != 0) &&
        (x44 != 0) &&
        (x45 != 0) &&
        (x46 != 0) &&
        (x47 != 0) &&
        (x48 != 0) &&
        (x49 != 0) &&

        (x51 != 0) &&
        (x52 != 0) &&
        (x13 != 0) &&
        (x54 != 0) &&
        (x55 != 0) &&
        (x56 != 0) &&
        (x57 != 0) &&
        (x58 != 0) &&
        (x59 != 0) &&

        (x61 != 0) &&
        (x62 != 0) &&
        (x63 != 0) &&
        (x64 != 0) &&
        (x65 != 0) &&
        (x66 != 0) &&
        (x67 != 0) &&
        (x68 != 0) &&
        (x69 != 0) &&

        (x71 != 0) &&
        (x72 != 0) &&
        (x73 != 0) &&
        (x74 != 0) &&
        (x75 != 0) &&
        (x76 != 0) &&
        (x77 != 0) &&
        (x78 != 0) &&
        (x79 != 0) &&

        (x81 != 0) &&
        (x82 != 0) &&
        (x83 != 0) &&
        (x84 != 0) &&
        (x85 != 0) &&
        (x86 != 0) &&
        (x87 != 0) &&
        (x88 != 0) &&
        (x89 != 0) &&

        (x91 != 0) &&
        (x92 != 0) &&
        (x93 != 0) &&
        (x94 != 0) &&
        (x95 != 0) &&
        (x96 != 0) &&
        (x97 != 0) &&
        (x98 != 0) &&
        (x99 != 0);
}

int value_allowed(int value){
    return value >= 1 && value <=9;
}

int row_value_allowed(int row, int value){
    switch (row){
        case 1:
            return (value != x11 &&
                    value != x12 &&
                    value != x13 &&
                    value != x14 &&
                    value != x15 &&
                    value != x16 &&
                    value != x17 &&
                    value != x18 &&
                    value != x19);
        case 2:
            return (value != x21 &&
                    value != x22 &&
                    value != x23 &&
                    value != x24 &&
                    value != x25 &&
                    value != x26 &&
                    value != x27 &&
                    value != x28 &&
                    value != x29);
        case 3:
            return (value != x31 &&
                    value != x32 &&
                    value != x33 &&
                    value != x34 &&
                    value != x35 &&
                    value != x36 &&
                    value != x37 &&
                    value != x38 &&
                    value != x39);
        case 4:
            return (value != x41 &&
                    value != x42 &&
                    value != x43 &&
                    value != x44 &&
                    value != x45 &&
                    value != x46 &&
                    value != x47 &&
                    value != x48 &&
                    value != x49);
        case 5:
            return (value != x51 &&
                    value != x52 &&
                    value != x53 &&
                    value != x54 &&
                    value != x55 &&
                    value != x56 &&
                    value != x57 &&
                    value != x58 &&
                    value != x59);
        case 6:
            return (value != x61 &&
                    value != x62 &&
                    value != x63 &&
                    value != x64 &&
                    value != x65 &&
                    value != x66 &&
                    value != x67 &&
                    value != x68 &&
                    value != x69);
        case 7:
            return (value != x71 &&
                    value != x72 &&
                    value != x73 &&
                    value != x74 &&
                    value != x75 &&
                    value != x76 &&
                    value != x77 &&
                    value != x78 &&
                    value != x79);
        case 8:
            return (value != x81 &&
                    value != x82 &&
                    value != x83 &&
                    value != x84 &&
                    value != x85 &&
                    value != x86 &&
                    value != x87 &&
                    value != x88 &&
                    value != x89);
        case 9:
            return (value != x91 &&
                    value != x92 &&
                    value != x93 &&
                    value != x94 &&
                    value != x95 &&
                    value != x96 &&
                    value != x97 &&
                    value != x98 &&
                    value != x99);
        default:
            __CPROVER_assert(0, "No row specified");
            return FALSE;
    }
}

int col_value_allowed(int col, int value){
    switch (col){
        case 1:
            return (value != x11 &&
                    value != x21 &&
                    value != x31 &&
                    value != x41 &&
                    value != x51 &&
                    value != x61 &&
                    value != x71 &&
                    value != x81 &&
                    value != x91);
        case 2:
            return (value != x12 &&
                    value != x22 &&
                    value != x32 &&
                    value != x42 &&
                    value != x52 &&
                    value != x62 &&
                    value != x72 &&
                    value != x82 &&
                    value != x92);
        case 3:
            return (value != x13 &&
                    value != x23 &&
                    value != x33 &&
                    value != x43 &&
                    value != x53 &&
                    value != x63 &&
                    value != x73 &&
                    value != x83 &&
                    value != x93);
        case 4:
            return (value != x14 &&
                    value != x24 &&
                    value != x34 &&
                    value != x44 &&
                    value != x54 &&
                    value != x64 &&
                    value != x74 &&
                    value != x84 &&
                    value != x94);
        case 5:
            return (value != x15 &&
                    value != x25 &&
                    value != x35 &&
                    value != x45 &&
                    value != x55 &&
                    value != x65 &&
                    value != x75 &&
                    value != x85 &&
                    value != x95);
        case 6:
            return (value != x16 &&
                    value != x26 &&
                    value != x36 &&
                    value != x46 &&
                    value != x56 &&
                    value != x66 &&
                    value != x76 &&
                    value != x86 &&
                    value != x96);
        case 7:
            return (value != x17 &&
                    value != x27 &&
                    value != x37 &&
                    value != x47 &&
                    value != x57 &&
                    value != x67 &&
                    value != x77 &&
                    value != x87 &&
                    value != x97);
        case 8:
            return (value != x18 &&
                    value != x28 &&
                    value != x38 &&
                    value != x48 &&
                    value != x58 &&
                    value != x68 &&
                    value != x78 &&
                    value != x88 &&
                    value != x98);
        case 9:
            return (value != x19 &&
                    value != x29 &&
                    value != x39 &&
                    value != x49 &&
                    value != x59 &&
                    value != x69 &&
                    value != x79 &&
                    value != x89 &&
                    value != x99);
        default:
            __CPROVER_assert(0, "No col specified");
            return FALSE;
    }
}

int square_value_allowed(int row, int col, int value){

}

int solved(){
    return
        row_value_allowed(1, 0) &&
        row_value_allowed(2, 0) &&
        row_value_allowed(3, 0) &&
        row_value_allowed(4, 0) &&
        row_value_allowed(5, 0) &&
        row_value_allowed(6, 0) &&
        row_value_allowed(7, 0) &&
        row_value_allowed(8, 0) &&
        row_value_allowed(9, 0) &&

        col_value_allowed(1, 0) &&
        col_value_allowed(2, 0) &&
        col_value_allowed(3, 0) &&
        col_value_allowed(4, 0) &&
        col_value_allowed(5, 0) &&
        col_value_allowed(6, 0) &&
        col_value_allowed(7, 0) &&
        col_value_allowed(8, 0) &&
        col_value_allowed(9, 0) &&

        square_value_allowed(1, 1, 0) &&
        square_value_allowed(1, 4, 0) &&
        square_value_allowed(1, 7, 0) &&
        square_value_allowed(4, 1, 0) &&
        square_value_allowed(4, 4, 0) &&
        square_value_allowed(4, 7, 0) &&
        square_value_allowed(7, 1, 0) &&
        square_value_allowed(7, 4, 0) &&
        square_value_allowed(7, 7, 0);
}

int main() {

    while (TRUE) {

        if (x11 == 0 && nondet_bool()) {
            x11 = nondet_int();
            __CPROVER_assume(value_allowed(x11), "x11 value is correct");
            __CPROVER_assume(row_value_allowed(1, x11), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x11), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, 1, x11), "square value allowed");
        }

        if (x12 == 0 && nondet_bool()) {
            x12 = nondet_int();
            __CPROVER_assume(value_allowed(x12), "x12 value is correct");
            __CPROVER_assume(row_value_allowed(1, x12), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x12), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, 2, x12), "square value allowed");
        }

        // We can avoid this check
        if (all_values_setted()) {
            // Generate an error if sudoku is solved to access to the counter example
            __CPROVER_assert(!isSolved(), "Sudoku solved");
        }
    }
}
