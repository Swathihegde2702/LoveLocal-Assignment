#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int length = 0;
    int i = strlen(s) - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the characters of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    char s1[] = "Hello World";
    char s2[] = "   fly me   to   the moon  ";
    char s3[] = "luffy is still joyboy";

    printf("Output 1: %d\n", lengthOfLastWord(s1));
    printf("Output 2: %d\n", lengthOfLastWord(s2));
    printf("Output 3: %d\n", lengthOfLastWord(s3));

    return 0;
}

	
