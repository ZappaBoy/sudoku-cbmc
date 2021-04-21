#include <stdio.h>
#define N 9
#define TRUE 1
#define FALSE 0

_Bool nondet_bool();
unsigned short int nondet_ushortint();

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

/* int all_values_setted(){ */
/*     return */
/*             (x11 != 0) && */
/*             (x12 != 0) && */
/*             (x13 != 0) && */
/*             (x14 != 0) && */
/*             (x15 != 0) && */
/*             (x16 != 0) && */
/*             (x17 != 0) && */
/*             (x18 != 0) && */
/*             (x19 != 0) && */

/*             (x21 != 0) && */
/*             (x22 != 0) && */
/*             (x23 != 0) && */
/*             (x24 != 0) && */
/*             (x25 != 0) && */
/*             (x26 != 0) && */
/*             (x27 != 0) && */
/*             (x28 != 0) && */
/*             (x29 != 0) && */

/*             (x31 != 0) && */
/*             (x32 != 0) && */
/*             (x33 != 0) && */
/*             (x34 != 0) && */
/*             (x35 != 0) && */
/*             (x36 != 0) && */
/*             (x37 != 0) && */
/*             (x38 != 0) && */
/*             (x39 != 0) && */

/*             (x41 != 0) && */
/*             (x42 != 0) && */
/*             (x43 != 0) && */
/*             (x44 != 0) && */
/*             (x45 != 0) && */
/*             (x46 != 0) && */
/*             (x47 != 0) && */
/*             (x48 != 0) && */
/*             (x49 != 0) && */

/*             (x51 != 0) && */
/*             (x52 != 0) && */
/*             (x13 != 0) && */
/*             (x54 != 0) && */
/*             (x55 != 0) && */
/*             (x56 != 0) && */
/*             (x57 != 0) && */
/*             (x58 != 0) && */
/*             (x59 != 0) && */

/*             (x61 != 0) && */
/*             (x62 != 0) && */
/*             (x63 != 0) && */
/*             (x64 != 0) && */
/*             (x65 != 0) && */
/*             (x66 != 0) && */
/*             (x67 != 0) && */
/*             (x68 != 0) && */
/*             (x69 != 0) && */

/*             (x71 != 0) && */
/*             (x72 != 0) && */
/*             (x73 != 0) && */
/*             (x74 != 0) && */
/*             (x75 != 0) && */
/*             (x76 != 0) && */
/*             (x77 != 0) && */
/*             (x78 != 0) && */
/*             (x79 != 0) && */

/*             (x81 != 0) && */
/*             (x82 != 0) && */
/*             (x83 != 0) && */
/*             (x84 != 0) && */
/*             (x85 != 0) && */
/*             (x86 != 0) && */
/*             (x87 != 0) && */
/*             (x88 != 0) && */
/*             (x89 != 0) && */

/*             (x91 != 0) && */
/*             (x92 != 0) && */
/*             (x93 != 0) && */
/*             (x94 != 0) && */
/*             (x95 != 0) && */
/*             (x96 != 0) && */
/*             (x97 != 0) && */
/*             (x98 != 0) && */
/*             (x99 != 0); */
/* } */

int value_allowed(int value){
    return value >= 1 && value <=9;
}

int rows_win() {
    for (int s = 1; s <= N; s++){
        if ( !(x11 == s || x12 == s || x13 ==s || x14 ==s || x15 ==s || x16 == s || x17 ==s || x18 ==s || x19 == s) ) {
            return FALSE;
        }
        if ( !(x21 == s || x22 == s || x23 ==s || x24 ==s || x25 ==s || x26 == s || x27 ==s || x28 ==s || x29 == s) ) {
            return FALSE;
        }
        if ( !(x31 == s || x32 == s || x33 ==s || x34 ==s || x35 ==s || x36 == s || x37 ==s || x38 ==s || x39 == s) ) {
            return FALSE;
        }
        if ( !(x41 == s || x42 == s || x43 ==s || x44 ==s || x45 ==s || x46 == s || x47 ==s || x48 ==s || x49 == s) ) {
            return FALSE;
        }
        if ( !(x51 == s || x52 == s || x53 ==s || x54 ==s || x55 ==s || x56 == s || x57 ==s || x58 ==s || x59 == s) ){
            return FALSE; 
        }
        if ( !(x61 == s || x62 == s || x63 ==s || x64 ==s || x65 ==s || x66 == s || x67 ==s || x68 ==s || x69 == s) ) {
            return FALSE;
        }
        if ( !(x71 == s || x72 == s || x73 ==s || x74 ==s || x75 ==s || x76 == s || x77 ==s || x78 ==s || x79 == s) ){
            return FALSE;
        }
        if ( !(x81 == s || x82 == s || x83 ==s || x84 ==s || x85 ==s || x86 == s || x87 ==s || x88 ==s || x89 == s) ){
            return FALSE;
        }
        if ( !(x91 == s || x92 == s || x93 ==s || x94 ==s || x95 ==s || x96 == s || x97 ==s || x98 ==s || x99 == s) ){
            return FALSE;
        }
    }
    return TRUE;
}

int cols_win() {
    for (int s = 1; s <= N; s++){
        if ( !(x11 == s || x21 == s || x31 ==s || x41 ==s || x51 == s || x61 ==s || x71 ==s || x81 == s || x91 == s) ) {
            return FALSE;
        }
        if ( !(x12 == s || x22 == s || x32 ==s || x42 ==s || x52 == s || x62 ==s || x72 ==s || x82 == s || x92 == s) ) {
            return FALSE;
        }
        if ( !(x13 == s || x23 == s || x33 ==s || x43 ==s || x53 == s || x63 ==s || x73 ==s || x83 == s || x93 == s) ) {
            return FALSE;
        }
        if ( !(x14 == s || x24 == s || x34 ==s || x44 ==s || x54 == s || x64 ==s || x74 ==s || x84 == s || x94 == s) ) {
            return FALSE;
        }
        if ( !(x15 == s || x25 == s || x35 ==s || x45 ==s || x55 == s || x65 ==s || x75 ==s || x85 == s || x95 == s) ){
            return FALSE; 
        }
        if ( !(x16 == s || x26 == s || x36 ==s || x46 ==s || x56 == s || x66 ==s || x76 ==s || x86 == s || x96 == s) ) {
            return FALSE;
        }
        if ( !(x17 == s || x27 == s || x37 ==s || x47 ==s || x57 == s || x67 ==s || x77 ==s || x87 == s || x97 == s) ){
            return FALSE;
        }
        if ( !(x18 == s || x28 == s || x38 ==s || x48 ==s || x58 == s || x68 ==s || x78 ==s || x88 == s || x98 == s) ){
            return FALSE;
        }
        if ( !(x19 == s || x29 == s || x39 ==s || x49 ==s || x59 == s || x69 ==s || x79 ==s || x89 == s || x99 == s) ){
            return FALSE;
        }
    }
    return TRUE;
}

int squares_win() {
    for (int s = 1; s <= N; s++){
        // 1
        if ( !(x11 == s || x12 == s || x13 ==s || x21 ==s || x22 == s || x23 ==s || x31 ==s || x32 == s || x33 == s) ) {
            return FALSE;
        }
        // 2
        if ( !(x14 == s || x15 == s || x16 ==s || x24 == s || x25 == s || x26 ==s || x34 == s || x35 == s || x36 ==s ) ) {
            return FALSE;
        }
        // 3
        if ( !(x17 == s || x18 == s || x19 ==s || x27 == s || x28 == s || x29 ==s || x37 == s || x38 == s || x39 ==s ) ) {
            return FALSE;
        }
        // 4
        if ( !(x41 == s || x42 == s || x43 ==s || x51 ==s || x52 == s || x53 ==s || x61 ==s || x62 == s || x63 == s) ) {
            return FALSE;
        }
        // 5
        if ( !(x44 == s || x45 == s || x46 ==s || x54 == s || x55 == s || x56 ==s || x64 == s || x65 == s || x66 ==s ) ) {
            return FALSE;
        }
        // 6
        if ( !(x47 == s || x48 == s || x49 ==s || x57 == s || x58 == s || x59 ==s || x67 == s || x68 == s || x69 ==s ) ) {
            return FALSE;
        }
        // 7 
        if ( !(x71 == s || x72 == s || x73 ==s || x81 ==s || x82 == s || x83 ==s || x91 ==s || x92 == s || x93 == s) ) {
            return FALSE;
        }
        // 8
        if ( !(x74 == s || x75 == s || x76 ==s || x84 == s || x85 == s || x86 ==s || x94 == s || x95 == s || x96 ==s ) ) {
            return FALSE;
        }
        // 9
        if ( !(x77 == s || x78 == s || x79 ==s || x87 == s || x88 == s || x89 ==s || x97 == s || x98 == s || x99 ==s ) ) {
            return FALSE;
        }
    }
    return TRUE;
}

int solved(){
    return
        cols_win() &&
        rows_win() &&
        squares_win();
}

int main() {

    while (TRUE) {

        if (x11 == 0) {
            x11 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x11));
        }
        if (x12 == 0) {
            x12 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x12));
        }
        if (x13 == 0) {
            x13 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x13));
        }
        if (x14 == 0) {
            x14 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x14));
        }
        if (x15 == 0) {
            x15 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x15));
        }
        if (x16 == 0) {
            x16 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x16));
        }
        if (x17 == 0) {
            x17 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x17));
        }
        if (x18 == 0) {
            x18 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x18));
        }
        if (x19 == 0) {
            x19 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x19));
        }
        if (x21 == 0) {
            x21 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x21));
        }
        if (x22 == 0) {
            x22 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x22));
        }
        if (x23 == 0) {
            x23 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x23));
        }
        if (x24 == 0) {
            x24 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x24));
        }
        if (x25 == 0) {
            x25 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x25));
        }
        if (x26 == 0) {
            x26 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x26));
        }
        if (x27 == 0) {
            x27 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x27));
        }
        if (x28 == 0) {
            x28 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x28));
        }
        if (x29 == 0) {
            x29 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x29));
        }
        if (x31 == 0) {
            x31 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x31));
        }
        if (x32 == 0) {
            x32 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x32));
        }
        if (x33 == 0) {
            x33 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x33));
        }
        if (x34 == 0) {
            x34 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x34));
        }
        if (x35 == 0) {
            x35 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x35));
        }
        if (x36 == 0) {
            x36 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x36));
        }
        if (x37 == 0) {
            x37 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x37));
        }
        if (x38 == 0) {
            x38 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x38));
        }
        if (x39 == 0) {
            x39 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x39));
        }
        if (x41 == 0) {
            x41 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x41));
        }
        if (x42 == 0) {
            x42 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x42));
        }
        if (x43 == 0) {
            x43 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x43));
        }
        if (x44 == 0) {
            x44 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x44));
        }
        if (x45 == 0) {
            x45 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x45));
        }
        if (x46 == 0) {
            x46 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x46));
        }
        if (x47 == 0) {
            x47 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x47));
        }
        if (x48 == 0) {
            x48 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x48));
        }
        if (x49 == 0) {
            x49 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x49));
        }
        if (x51 == 0) {
            x51 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x51));
        }
        if (x52 == 0) {
            x52 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x52));
        }
        if (x53 == 0) {
            x53 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x53));
        }
        if (x54 == 0) {
            x54 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x54));
        }
        if (x55 == 0) {
            x55 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x55));
        }
        if (x56 == 0) {
            x56 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x56));
        }
        if (x57 == 0) {
            x57 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x57));
        }
        if (x58 == 0) {
            x58 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x58));
        }
        if (x59 == 0) {
            x59 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x59));
        }
        if (x61 == 0) {
            x61 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x61));
        }
        if (x62 == 0) {
            x62 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x62));
        }
        if (x63 == 0) {
            x63 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x63));
        }
        if (x64 == 0) {
            x64 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x64));
        }
        if (x65 == 0) {
            x65 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x65));
        }
        if (x66 == 0) {
            x66 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x66));
        }
        if (x67 == 0) {
            x67 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x67));
        }
        if (x68 == 0) {
            x68 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x68));
        }
        if (x69 == 0) {
            x69 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x69));
        }
        if (x71 == 0) {
            x71 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x71));
        }
        if (x72 == 0) {
            x72 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x72));
        }
        if (x73 == 0) {
            x73 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x73));
        }
        if (x74 == 0) {
            x74 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x74));
        }
        if (x75 == 0) {
            x75 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x75));
        }
        if (x76 == 0) {
            x76 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x76));
        }
        if (x77 == 0) {
            x77 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x77));
        }
        if (x78 == 0) {
            x78 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x78));
        }
        if (x79 == 0) {
            x79 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x79));
        }
        if (x81 == 0) {
            x81 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x81));
        }
        if (x82 == 0) {
            x82 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x82));
        }
        if (x83 == 0) {
            x83 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x83));
        }
        if (x84 == 0) {
            x84 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x84));
        }
        if (x85 == 0) {
            x85 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x85));
        }
        if (x86 == 0) {
            x86 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x86));
        }
        if (x87 == 0) {
            x87 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x87));
        }
        if (x88 == 0) {
            x88 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x88));
        }
        if (x89 == 0) {
            x89 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x89));
        }
        if (x91 == 0) {
            x91 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x91));
        }
        if (x92 == 0) {
            x92 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x92));
        }
        if (x93 == 0) {
            x93 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x93));
        }
        if (x94 == 0) {
            x94 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x94));
        }
        if (x95 == 0) {
            x95 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x95));
        }
        if (x96 == 0) {
            x96 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x96));
        }
        if (x97 == 0) {
            x97 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x97));
        }
        if (x98 == 0) {
            x98 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x98));
        }
        if (x99 == 0) {
            x99 = nondet_ushortint();
            __CPROVER_assume(value_allowed(x99));
        }

        __CPROVER_assert(!solved(), "Sudoku solved");
    }
}
