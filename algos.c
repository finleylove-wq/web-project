#include <stdio.h>
int main(){
    int ascending[100];

    for (int i=0;i<100; i++)
    ascending[i]=i;
    for(int i=0; i<100; i++)
    printf("%d",ascending[i]);
}