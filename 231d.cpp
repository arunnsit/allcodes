#include<iostream>
int a,b,c,x,y,z,A,B,C,D,E,F;
main(){
    std::cin>>x>>y>>z>>a>>b>>c>>A>>B>>C>>D>>E>>F;
    std::cout<<A*(y<0)+B*(y>b)+C*(z<0)+D*(z>c)+E*(x<0)+F*(x>a);
}