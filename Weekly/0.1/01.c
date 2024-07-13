#include <stdio.h>

int main() {
    char firstName[20];

    printf("Enter your first name: ");
    scanf("%s", &firstName);

    printf("Hello %s", firstName);
}