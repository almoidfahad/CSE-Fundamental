#include <stdio.h>
#include <string.h>

int min_operations(char str1[], char str2[], char str3[]) {
    int length = strlen(str1);
    int operations = 0;

    for (int i = 0; i < length; i++) {
        char ch1 = str1[i];
        char ch2 = str2[i];
        char ch3 = str3[i];

        if (ch1 == ch2 && ch2 == ch3) {
            continue;
        } else if (ch1 == ch2 || ch1 == ch3 || ch2 == ch3) {
            operations += 1;
        } else {
            operations += 2;
        }
    }
    return operations;
}

int main() {
    char str1[101], str2[101], str3[101];
    scanf("%s %s %s", str1, str2, str3);

    int result = min_operations(str1, str2, str3);
    printf("%d\n", result);

}
