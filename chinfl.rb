require 'scanf'
 
$dp = Array.new(1006) { Array.new(1006){Array.new(2, -1)} }
$mark = Array.new(1006) { Array.new(1006){Array.new(2, 0)} }
$edges = Array.new(1006) { Array.new(1006,0) }

$d=0
$n=0
$mo=0
$op=1000000000000000000.0
$ch=0
 
 i=1
 j=1
 k=0
 l=0
 sol=0
 def max(a,b)
	return (a>b)?a:b
end

 $n=scanf("%d")[0]
 $mo=scanf("%d")[0]
 $d=scanf("%d")[0]
 

def solve( m, p, prev)
    if p<=0||p>$n
	    return 0
	elsif(m==$mo+1&&prev==0)
		return 1
	elsif m>=$mo+1
		return 0
	end	
	if $mark[m][p][prev]!=0
		return $dp[m][p][prev]
	end	
	 sol=0.0
 
			if prev==0
				sol=max(max(sol,solve(m+1,p,1)/$edges[p][2*m-1]),max(solve(m+1,p,0),max(solve(m+1,p-1,0),solve(m+1,p+1,0))))
			end
 
			if prev==1
				sol=max(max(sol,solve(m+1,p,0)*$edges[p][2*m]),max(solve(m+1,p,1),max(solve(m+1,p-1,1),solve(m+1,p+1,1))))
		    end
		    if sol*$d>=$op
		    	$ch=1
		    end	
		$mark[m][p][prev]=1
        $dp[m][p][prev]=sol
		return sol
end

 i=1
 while i<=$n
 	j=1
 	while j<=2*$mo
        var=scanf("%d")[0]
 		$edges[i][j]=var
 	j+=1	
 	end
 	i+=1
 end
 i=1
 while i<=$n
 			sol=max(sol,solve(1,i,0))
 			i+=1
 end		
	if $ch==1
		puts "Quintillionnaire"
	else
		puts sol*$d
	end