#include <stdio.h>

int main(){
    int T;
    int i;
    scanf("%d", &T);
    
    for(i=1; i<T+1; i++){
      int A,B;
      scanf("%d %d",&A ,&B);
      printf("Case #%d: %d\n",i,A+B);
    }
    
    return 0;
}