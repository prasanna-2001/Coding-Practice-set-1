#include <stdio.h> 
#include <sys/types.h> 
int main() 
{ 
    int a =5;
    a=a<<a>>a-1;
    printf("%d",a);
    return 0;
} 
