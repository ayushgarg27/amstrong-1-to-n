#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        int num = i;
        int ans = 0;
        while(num!=0){
            int r = num % 10;
            num = num / 10;
            ans = ans + (r * r * r);
        }
        if(ans==i){
            printf("%d", i);
            printf(" ");
        }
    }
}