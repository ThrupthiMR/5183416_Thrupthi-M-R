#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char sentence[1005];
    if (!fgets(sentence, sizeof(sentence), stdin)) return 0;

    bool seen[26] = {false};
    for (size_t i = 0; i < strlen(sentence); ++i) {
        char c = sentence[i];
        if (isalpha((unsigned char)c)) {
            c = tolower((unsigned char)c);
            seen[c - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (!seen[i]) {
            printf("not pangram\n");
            return 0;
        }
    }

    printf("pangram\n");
    return 0;
}
