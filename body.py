# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
template = """if (x-+ == 0) {
    value = CPROVER_nondet_ushortint();
    __CPROVER_assume(value_allowed(value));
    __CPROVER_assume(row_value_allowed(-, value));
    __CPROVER_assume(col_value_allowed(+, value));
    __CPROVER_assume(square_value_allowed(*, value));
    x-+ = value;
}"""

for i in range(1,10):
    for j in range(1,10):
        # TODO: future development
        # a = int(((i - 1) / 3 ) + (3 * int((j - 1) / 3)))
        # a = (i-1)*3+(j-1) + 3
        # a = int(a/3)
        # print(int(a))
        # square = str(a)
        # square = str(int(((i*3+j+1)/3 +1))
        if i in [1,2,3] and j in [1,2,3]:
            square = 1
            
        if i in [1,2,3] and j in [4,5,6]:
            square = 2
            
        if i in [1,2,3] and j in [7,8,9]:
            square = 3
            
        if i in [4,5,6] and j in [1,2,3]:
            square = 4
            
        if i in [4,5,6] and j in [4,5,6]:
            square = 5
            
        if i in [4,5,6] and j in [7,8,9]:
            square = 6
            
        if i in [7,8,9] and j in [1,2,3]:
            square = 7
            
        if i in [7,8,9] and j in [4,5,6]:
            square = 8
            
        if i in [7,8,9] and j in [7,8,9]:
            square = 9
            
        square = str(square)
        
        print(template.replace("-", str(i)).replace("+", str(j)).replace("*", square))
