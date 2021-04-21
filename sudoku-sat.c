#include <stdio.h>
#define N 9
#define TRUE 1
#define FALSE 0

_Bool nondet_bool();
int nondet_int();
// Initial state definition
// We can use this variables to define initial sudoku values
/* int x11 = 0; */
/* int x12 = 0; */
/* int x13 = 0; */
/* int x14 = 0; */
/* int x15 = 0; */
/* int x16 = 0; */
/* int x17 = 0; */
/* int x18 = 0; */
/* int x19 = 0; */

/* int x21 = 0; */
/* int x22 = 0; */
/* int x23 = 0; */
/* int x24 = 0; */
/* int x25 = 0; */
/* int x26 = 0; */
/* int x27 = 0; */
/* int x28 = 0; */
/* int x29 = 0; */

/* int x31 = 0; */
/* int x32 = 0; */
/* int x33 = 0; */
/* int x34 = 0; */
/* int x35 = 0; */
/* int x36 = 0; */
/* int x37 = 0; */
/* int x38 = 0; */
/* int x39 = 0; */

/* int x41 = 0; */
/* int x42 = 0; */
/* int x43 = 0; */
/* int x44 = 0; */
/* int x45 = 0; */
/* int x46 = 0; */
/* int x47 = 0; */
/* int x48 = 0; */
/* int x49 = 0; */

/* int x51 = 0; */
/* int x52 = 0; */
/* int x53 = 0; */
/* int x54 = 0; */
/* int x55 = 0; */
/* int x56 = 0; */
/* int x57 = 0; */
/* int x58 = 0; */
/* int x59 = 0; */

/* int x61 = 0; */
/* int x62 = 0; */
/* int x63 = 0; */
/* int x64 = 0; */
/* int x65 = 0; */
/* int x66 = 0; */
/* int x67 = 0; */
/* int x68 = 0; */
/* int x69 = 0; */

/* int x71 = 0; */
/* int x72 = 0; */
/* int x73 = 0; */
/* int x74 = 0; */
/* int x75 = 0; */
/* int x76 = 0; */
/* int x77 = 0; */
/* int x78 = 0; */
/* int x79 = 0; */

/* int x81 = 0; */
/* int x82 = 0; */
/* int x83 = 0; */
/* int x84 = 0; */
/* int x85 = 0; */
/* int x86 = 0; */
/* int x87 = 0; */
/* int x88 = 0; */
/* int x89 = 0; */

/* int x91 = 0; */
/* int x92 = 0; */
/* int x93 = 0; */
/* int x94 = 0; */
/* int x95 = 0; */
/* int x96 = 0; */
/* int x97 = 0; */
/* int x98 = 0; */
/* int x99 = 0; */

int x11=5;
int x12=3;
int x13=0;
int x14=0;
int x15=7;
int x16=0;
int x17=0;
int x18=0;
int x19=0;
int x21=6;
int x22=0;
int x23=0;
int x24=1;
int x25=9;
int x26=5;
int x27=0;
int x28=0;
int x29=0;
int x31=0;
int x32=9;
int x33=8;
int x34=0;
int x35=0;
int x36=0;
int x37=0;
int x38=6;
int x39=0;
int x41=8;
int x42=0;
int x43=0;
int x44=0;
int x45=6;
int x46=0;
int x47=0;
int x48=0;
int x49=3;
int x51=4;
int x52=0;
int x53=0;
int x54=8;
int x55=0;
int x56=3;
int x57=0;
int x58=0;
int x59=1;
int x61=7;
int x62=0;
int x63=0;
int x64=0;
int x65=2;
int x66=0;
int x67=0;
int x68=0;
int x69=6;
int x71=0;
int x72=6;
int x73=0;
int x74=0;
int x75=0;
int x76=0;
int x77=2;
int x78=8;
int x79=0;
int x81=0;
int x82=0;
int x83=0;
int x84=4;
int x85=1;
int x86=9;
int x87=0;
int x88=0;
int x89=5;
int x91=0;
int x92=0;
int x93=0;
int x94=0;
int x95=8;
int x96=0;
int x97=0;
int x98=7;
int x99=9;

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

int square_value_allowed(int square, int value){
    switch (square){
        case 1:
            return (value != x11 &&
                    value != x12 &&
                    value != x13 &&
                    value != x21 &&
                    value != x22 &&
                    value != x23 &&
                    value != x31 &&
                    value != x32 &&
                    value != x33);
        case 2:
            return (value != x14 &&
                    value != x15 &&
                    value != x16 &&
                    value != x24 &&
                    value != x25 &&
                    value != x26 &&
                    value != x34 &&
                    value != x35 &&
                    value != x36);
        case 3:
            return (value != x17 &&
                    value != x18 &&
                    value != x19 &&
                    value != x27 &&
                    value != x28 &&
                    value != x29 &&
                    value != x37 &&
                    value != x38 &&
                    value != x39);
        case 4:
            return (value != x41 &&
                    value != x42 &&
                    value != x43 &&
                    value != x51 &&
                    value != x52 &&
                    value != x53 &&
                    value != x61 &&
                    value != x62 &&
                    value != x63);
        case 5:
            return (value != x44 &&
                    value != x45 &&
                    value != x46 &&
                    value != x54 &&
                    value != x55 &&
                    value != x56 &&
                    value != x64 &&
                    value != x65 &&
                    value != x66);
        case 6:
            return (value != x47 &&
                    value != x48 &&
                    value != x49 &&
                    value != x57 &&
                    value != x58 &&
                    value != x59 &&
                    value != x67 &&
                    value != x68 &&
                    value != x69);
        case 7:
            return (value != x71 &&
                    value != x72 &&
                    value != x73 &&
                    value != x81 &&
                    value != x82 &&
                    value != x83 &&
                    value != x91 &&
                    value != x92 &&
                    value != x93);
        case 8:
            return (value != x74 &&
                    value != x75 &&
                    value != x76 &&
                    value != x84 &&
                    value != x85 &&
                    value != x86 &&
                    value != x94 &&
                    value != x95 &&
                    value != x96);
        case 9:
            return (value != x77 &&
                    value != x78 &&
                    value != x79 &&
                    value != x87 &&
                    value != x88 &&
                    value != x89 &&
                    value != x97 &&
                    value != x98 &&
                    value != x99);
        default:
            __CPROVER_assert(0, "No col specified");
            return FALSE;
    }
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

        square_value_allowed(1, 0) &&
        square_value_allowed(2, 0) &&
        square_value_allowed(3, 0) &&
        square_value_allowed(4, 0) &&
        square_value_allowed(5, 0) &&
        square_value_allowed(6, 0) &&
        square_value_allowed(7, 0) &&
        square_value_allowed(8, 0) &&
        square_value_allowed(9, 0);
}

int main() {

    while (TRUE) {

        if (x11 == 0) {
            x11 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x11));
            __CPROVER_assume(row_value_allowed(1, x11));
            __CPROVER_assume(col_value_allowed(1, x11));
            __CPROVER_assume(square_value_allowed(1, x11));
        }
        if (x12 == 0) {
            x12 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x12));
            __CPROVER_assume(row_value_allowed(1, x12));
            __CPROVER_assume(col_value_allowed(2, x12));
            __CPROVER_assume(square_value_allowed(1, x12));
        }
        if (x13 == 0) {
            x13 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x13));
            __CPROVER_assume(row_value_allowed(1, x13));
            __CPROVER_assume(col_value_allowed(3, x13));
            __CPROVER_assume(square_value_allowed(1, x13));
        }
        if (x14 == 0) {
            x14 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x14));
            __CPROVER_assume(row_value_allowed(1, x14));
            __CPROVER_assume(col_value_allowed(4, x14));
            __CPROVER_assume(square_value_allowed(2, x14));
        }
        if (x15 == 0) {
            x15 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x15));
            __CPROVER_assume(row_value_allowed(1, x15));
            __CPROVER_assume(col_value_allowed(5, x15));
            __CPROVER_assume(square_value_allowed(2, x15));
        }
        if (x16 == 0) {
            x16 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x16));
            __CPROVER_assume(row_value_allowed(1, x16));
            __CPROVER_assume(col_value_allowed(6, x16));
            __CPROVER_assume(square_value_allowed(2, x16));
        }
        if (x17 == 0) {
            x17 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x17));
            __CPROVER_assume(row_value_allowed(1, x17));
            __CPROVER_assume(col_value_allowed(7, x17));
            __CPROVER_assume(square_value_allowed(3, x17));
        }
        if (x18 == 0) {
            x18 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x18));
            __CPROVER_assume(row_value_allowed(1, x18));
            __CPROVER_assume(col_value_allowed(8, x18));
            __CPROVER_assume(square_value_allowed(3, x18));
        }
        if (x19 == 0) {
            x19 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x19));
            __CPROVER_assume(row_value_allowed(1, x19));
            __CPROVER_assume(col_value_allowed(9, x19));
            __CPROVER_assume(square_value_allowed(3, x19));
        }
        if (x21 == 0) {
            x21 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x21));
            __CPROVER_assume(row_value_allowed(2, x21));
            __CPROVER_assume(col_value_allowed(1, x21));
            __CPROVER_assume(square_value_allowed(1, x21));
        }
        if (x22 == 0) {
            x22 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x22));
            __CPROVER_assume(row_value_allowed(2, x22));
            __CPROVER_assume(col_value_allowed(2, x22));
            __CPROVER_assume(square_value_allowed(1, x22));
        }
        if (x23 == 0) {
            x23 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x23));
            __CPROVER_assume(row_value_allowed(2, x23));
            __CPROVER_assume(col_value_allowed(3, x23));
            __CPROVER_assume(square_value_allowed(1, x23));
        }
        if (x24 == 0) {
            x24 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x24));
            __CPROVER_assume(row_value_allowed(2, x24));
            __CPROVER_assume(col_value_allowed(4, x24));
            __CPROVER_assume(square_value_allowed(2, x24));
        }
        if (x25 == 0) {
            x25 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x25));
            __CPROVER_assume(row_value_allowed(2, x25));
            __CPROVER_assume(col_value_allowed(5, x25));
            __CPROVER_assume(square_value_allowed(2, x25));
        }
        if (x26 == 0) {
            x26 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x26));
            __CPROVER_assume(row_value_allowed(2, x26));
            __CPROVER_assume(col_value_allowed(6, x26));
            __CPROVER_assume(square_value_allowed(2, x26));
        }
        if (x27 == 0) {
            x27 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x27));
            __CPROVER_assume(row_value_allowed(2, x27));
            __CPROVER_assume(col_value_allowed(7, x27));
            __CPROVER_assume(square_value_allowed(3, x27));
        }
        if (x28 == 0) {
            x28 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x28));
            __CPROVER_assume(row_value_allowed(2, x28));
            __CPROVER_assume(col_value_allowed(8, x28));
            __CPROVER_assume(square_value_allowed(3, x28));
        }
        if (x29 == 0) {
            x29 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x29));
            __CPROVER_assume(row_value_allowed(2, x29));
            __CPROVER_assume(col_value_allowed(9, x29));
            __CPROVER_assume(square_value_allowed(3, x29));
        }
        if (x31 == 0) {
            x31 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x31));
            __CPROVER_assume(row_value_allowed(3, x31));
            __CPROVER_assume(col_value_allowed(1, x31));
            __CPROVER_assume(square_value_allowed(1, x31));
        }
        if (x32 == 0) {
            x32 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x32));
            __CPROVER_assume(row_value_allowed(3, x32));
            __CPROVER_assume(col_value_allowed(2, x32));
            __CPROVER_assume(square_value_allowed(1, x32));
        }
        if (x33 == 0) {
            x33 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x33));
            __CPROVER_assume(row_value_allowed(3, x33));
            __CPROVER_assume(col_value_allowed(3, x33));
            __CPROVER_assume(square_value_allowed(1, x33));
        }
        if (x34 == 0) {
            x34 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x34));
            __CPROVER_assume(row_value_allowed(3, x34));
            __CPROVER_assume(col_value_allowed(4, x34));
            __CPROVER_assume(square_value_allowed(2, x34));
        }
        if (x35 == 0) {
            x35 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x35));
            __CPROVER_assume(row_value_allowed(3, x35));
            __CPROVER_assume(col_value_allowed(5, x35));
            __CPROVER_assume(square_value_allowed(2, x35));
        }
        if (x36 == 0) {
            x36 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x36));
            __CPROVER_assume(row_value_allowed(3, x36));
            __CPROVER_assume(col_value_allowed(6, x36));
            __CPROVER_assume(square_value_allowed(2, x36));
        }
        if (x37 == 0) {
            x37 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x37));
            __CPROVER_assume(row_value_allowed(3, x37));
            __CPROVER_assume(col_value_allowed(7, x37));
            __CPROVER_assume(square_value_allowed(3, x37));
        }
        if (x38 == 0) {
            x38 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x38));
            __CPROVER_assume(row_value_allowed(3, x38));
            __CPROVER_assume(col_value_allowed(8, x38));
            __CPROVER_assume(square_value_allowed(3, x38));
        }
        if (x39 == 0) {
            x39 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x39));
            __CPROVER_assume(row_value_allowed(3, x39));
            __CPROVER_assume(col_value_allowed(9, x39));
            __CPROVER_assume(square_value_allowed(3, x39));
        }
        if (x41 == 0) {
            x41 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x41));
            __CPROVER_assume(row_value_allowed(4, x41));
            __CPROVER_assume(col_value_allowed(1, x41));
            __CPROVER_assume(square_value_allowed(4, x41));
        }
        if (x42 == 0) {
            x42 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x42));
            __CPROVER_assume(row_value_allowed(4, x42));
            __CPROVER_assume(col_value_allowed(2, x42));
            __CPROVER_assume(square_value_allowed(4, x42));
        }
        if (x43 == 0) {
            x43 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x43));
            __CPROVER_assume(row_value_allowed(4, x43));
            __CPROVER_assume(col_value_allowed(3, x43));
            __CPROVER_assume(square_value_allowed(4, x43));
        }
        if (x44 == 0) {
            x44 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x44));
            __CPROVER_assume(row_value_allowed(4, x44));
            __CPROVER_assume(col_value_allowed(4, x44));
            __CPROVER_assume(square_value_allowed(5, x44));
        }
        if (x45 == 0) {
            x45 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x45));
            __CPROVER_assume(row_value_allowed(4, x45));
            __CPROVER_assume(col_value_allowed(5, x45));
            __CPROVER_assume(square_value_allowed(5, x45));
        }
        if (x46 == 0) {
            x46 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x46));
            __CPROVER_assume(row_value_allowed(4, x46));
            __CPROVER_assume(col_value_allowed(6, x46));
            __CPROVER_assume(square_value_allowed(5, x46));
        }
        if (x47 == 0) {
            x47 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x47));
            __CPROVER_assume(row_value_allowed(4, x47));
            __CPROVER_assume(col_value_allowed(7, x47));
            __CPROVER_assume(square_value_allowed(6, x47));
        }
        if (x48 == 0) {
            x48 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x48));
            __CPROVER_assume(row_value_allowed(4, x48));
            __CPROVER_assume(col_value_allowed(8, x48));
            __CPROVER_assume(square_value_allowed(6, x48));
        }
        if (x49 == 0) {
            x49 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x49));
            __CPROVER_assume(row_value_allowed(4, x49));
            __CPROVER_assume(col_value_allowed(9, x49));
            __CPROVER_assume(square_value_allowed(6, x49));
        }
        if (x51 == 0) {
            x51 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x51));
            __CPROVER_assume(row_value_allowed(5, x51));
            __CPROVER_assume(col_value_allowed(1, x51));
            __CPROVER_assume(square_value_allowed(4, x51));
        }
        if (x52 == 0) {
            x52 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x52));
            __CPROVER_assume(row_value_allowed(5, x52));
            __CPROVER_assume(col_value_allowed(2, x52));
            __CPROVER_assume(square_value_allowed(4, x52));
        }
        if (x53 == 0) {
            x53 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x53));
            __CPROVER_assume(row_value_allowed(5, x53));
            __CPROVER_assume(col_value_allowed(3, x53));
            __CPROVER_assume(square_value_allowed(4, x53));
        }
        if (x54 == 0) {
            x54 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x54));
            __CPROVER_assume(row_value_allowed(5, x54));
            __CPROVER_assume(col_value_allowed(4, x54));
            __CPROVER_assume(square_value_allowed(5, x54));
        }
        if (x55 == 0) {
            x55 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x55));
            __CPROVER_assume(row_value_allowed(5, x55));
            __CPROVER_assume(col_value_allowed(5, x55));
            __CPROVER_assume(square_value_allowed(5, x55));
        }
        if (x56 == 0) {
            x56 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x56));
            __CPROVER_assume(row_value_allowed(5, x56));
            __CPROVER_assume(col_value_allowed(6, x56));
            __CPROVER_assume(square_value_allowed(5, x56));
        }
        if (x57 == 0) {
            x57 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x57));
            __CPROVER_assume(row_value_allowed(5, x57));
            __CPROVER_assume(col_value_allowed(7, x57));
            __CPROVER_assume(square_value_allowed(6, x57));
        }
        if (x58 == 0) {
            x58 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x58));
            __CPROVER_assume(row_value_allowed(5, x58));
            __CPROVER_assume(col_value_allowed(8, x58));
            __CPROVER_assume(square_value_allowed(6, x58));
        }
        if (x59 == 0) {
            x59 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x59));
            __CPROVER_assume(row_value_allowed(5, x59));
            __CPROVER_assume(col_value_allowed(9, x59));
            __CPROVER_assume(square_value_allowed(6, x59));
        }
        if (x61 == 0) {
            x61 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x61));
            __CPROVER_assume(row_value_allowed(6, x61));
            __CPROVER_assume(col_value_allowed(1, x61));
            __CPROVER_assume(square_value_allowed(4, x61));
        }
        if (x62 == 0) {
            x62 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x62));
            __CPROVER_assume(row_value_allowed(6, x62));
            __CPROVER_assume(col_value_allowed(2, x62));
            __CPROVER_assume(square_value_allowed(4, x62));
        }
        if (x63 == 0) {
            x63 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x63));
            __CPROVER_assume(row_value_allowed(6, x63));
            __CPROVER_assume(col_value_allowed(3, x63));
            __CPROVER_assume(square_value_allowed(4, x63));
        }
        if (x64 == 0) {
            x64 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x64));
            __CPROVER_assume(row_value_allowed(6, x64));
            __CPROVER_assume(col_value_allowed(4, x64));
            __CPROVER_assume(square_value_allowed(5, x64));
        }
        if (x65 == 0) {
            x65 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x65));
            __CPROVER_assume(row_value_allowed(6, x65));
            __CPROVER_assume(col_value_allowed(5, x65));
            __CPROVER_assume(square_value_allowed(5, x65));
        }
        if (x66 == 0) {
            x66 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x66));
            __CPROVER_assume(row_value_allowed(6, x66));
            __CPROVER_assume(col_value_allowed(6, x66));
            __CPROVER_assume(square_value_allowed(5, x66));
        }
        if (x67 == 0) {
            x67 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x67));
            __CPROVER_assume(row_value_allowed(6, x67));
            __CPROVER_assume(col_value_allowed(7, x67));
            __CPROVER_assume(square_value_allowed(6, x67));
        }
        if (x68 == 0) {
            x68 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x68));
            __CPROVER_assume(row_value_allowed(6, x68));
            __CPROVER_assume(col_value_allowed(8, x68));
            __CPROVER_assume(square_value_allowed(6, x68));
        }
        if (x69 == 0) {
            x69 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x69));
            __CPROVER_assume(row_value_allowed(6, x69));
            __CPROVER_assume(col_value_allowed(9, x69));
            __CPROVER_assume(square_value_allowed(6, x69));
        }
        if (x71 == 0) {
            x71 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x71));
            __CPROVER_assume(row_value_allowed(7, x71));
            __CPROVER_assume(col_value_allowed(1, x71));
            __CPROVER_assume(square_value_allowed(7, x71));
        }
        if (x72 == 0) {
            x72 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x72));
            __CPROVER_assume(row_value_allowed(7, x72));
            __CPROVER_assume(col_value_allowed(2, x72));
            __CPROVER_assume(square_value_allowed(7, x72));
        }
        if (x73 == 0) {
            x73 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x73));
            __CPROVER_assume(row_value_allowed(7, x73));
            __CPROVER_assume(col_value_allowed(3, x73));
            __CPROVER_assume(square_value_allowed(7, x73));
        }
        if (x74 == 0) {
            x74 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x74));
            __CPROVER_assume(row_value_allowed(7, x74));
            __CPROVER_assume(col_value_allowed(4, x74));
            __CPROVER_assume(square_value_allowed(8, x74));
        }
        if (x75 == 0) {
            x75 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x75));
            __CPROVER_assume(row_value_allowed(7, x75));
            __CPROVER_assume(col_value_allowed(5, x75));
            __CPROVER_assume(square_value_allowed(8, x75));
        }
        if (x76 == 0) {
            x76 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x76));
            __CPROVER_assume(row_value_allowed(7, x76));
            __CPROVER_assume(col_value_allowed(6, x76));
            __CPROVER_assume(square_value_allowed(8, x76));
        }
        if (x77 == 0) {
            x77 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x77));
            __CPROVER_assume(row_value_allowed(7, x77));
            __CPROVER_assume(col_value_allowed(7, x77));
            __CPROVER_assume(square_value_allowed(9, x77));
        }
        if (x78 == 0) {
            x78 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x78));
            __CPROVER_assume(row_value_allowed(7, x78));
            __CPROVER_assume(col_value_allowed(8, x78));
            __CPROVER_assume(square_value_allowed(9, x78));
        }
        if (x79 == 0) {
            x79 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x79));
            __CPROVER_assume(row_value_allowed(7, x79));
            __CPROVER_assume(col_value_allowed(9, x79));
            __CPROVER_assume(square_value_allowed(9, x79));
        }
        if (x81 == 0) {
            x81 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x81));
            __CPROVER_assume(row_value_allowed(8, x81));
            __CPROVER_assume(col_value_allowed(1, x81));
            __CPROVER_assume(square_value_allowed(7, x81));
        }
        if (x82 == 0) {
            x82 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x82));
            __CPROVER_assume(row_value_allowed(8, x82));
            __CPROVER_assume(col_value_allowed(2, x82));
            __CPROVER_assume(square_value_allowed(7, x82));
        }
        if (x83 == 0) {
            x83 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x83));
            __CPROVER_assume(row_value_allowed(8, x83));
            __CPROVER_assume(col_value_allowed(3, x83));
            __CPROVER_assume(square_value_allowed(7, x83));
        }
        if (x84 == 0) {
            x84 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x84));
            __CPROVER_assume(row_value_allowed(8, x84));
            __CPROVER_assume(col_value_allowed(4, x84));
            __CPROVER_assume(square_value_allowed(8, x84));
        }
        if (x85 == 0) {
            x85 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x85));
            __CPROVER_assume(row_value_allowed(8, x85));
            __CPROVER_assume(col_value_allowed(5, x85));
            __CPROVER_assume(square_value_allowed(8, x85));
        }
        if (x86 == 0) {
            x86 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x86));
            __CPROVER_assume(row_value_allowed(8, x86));
            __CPROVER_assume(col_value_allowed(6, x86));
            __CPROVER_assume(square_value_allowed(8, x86));
        }
        if (x87 == 0) {
            x87 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x87));
            __CPROVER_assume(row_value_allowed(8, x87));
            __CPROVER_assume(col_value_allowed(7, x87));
            __CPROVER_assume(square_value_allowed(9, x87));
        }
        if (x88 == 0) {
            x88 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x88));
            __CPROVER_assume(row_value_allowed(8, x88));
            __CPROVER_assume(col_value_allowed(8, x88));
            __CPROVER_assume(square_value_allowed(9, x88));
        }
        if (x89 == 0) {
            x89 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x89));
            __CPROVER_assume(row_value_allowed(8, x89));
            __CPROVER_assume(col_value_allowed(9, x89));
            __CPROVER_assume(square_value_allowed(9, x89));
        }
        if (x91 == 0) {
            x91 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x91));
            __CPROVER_assume(row_value_allowed(9, x91));
            __CPROVER_assume(col_value_allowed(1, x91));
            __CPROVER_assume(square_value_allowed(7, x91));
        }
        if (x92 == 0) {
            x92 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x92));
            __CPROVER_assume(row_value_allowed(9, x92));
            __CPROVER_assume(col_value_allowed(2, x92));
            __CPROVER_assume(square_value_allowed(7, x92));
        }
        if (x93 == 0) {
            x93 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x93));
            __CPROVER_assume(row_value_allowed(9, x93));
            __CPROVER_assume(col_value_allowed(3, x93));
            __CPROVER_assume(square_value_allowed(7, x93));
        }
        if (x94 == 0) {
            x94 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x94));
            __CPROVER_assume(row_value_allowed(9, x94));
            __CPROVER_assume(col_value_allowed(4, x94));
            __CPROVER_assume(square_value_allowed(8, x94));
        }
        if (x95 == 0) {
            x95 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x95));
            __CPROVER_assume(row_value_allowed(9, x95));
            __CPROVER_assume(col_value_allowed(5, x95));
            __CPROVER_assume(square_value_allowed(8, x95));
        }
        if (x96 == 0) {
            x96 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x96));
            __CPROVER_assume(row_value_allowed(9, x96));
            __CPROVER_assume(col_value_allowed(6, x96));
            __CPROVER_assume(square_value_allowed(8, x96));
        }
        if (x97 == 0) {
            x97 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x97));
            __CPROVER_assume(row_value_allowed(9, x97));
            __CPROVER_assume(col_value_allowed(7, x97));
            __CPROVER_assume(square_value_allowed(9, x97));
        }
        if (x98 == 0) {
            x98 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x98));
            __CPROVER_assume(row_value_allowed(9, x98));
            __CPROVER_assume(col_value_allowed(8, x98));
            __CPROVER_assume(square_value_allowed(9, x98));
        }
        if (x99 == 0) {
            x99 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x99));
            __CPROVER_assume(row_value_allowed(9, x99));
            __CPROVER_assume(col_value_allowed(9, x99));
            __CPROVER_assume(square_value_allowed(9, x99));
        }
    }
}
