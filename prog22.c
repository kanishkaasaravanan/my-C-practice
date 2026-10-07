#include<stdio.h>
int main(){
    int wt,aw,cw;
    scanf("%d%d%d",&wt,&aw,&cw);//500 10 3
    int a=aw*75;
    int b=cw*50;
    if(wt>((aw*75)+(cw*50))){
        printf("boat is stable");
    }else{
        printf("boat will drown");
}
}
    
