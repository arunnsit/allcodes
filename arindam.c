#include<stdio.h>
#include<string.h>

void reverse(char a[],int start ,int end){  //reverse the string between two points ie start and end
    start++;
    end --;
    int l=start+(end-start+1)/2;
    int i,j;
    char temp;
    for(i=start;i<l;i++){
        temp=a[i];
        a[i]=a[end-i+start];
        a[end-i+start]=temp;
    }

}
void frequency(char a[],int start ,int end){ //matches string ! here word denotes the part of a between start and end
    int l=strlen(a);
    int i,j,f=0;
    start++;
    end --;
    for(i=0;i<l;i++){
        for(j=start;j<=end;j++){
            if(a[i+j-start]!=a[j])break;
            }
        if(j==end+1){f++;}
    }
    for(i=start;i<=end;i++)printf("%c",a[i]);
    printf("%10d\n",f);
}

int main(){
    int i,j,status=0,l,prev,curr;
    char a[1000];
    gets(a);
    l=strlen(a);
    printf("frequencies :\n\n");
    for(i=0;i<l;i++){
        if(status==0&&a[i]==' '){ // status shows if first space has been encountered or not
            status=1;
            curr=i;
            frequency(a,-1,curr);
        }
        else if(a[i]==' '){
            prev=curr;
            curr=i;
            frequency(a,prev,curr);
        }
    }
    frequency(a,curr,l);
    status=0;                                    // status shows if first space has been encountered or not
    for(i=0;i<l;i++){
        if(status==0&&a[i]==' '){
            status=1;
            curr=i;
            reverse(a,-1,curr);
        }
        else if(a[i]==' '){
            prev=curr;
            curr=i;
            reverse(a,prev,curr);
        }
    }
    reverse(a,curr,l);
    printf("\n%s\n",a);

}
