#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], s3[1000];
    
    scanf("%s %s %s", s1, s2, s3);

    char *minStr = s1, *maxStr = s1;
    
    if (strcmp(s2, minStr) < 0){
        minStr = s2;
    } 
        
    if (strcmp(s3, minStr) < 0){
        minStr = s3;
    } 

    if (strcmp(s2, maxStr) > 0){
        maxStr = s2;
    } 
    if (strcmp(s3, maxStr) > 0){
        maxStr = s3;
    } 
    
    printf("%s\n", minStr);
    printf("%s\n", maxStr);

}