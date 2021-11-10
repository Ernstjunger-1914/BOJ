fibonacci=[0, 1]
t=gets.to_i

t.times do
    n=gets.to_i

    while fibonacci[n]==nil
        fibonacci<<fibonacci[-2]+fibonacci[-1]
    end

    a=fibonacci[n-1]
    a=1 if n==0
    
    puts "#{a} #{fibonacci[n]}"
end