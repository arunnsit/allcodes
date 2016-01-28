#include<stdio.h>
#include<algorithm>
#include<string.h>
char input[1000005];
int main(){
    int t,l,mid,start,end,palin=0,way;
    scanf("%d",&t);
    while(t){
        scanf("%s",&input);
        l=strlen(input);

        palin=0;
        way=2;
        if(l%2==0){
                mid=l/2;
                start=l/2-1;
                end=l/2;
                for(;start>=0;start--,end++){
                        if(input[start]!=input[end]){
                            palin=1;
                            if(input[start]>input[end]){
                                way=1;
                            }
                            else{
                                way=2;
                            }
                            break;

                        }


                }
                start=l/2-1;
                end=l/2;
                if(way==1){
                        for(;start>=0;start--,end++)
                    input[end]=input[start];
                    printf("%s\n",input);
                }
                if(way==2){
                        for(;start>=0;start--){
                            if(input[start]!='9')break;
                            else{input[start]='0';}
                        }
                        if(start!=-1){
                                input[start]++;
                        }
                        else{
                        start=l/2-1;
                        end=l/2;
                        int r=0;
                        for(r=l;r>=0;r--){
                            input[r+1]=input[r];
                        }
                         input[0]='1';
                         l++;
                        }
                        start=l/2-1;
                        end=(l+1)/2;
                         for(;start>=0;start--,end++)
                    input[end]=input[start];
                    printf("%s\n",input);
                }
        }
        else{
            mid=(l)/2;
                start=mid-1;
                end=mid+1;
                for(;start>=0;start--,end++){
                        if(input[start]!=input[end]){
                            palin=1;
                            if(input[start]>input[end]){
                                way=1;
                            }
                            else{
                                way=2;
                            }
                            break;

                        }}
                        start=mid-1;
                end=mid+1;
                        if(way==1){
                                for(;start>=0;start--,end++)
                    input[end]=input[start];
                    printf("%s\n",input);

                        }
                        if(way==2){
                                start=mid;
                                end=mid+1;
                                for(;start>=0;start--){
                            if(input[start]!='9')break;
                            else{input[start]='0';}
                        }
                        if(start!=-1){
                                input[start]++;
                        }
                        else{
                            start=mid-1;
                            end=mid+1;
                            int r=0;
                            for(r=l;r>=0;r--){
                            input[r+1]=input[r];
                        }
                        input[0]='1';
                        l++;}
                        start=mid;
                        end=l/2;
                        for(;start>=0;start--,end++)
                    input[end]=input[start];
                    printf("%s\n",input);
                        }
                        }
        t--;
    }
}
