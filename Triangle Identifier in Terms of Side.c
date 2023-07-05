//Triangle Identifier in terms of Side
#include <stdio.h>
int main () {
    int s1, s2, s3;
    
    printf("Enter Length of Sides of Triangle\n");
    printf("Enter Length of First Side:\n");
    scanf("%d", &s1);
    
    printf("Enter Length of Second Side:\n");
    scanf("%d", &s2);
    
    printf("Enter Length of Third Side:\n");
    scanf("%d", &s3);
    
    if (s1==s2 && s2==s3) {
        printf("It is Equilateral Triangle\n");
    }
    else if (s1==s2 || s2==s3 || s1==s3) {
        printf("It is Isocseles Triangle\n");
    }
    else {
        printf("It is Scalene Triangle\n");
    }
    return 0;
}