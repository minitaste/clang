# include <string.h>
# include <stdio.h>


int main(void) {
    char str1[12];
    char str2[12];
    int len;

    str1[0] = 'h';
    str1[1] = 'i';
    str1[2] = '\0';

    len = strlen(str1);

    printf("String 1 len: %d \n", len);
    printf("String 5 character: %c \n", str1[4]); // be curious not judgmental

    strcpy(str2, str1);
    printf("String 2: %s \n", str2);

    strcpy(str1, "hello");
    printf("String 1: %s \n", str1);

    return 0;
}

