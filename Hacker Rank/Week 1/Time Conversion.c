#include <stdio.h>
#include <string.h>

void timeConversion(const char* s, char* result) {
    int hour, min, sec;
    char meridian[3];
    sscanf(s, "%2d:%2d:%2d%2s", &hour, &min, &sec, meridian);

    if (strcmp(meridian, "AM") == 0) {
        if (hour == 12) hour = 0;
    } else {
        if (hour != 12) hour += 12;
    }

    sprintf(result, "%02d:%02d:%02d", hour, min, sec);
}

int main() {
    char s[11], output[9];
    scanf("%10s", s);
    timeConversion(s, output);
    printf("%s\n", output);
    return 0;
}
