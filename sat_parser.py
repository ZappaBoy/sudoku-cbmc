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
file = open("sat.out", "r")
logs = file.read().split("\n")

for line in logs:
    line = line.replace(" ", "")
    if line.startswith("x"):
        line = line[:-34]
        print(line)

        x = int(line[1])
        y = int(line[2])
        z = int(line[4])
        # print(x, y, z)
        sudoku[x-1][y-1] = z

#print sudoku solution
print(sudoku)
