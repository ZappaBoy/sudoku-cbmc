template = """if (x-+ == 0) {
    x-+ = CPROVER_nondet_ushortint();
    __CPROVER_assume(value_allowed(x-+), "x-+ value is correct");
    __CPROVER_assume(row_value_allowed(1, x-+), "row value allowed");
    __CPROVER_assume(col_value_allowed(1, x-+), "col value allowed");
    __CPROVER_assume(square_value_allowed(1, 1, x-+), "square value allowed");
}"""

for i in range(1,10):
    for j in range(1,10):
        print(template.replace("-", str(i)).replace("+", str(j)))
