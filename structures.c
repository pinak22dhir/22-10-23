// for storing different values  int char we use structures
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="pinak dhir";
    char* p=str;
    *p='P';
    printf("%s",str);
    return 0;
}