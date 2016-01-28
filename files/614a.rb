    require 'scanf'

	x=scanf("%d")[0]
    y=scanf("%d")[0]
    k=scanf("%d")[0]
	o=1
	ch=1
	while o<x
	
		o*=k
	end
	while o>=x&&o<=y
	  
		print o
        print " "
		o*=k
		ch=0
	end
	if ch==1
		puts -1
	end



