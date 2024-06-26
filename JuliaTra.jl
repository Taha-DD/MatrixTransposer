print("Enter row and columns (separated by space): ")
rows, cols = parse.(Int, split(readline()))

matrix = Matrix{Int}(undef, rows, cols)

for i in 1:rows
    for j in 1:cols
        print("($i, $j): ")
        matrix[i, j] = parse(Int, readline())
    end
end

println("Original Matrix:")
for row in eachrow(matrix)
    println(row)
end

println("\nTransposed Matrix:")
for row in eachrow(transpose(matrix))
    println(row)
end