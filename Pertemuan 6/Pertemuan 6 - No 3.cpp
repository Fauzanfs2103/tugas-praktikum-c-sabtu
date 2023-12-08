#include <stdio.h>

int main() {
    
    int i, n; 
    printf("Deret: ");
    n = 1;
    for (i = 1; i <= 11; i++) {
        printf("%d", n);
        
        if (i < 11) {
            printf(", ");
    }
        n *= 2;
    }
    printf("\n");
    return 0;
}
