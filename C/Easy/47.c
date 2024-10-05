#include <stdio.h>

void my_function(int x, int y) {
    printf("%d\n", x + y);  
}

int main() {
    int x=5 ,y=3;
    my_function(x, y);  
    return 0;
}