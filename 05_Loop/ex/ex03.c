#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    int i = 0;
    while(1) {
        if(i == 5) {
            break;
        }
        
        printf("Hello World\n");
        i++;
    }
    
    for(i = 0;;) {
        if(i == 5) {
            break;
        }
        
        printf("Hello World\n");
        i++;
    }
    
    int sum = 0;
    for(i = 1; i <= 10; i++) {
        
        if(i % 2 != 0) {
            continue;
        }
        
        sum += i;
    }
        
    printf("%d ", i);
    
    return 0;
}
