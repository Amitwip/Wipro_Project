// Print the rectangle star pattern
/* 
          *****
          *****
          *****
          *****
          *****
 */
#include<stdio.h>
                        int
                        main(){
    int n;
    int i , j;
    printf("Enter the size :\n");
    scanf("%d", &n);
    i = 1;
    while(i<=n){
        j=1;
        while (j <= n){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
    
}