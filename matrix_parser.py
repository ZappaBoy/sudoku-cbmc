#init
sudoku = [
    [5, 3, 0, 0, 7, 0, 0, 0, 0],
    [6, 0, 0, 1, 9, 5, 0, 0, 0],
    [0, 9, 8, 0, 0, 0, 0, 6, 0],
    [8, 0, 0, 0, 6, 0, 0, 0, 3],
    [4, 0, 0, 8, 0, 3, 0, 0, 1],
    [7, 0, 0, 0, 2, 0, 0, 0, 6],
    [0, 6, 0, 0, 0, 0, 2, 8, 0],
    [0, 0, 0, 4, 1, 9, 0, 0, 5],
    [0, 0, 0, 0, 8, 0, 0, 7, 9],
]

# open logs
file = open("matrix.out", "r")
logs = file.read().split("\n")

for line in logs:
    if "sudoku[" in line:
        line = line.replace("l", "")
        line = line.replace(" ", "")
        line = line[:-34]

        x = int(line[7])
        y = int(line[10])
        z = int(line[13])
        print(x, y, z)
        sudoku[x][y] = z

#print sudoku solution
print(sudoku)