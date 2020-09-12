#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Palindrome(char str[]) {
	int i = 0,h = strlen(str) - 1;
    while (h > i)
    {
        if (str[i++] != str[h--])
        {
            printf("Not Palindrome");
            return;
        }
    }
    printf("Palindrome");
}

int main() {
	char str[100];
	scanf("%[^\n]", str);
    if (strlen(str) >= 1 && str != " ")
    {
        Palindrome(str);
    }
    else {
        printf("Error");
    }
	return 0;
}