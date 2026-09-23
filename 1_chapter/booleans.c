// There are no bool type in c, 0 - false, others - true
# include <stdio.h>

int main(void) {
    int num;
    
    printf("Enter the value: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("\nThe value is false\n");
    } else {
        printf("\nThe value is true\n");
    }
}
