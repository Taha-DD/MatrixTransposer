import numpy as np

columns, rows = map(int, input("Enter columns & rows (separated by space): ").split())

matrix = [[int(input(f"({i}, {j}): ")) for j in range(columns)] for i in range(rows)]

print("Original Matrix:")
for row in matrix:
    print(row)

print(f"\nTransposed Matrix:\n{np.transpose(matrix)}")