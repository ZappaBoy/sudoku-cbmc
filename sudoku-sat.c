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

int all_values_setted() {
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

int value_allowed(int value) {
    return value >= 1 && value <= 9;
}

int row_value_allowed(int row, int value) {
    switch (row) {
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

int col_value_allowed(int col, int value) {
    switch (col) {
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

int square_value_allowed(int row, int col, int value) {

}

int solved() {
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
        if (x11 == 0) {
            x11 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x11), "x11 value is correct");
            __CPROVER_assume(row_value_allowed(1, x11), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x11), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x11), "square value allowed");
        }
        if (x12 == 0) {
            x12 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x12), "x12 value is correct");
            __CPROVER_assume(row_value_allowed(1, x12), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x12), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x12), "square value allowed");
        }
        if (x13 == 0) {
            x13 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x13), "x13 value is correct");
            __CPROVER_assume(row_value_allowed(1, x13), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x13), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x13), "square value allowed");
        }
        if (x14 == 0) {
            x14 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x14), "x14 value is correct");
            __CPROVER_assume(row_value_allowed(1, x14), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x14), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x14), "square value allowed");
        }
        if (x15 == 0) {
            x15 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x15), "x15 value is correct");
            __CPROVER_assume(row_value_allowed(1, x15), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x15), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x15), "square value allowed");
        }
        if (x16 == 0) {
            x16 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x16), "x16 value is correct");
            __CPROVER_assume(row_value_allowed(1, x16), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x16), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x16), "square value allowed");
        }
        if (x17 == 0) {
            x17 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x17), "x17 value is correct");
            __CPROVER_assume(row_value_allowed(1, x17), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x17), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x17), "square value allowed");
        }
        if (x18 == 0) {
            x18 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x18), "x18 value is correct");
            __CPROVER_assume(row_value_allowed(1, x18), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x18), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x18), "square value allowed");
        }
        if (x19 == 0) {
            x19 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x19), "x19 value is correct");
            __CPROVER_assume(row_value_allowed(1, x19), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x19), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x19), "square value allowed");
        }
        if (x21 == 0) {
            x21 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x21), "x21 value is correct");
            __CPROVER_assume(row_value_allowed(2, x21), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x21), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x21), "square value allowed");
        }
        if (x22 == 0) {
            x22 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x22), "x22 value is correct");
            __CPROVER_assume(row_value_allowed(2, x22), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x22), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x22), "square value allowed");
        }
        if (x23 == 0) {
            x23 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x23), "x23 value is correct");
            __CPROVER_assume(row_value_allowed(2, x23), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x23), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x23), "square value allowed");
        }
        if (x24 == 0) {
            x24 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x24), "x24 value is correct");
            __CPROVER_assume(row_value_allowed(2, x24), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x24), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x24), "square value allowed");
        }
        if (x25 == 0) {
            x25 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x25), "x25 value is correct");
            __CPROVER_assume(row_value_allowed(2, x25), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x25), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x25), "square value allowed");
        }
        if (x26 == 0) {
            x26 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x26), "x26 value is correct");
            __CPROVER_assume(row_value_allowed(2, x26), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x26), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x26), "square value allowed");
        }
        if (x27 == 0) {
            x27 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x27), "x27 value is correct");
            __CPROVER_assume(row_value_allowed(2, x27), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x27), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x27), "square value allowed");
        }
        if (x28 == 0) {
            x28 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x28), "x28 value is correct");
            __CPROVER_assume(row_value_allowed(2, x28), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x28), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x28), "square value allowed");
        }
        if (x29 == 0) {
            x29 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x29), "x29 value is correct");
            __CPROVER_assume(row_value_allowed(2, x29), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x29), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x29), "square value allowed");
        }
        if (x31 == 0) {
            x31 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x31), "x31 value is correct");
            __CPROVER_assume(row_value_allowed(3, x31), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x31), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x31), "square value allowed");
        }
        if (x32 == 0) {
            x32 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x32), "x32 value is correct");
            __CPROVER_assume(row_value_allowed(3, x32), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x32), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x32), "square value allowed");
        }
        if (x33 == 0) {
            x33 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x33), "x33 value is correct");
            __CPROVER_assume(row_value_allowed(3, x33), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x33), "col value allowed");
            __CPROVER_assume(square_value_allowed(1, x33), "square value allowed");
        }
        if (x34 == 0) {
            x34 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x34), "x34 value is correct");
            __CPROVER_assume(row_value_allowed(3, x34), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x34), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x34), "square value allowed");
        }
        if (x35 == 0) {
            x35 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x35), "x35 value is correct");
            __CPROVER_assume(row_value_allowed(3, x35), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x35), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x35), "square value allowed");
        }
        if (x36 == 0) {
            x36 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x36), "x36 value is correct");
            __CPROVER_assume(row_value_allowed(3, x36), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x36), "col value allowed");
            __CPROVER_assume(square_value_allowed(2, x36), "square value allowed");
        }
        if (x37 == 0) {
            x37 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x37), "x37 value is correct");
            __CPROVER_assume(row_value_allowed(3, x37), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x37), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x37), "square value allowed");
        }
        if (x38 == 0) {
            x38 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x38), "x38 value is correct");
            __CPROVER_assume(row_value_allowed(3, x38), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x38), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x38), "square value allowed");
        }
        if (x39 == 0) {
            x39 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x39), "x39 value is correct");
            __CPROVER_assume(row_value_allowed(3, x39), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x39), "col value allowed");
            __CPROVER_assume(square_value_allowed(3, x39), "square value allowed");
        }
        if (x41 == 0) {
            x41 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x41), "x41 value is correct");
            __CPROVER_assume(row_value_allowed(4, x41), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x41), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x41), "square value allowed");
        }
        if (x42 == 0) {
            x42 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x42), "x42 value is correct");
            __CPROVER_assume(row_value_allowed(4, x42), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x42), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x42), "square value allowed");
        }
        if (x43 == 0) {
            x43 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x43), "x43 value is correct");
            __CPROVER_assume(row_value_allowed(4, x43), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x43), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x43), "square value allowed");
        }
        if (x44 == 0) {
            x44 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x44), "x44 value is correct");
            __CPROVER_assume(row_value_allowed(4, x44), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x44), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x44), "square value allowed");
        }
        if (x45 == 0) {
            x45 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x45), "x45 value is correct");
            __CPROVER_assume(row_value_allowed(4, x45), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x45), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x45), "square value allowed");
        }
        if (x46 == 0) {
            x46 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x46), "x46 value is correct");
            __CPROVER_assume(row_value_allowed(4, x46), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x46), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x46), "square value allowed");
        }
        if (x47 == 0) {
            x47 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x47), "x47 value is correct");
            __CPROVER_assume(row_value_allowed(4, x47), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x47), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x47), "square value allowed");
        }
        if (x48 == 0) {
            x48 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x48), "x48 value is correct");
            __CPROVER_assume(row_value_allowed(4, x48), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x48), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x48), "square value allowed");
        }
        if (x49 == 0) {
            x49 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x49), "x49 value is correct");
            __CPROVER_assume(row_value_allowed(4, x49), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x49), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x49), "square value allowed");
        }
        if (x51 == 0) {
            x51 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x51), "x51 value is correct");
            __CPROVER_assume(row_value_allowed(5, x51), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x51), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x51), "square value allowed");
        }
        if (x52 == 0) {
            x52 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x52), "x52 value is correct");
            __CPROVER_assume(row_value_allowed(5, x52), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x52), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x52), "square value allowed");
        }
        if (x53 == 0) {
            x53 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x53), "x53 value is correct");
            __CPROVER_assume(row_value_allowed(5, x53), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x53), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x53), "square value allowed");
        }
        if (x54 == 0) {
            x54 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x54), "x54 value is correct");
            __CPROVER_assume(row_value_allowed(5, x54), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x54), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x54), "square value allowed");
        }
        if (x55 == 0) {
            x55 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x55), "x55 value is correct");
            __CPROVER_assume(row_value_allowed(5, x55), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x55), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x55), "square value allowed");
        }
        if (x56 == 0) {
            x56 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x56), "x56 value is correct");
            __CPROVER_assume(row_value_allowed(5, x56), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x56), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x56), "square value allowed");
        }
        if (x57 == 0) {
            x57 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x57), "x57 value is correct");
            __CPROVER_assume(row_value_allowed(5, x57), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x57), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x57), "square value allowed");
        }
        if (x58 == 0) {
            x58 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x58), "x58 value is correct");
            __CPROVER_assume(row_value_allowed(5, x58), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x58), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x58), "square value allowed");
        }
        if (x59 == 0) {
            x59 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x59), "x59 value is correct");
            __CPROVER_assume(row_value_allowed(5, x59), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x59), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x59), "square value allowed");
        }
        if (x61 == 0) {
            x61 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x61), "x61 value is correct");
            __CPROVER_assume(row_value_allowed(6, x61), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x61), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x61), "square value allowed");
        }
        if (x62 == 0) {
            x62 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x62), "x62 value is correct");
            __CPROVER_assume(row_value_allowed(6, x62), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x62), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x62), "square value allowed");
        }
        if (x63 == 0) {
            x63 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x63), "x63 value is correct");
            __CPROVER_assume(row_value_allowed(6, x63), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x63), "col value allowed");
            __CPROVER_assume(square_value_allowed(4, x63), "square value allowed");
        }
        if (x64 == 0) {
            x64 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x64), "x64 value is correct");
            __CPROVER_assume(row_value_allowed(6, x64), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x64), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x64), "square value allowed");
        }
        if (x65 == 0) {
            x65 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x65), "x65 value is correct");
            __CPROVER_assume(row_value_allowed(6, x65), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x65), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x65), "square value allowed");
        }
        if (x66 == 0) {
            x66 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x66), "x66 value is correct");
            __CPROVER_assume(row_value_allowed(6, x66), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x66), "col value allowed");
            __CPROVER_assume(square_value_allowed(5, x66), "square value allowed");
        }
        if (x67 == 0) {
            x67 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x67), "x67 value is correct");
            __CPROVER_assume(row_value_allowed(6, x67), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x67), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x67), "square value allowed");
        }
        if (x68 == 0) {
            x68 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x68), "x68 value is correct");
            __CPROVER_assume(row_value_allowed(6, x68), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x68), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x68), "square value allowed");
        }
        if (x69 == 0) {
            x69 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x69), "x69 value is correct");
            __CPROVER_assume(row_value_allowed(6, x69), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x69), "col value allowed");
            __CPROVER_assume(square_value_allowed(6, x69), "square value allowed");
        }
        if (x71 == 0) {
            x71 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x71), "x71 value is correct");
            __CPROVER_assume(row_value_allowed(7, x71), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x71), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x71), "square value allowed");
        }
        if (x72 == 0) {
            x72 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x72), "x72 value is correct");
            __CPROVER_assume(row_value_allowed(7, x72), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x72), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x72), "square value allowed");
        }
        if (x73 == 0) {
            x73 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x73), "x73 value is correct");
            __CPROVER_assume(row_value_allowed(7, x73), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x73), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x73), "square value allowed");
        }
        if (x74 == 0) {
            x74 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x74), "x74 value is correct");
            __CPROVER_assume(row_value_allowed(7, x74), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x74), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x74), "square value allowed");
        }
        if (x75 == 0) {
            x75 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x75), "x75 value is correct");
            __CPROVER_assume(row_value_allowed(7, x75), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x75), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x75), "square value allowed");
        }
        if (x76 == 0) {
            x76 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x76), "x76 value is correct");
            __CPROVER_assume(row_value_allowed(7, x76), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x76), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x76), "square value allowed");
        }
        if (x77 == 0) {
            x77 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x77), "x77 value is correct");
            __CPROVER_assume(row_value_allowed(7, x77), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x77), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x77), "square value allowed");
        }
        if (x78 == 0) {
            x78 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x78), "x78 value is correct");
            __CPROVER_assume(row_value_allowed(7, x78), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x78), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x78), "square value allowed");
        }
        if (x79 == 0) {
            x79 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x79), "x79 value is correct");
            __CPROVER_assume(row_value_allowed(7, x79), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x79), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x79), "square value allowed");
        }
        if (x81 == 0) {
            x81 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x81), "x81 value is correct");
            __CPROVER_assume(row_value_allowed(8, x81), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x81), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x81), "square value allowed");
        }
        if (x82 == 0) {
            x82 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x82), "x82 value is correct");
            __CPROVER_assume(row_value_allowed(8, x82), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x82), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x82), "square value allowed");
        }
        if (x83 == 0) {
            x83 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x83), "x83 value is correct");
            __CPROVER_assume(row_value_allowed(8, x83), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x83), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x83), "square value allowed");
        }
        if (x84 == 0) {
            x84 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x84), "x84 value is correct");
            __CPROVER_assume(row_value_allowed(8, x84), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x84), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x84), "square value allowed");
        }
        if (x85 == 0) {
            x85 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x85), "x85 value is correct");
            __CPROVER_assume(row_value_allowed(8, x85), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x85), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x85), "square value allowed");
        }
        if (x86 == 0) {
            x86 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x86), "x86 value is correct");
            __CPROVER_assume(row_value_allowed(8, x86), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x86), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x86), "square value allowed");
        }
        if (x87 == 0) {
            x87 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x87), "x87 value is correct");
            __CPROVER_assume(row_value_allowed(8, x87), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x87), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x87), "square value allowed");
        }
        if (x88 == 0) {
            x88 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x88), "x88 value is correct");
            __CPROVER_assume(row_value_allowed(8, x88), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x88), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x88), "square value allowed");
        }
        if (x89 == 0) {
            x89 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x89), "x89 value is correct");
            __CPROVER_assume(row_value_allowed(8, x89), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x89), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x89), "square value allowed");
        }
        if (x91 == 0) {
            x91 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x91), "x91 value is correct");
            __CPROVER_assume(row_value_allowed(9, x91), "row value allowed");
            __CPROVER_assume(col_value_allowed(1, x91), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x91), "square value allowed");
        }
        if (x92 == 0) {
            x92 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x92), "x92 value is correct");
            __CPROVER_assume(row_value_allowed(9, x92), "row value allowed");
            __CPROVER_assume(col_value_allowed(2, x92), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x92), "square value allowed");
        }
        if (x93 == 0) {
            x93 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x93), "x93 value is correct");
            __CPROVER_assume(row_value_allowed(9, x93), "row value allowed");
            __CPROVER_assume(col_value_allowed(3, x93), "col value allowed");
            __CPROVER_assume(square_value_allowed(7, x93), "square value allowed");
        }
        if (x94 == 0) {
            x94 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x94), "x94 value is correct");
            __CPROVER_assume(row_value_allowed(9, x94), "row value allowed");
            __CPROVER_assume(col_value_allowed(4, x94), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x94), "square value allowed");
        }
        if (x95 == 0) {
            x95 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x95), "x95 value is correct");
            __CPROVER_assume(row_value_allowed(9, x95), "row value allowed");
            __CPROVER_assume(col_value_allowed(5, x95), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x95), "square value allowed");
        }
        if (x96 == 0) {
            x96 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x96), "x96 value is correct");
            __CPROVER_assume(row_value_allowed(9, x96), "row value allowed");
            __CPROVER_assume(col_value_allowed(6, x96), "col value allowed");
            __CPROVER_assume(square_value_allowed(8, x96), "square value allowed");
        }
        if (x97 == 0) {
            x97 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x97), "x97 value is correct");
            __CPROVER_assume(row_value_allowed(9, x97), "row value allowed");
            __CPROVER_assume(col_value_allowed(7, x97), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x97), "square value allowed");
        }
        if (x98 == 0) {
            x98 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x98), "x98 value is correct");
            __CPROVER_assume(row_value_allowed(9, x98), "row value allowed");
            __CPROVER_assume(col_value_allowed(8, x98), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x98), "square value allowed");
        }
        if (x99 == 0) {
            x99 = CPROVER_nondet_ushortint();
            __CPROVER_assume(value_allowed(x99), "x99 value is correct");
            __CPROVER_assume(row_value_allowed(9, x99), "row value allowed");
            __CPROVER_assume(col_value_allowed(9, x99), "col value allowed");
            __CPROVER_assume(square_value_allowed(9, x99), "square value allowed");
        }

        // We can avoid this check
        __CPROVER_assert(!isSolved(), "Sudoku solved");
    }
}
