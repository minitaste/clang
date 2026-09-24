# include <stdio.h>
# include <string.h>

struct studentT {
    int age;
    float gpa;
    int graduation_year;
    char name[64];
};


int main(void) {
    struct studentT student1; 
    strcpy(student1.name, "Lasso guy");
    printf("Struct name: %s \n", student1.name);
    printf("Struct size: %ld \n", sizeof(student1.name));
    printf("Struct size: %ld \n", sizeof(student1));

}
