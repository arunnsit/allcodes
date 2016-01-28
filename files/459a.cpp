#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,z=0;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(b==d){
		z=sqrt((a-c)*(a-c));
		b=b+z;
		d+=z;
		if(-1000<=a&&a<=1000&&-1000<=b&&b<=1000&&-1000<=c&&c<=1000&&-1000<=d&&d<=1000)
		printf("%d %d %d %d\n",a,b,c,d);
	    else printf("-1\n");
	}
	else if(a==c){
		z=sqrt(((b-d)*(b-d)));
		a+=z;
		c+=z;
		if(-1000<=a&&a<=1000&&-1000<=b&&b<=1000&&-1000<=c&&c<=1000&&-1000<=d&&d<=1000)
		printf("%d %d %d %d\n",a,b,c,d);
		else printf("-1\n");

	}
	else if(c-a==d-b){
		printf("%d %d %d %d\n",a,d,c,b);

	}
    else printf("-1\n");
    return 0;
}