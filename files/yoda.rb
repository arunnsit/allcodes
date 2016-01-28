str="abc"
str=gets()
while str!=0
	i=0
	j=0
	l=0
	arr=Array.new(30,0)
	st2="bc"
	while str[i]!='\0'
		if str[i].to_i>=97&&str[i].to_i<=123
			arr[str[i].to_i-97]+=1
		end
		i+=1
	end 

	
end
