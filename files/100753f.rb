def modulo(a,b,c)
        x = 1
        y = a
        while b>0
                if b%2==1
                        x = (x*y)%c
                end        
                y = (y*y)%c
                b = b/2
        end
        return x%c
end 
def millerrabin(n,iteration)
        if n<2
                return 0
        end        
        if n!=2 && n%2==0
                return 0
        end        
         
        d=n-1
        while d%2==0
                d = d/2
        end
        i=1
        while  i<iteration
                a = 1+rand(n-1)
                temp = d
                x = modulo(a,temp,n)
                while temp!=n-1 && x!=1 && x!=n-1
                        x = (x*x)%n
                        temp = temp*2
                end
                if x!=n-1 && temp%2==0
                        return 0
                end        
        i+=1
        end
        
        return 1
end        

primes=Array.new(1000009,0)
fprimes=Array.new(1000009,0)

fcoun=0
i=2
while i<=1001
      if primes[i]==0
        j=i*i
        while j<=1000002
        primes[j]+=1
        j+=i
        end
      end
      i+=1
end 
i=2
while i<=1000002
    if primes[i]==0
        fprimes[fcoun]=i
        fcoun+=1
    end
    i+=1
end

i=0
solution=1
n=gets().to_i
while i<=fcoun
     if fprimes[i]*fprimes[i]*fprimes[i]>n
        break
     end
     if n%fprimes[i]==0
        coun=1
        while n%fprimes[i]==0
              n/=fprimes[i]
              coun+=1
        end
        solution*=coun
     end
     i+=1
end
root=Math.sqrt(n)
if millerrabin(n,20)==1
        puts solution*2
elsif root*root==n&& millerrabin(root,20)==1    
        puts solution*3
else
        puts solution*4
end     
        
        
        
        


