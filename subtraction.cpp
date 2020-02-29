#include <iostream>
int main() {    

    int number11, number2, diff;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number11, &number2);

    // calculating sum
    diff = number11 - number2;      
    
    printf("%d + %d = %d", number11, number2, diff);
    return 0;
}
