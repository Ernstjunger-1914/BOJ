n=gets
n=n.to_i

fibonacci=Array(10001)
fibonacci[0]=0
fibonacci[1]=1

(2..n).each do |i|
    fibonacci[i]=fibonacci[i-2]+fibonacci[i-1]
end

if n==0
  puts 0
else 
  puts fibonacci.last
end