#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char time_string[9];  // Assuming the maximum length of the time string is 8 characters
    char *token;
    unsigned long hh, mm, ss;
    unsigned long total_seconds;

    printf("Enter the time in hh:mm:ss format: ");
    fgets(time_string, sizeof(time_string), stdin);

    // Split the time into hours, minutes, and seconds using strtok()
    token = strtok(time_string, ":");
    hh = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    mm = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    ss = strtoul(token, NULL, 10);

    // Compute the total number of seconds
    total_seconds = hh * 3600 + mm * 60 + ss;

    printf("Total seconds: %lu\n", total_seconds);

    return 0;
}