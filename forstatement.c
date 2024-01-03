#include<stdio.h>

int main(){
int x=-1, y=1, z=0;
for(x=-1;x<3;++x){
 for(y=1;y<=3;++y){
   for(z=0;z<3;++z){
    printf("%d  %2d  %3d\n", x,y,z);
   }
   }
}

}