#include<iostream>
#include<string.h>
#include<math.h>
using namespace std ;

int subs(char subset [20][3],char input[20],int l ){
    int i,j;
    for(i=0;i<l;i++){
            subset[i][0]=(char)(input[i]-48+96);
            subset[i][1]=' ';
            subset[i][2]='\0';
            if(i>0&&(input[i-1]-48)*10+(input[i]-48)<26){
                subset[i][1]=(char)((input[i-1]-48)*10+(input[i]-48)+96);

            }
    }
return 0;
}





int main(){
    char input[20], subset[20][3],fin[200][20] ;
    int i,j,l,p,k,m,n,length[200]={0},le[200]={0};
    cin>>input;
    l=strlen(input);
    subs(subset,input,l);

    p=pow(2,l);
    for(i=0;i<p;i++){
        for(j=0;j<l;j++)
        {
            if(1&(i>>j)&&subset[j][1]!=' '){
                {fin[i][le[i]]=subset[j][1];le[i]++;length[i]++;}



            }
            else {
                    {fin[i][le[i]]=subset[j][0];le[i]++;}


            }

        }
        fin[i][le[i]]='\0';

    } cout<<"-----------------------------------------------------------\n";
    for(i=0;i<p;i++){
if(l-length[i]==strlen(fin[i]))
 cout<<fin[i]<<"\n";




        }


}
