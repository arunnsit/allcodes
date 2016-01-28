require 'scanf'

a=1
b=1
n=1
sol=1
n=scanf("%d")[0]
while b<=n
	a=scanf("%d")[0]
	sol*=a
	b+=1
end
puts sol
