matrix = [
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9, 10, 11, 12]
]

puts "Original Matrix:"
matrix.to_a.each { |r| puts r.inspect }

puts "\nTransposed Matrix:"
matrix.transpose.to_a.each { |r| puts r.inspect }
