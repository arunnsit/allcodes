
$dp = Array.new(310) { Array.new(310, 0) }
x=0
while x<310
y=0
while y<310
$dp[x][y]=-1
y+=1
end
x+=1
end

def solve(l,h)
    if h-l==1
        return 1
    end 
    if h<=l
        return 0
    end 
    if $dp[l][h]!=-1
        return $dp[l][h]
    end 
      
    i=l+1
    s=0
    while i<=h
    if i==l+1
    s+=solve(i+1,h)
    end
     if i==h
    s+=solve(l+1,h-1)
    end
    if i>l+1 && i<h 
        s+=solve(l+1,i-1)*solve(i+1,h)
    end 
        i+=1
    end
    $dp[l][h]=s
    return s        
end 
 input=gets
 input=input.to_i
 while input!=-1
    if input!=0
    puts solve(1,2*input)
 end
     input=gets
 input=input.to_i
end


