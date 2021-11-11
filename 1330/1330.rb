a, b=gets.chomp.split(" ")

a=Integer(a)
b=Integer(b)

if a==b
    puts "=="
elsif a>b
    puts ">"
else
    puts "<"
end