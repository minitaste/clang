# include <stdio.h>

int main(void) {
    int max_num = 10;
    int counter = 0;

    printf("Entering while loop \n");
    while (counter < max_num) {
        printf("Counter: %d\n", ++counter); // increment value before using it
    }

    int num;
    counter = 0;
    printf("Enter a value: \n");
    scanf("%d", &num);
    printf("Entering do while loop \n");
    do {
        printf("The number is: %d\n", num);
        num++;
    } while (num < 10); 



    printf("Entering 'for' loop\n");

    return 0;
}
