#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char ch;
    char ph;
    char input[50];
    printf("Enter the input file name with .txt at the end: ");
    scanf("%49s", input);

    // Opening file in reading mode
    FILE* ptr = fopen(input, "r");

    char *filename = "output.txt";
    FILE *fp = fopen(filename, "w");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
        exit(0);
    }

    if (fp == NULL) {
        printf("Error opening the file %s", filename);
        exit(0);
    }
    // Printing what is written in file
    // character by character using loop.
    do {
        ch = getc(ptr);
        if (ch == 'e' || ch == 'E') {
          //ch = '3';
          fprintf(fp, "3");
        }

        else if (ch == 'O' || ch == 'o') {
          //ch = '0';
          fprintf(fp, "0");
        }

        else if (ch == 'A' || ch == 'a') {
          //ch = '4';
          fprintf(fp, "4");
        }

        else if (ch == 'S' || ch == 's') {
          fprintf(fp, "5");
        }

        else if (ch == 'T' || ch == 't') {
          fprintf(fp, "7");
        }
        else {
          fprintf(fp, "%c", ch);
        }

        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ch != EOF);

    fclose(fp);

    FILE *pp = fopen(filename, "r");

    printf("Converted to l33t Speak: \n");

    do {
        ph = getc(pp);

        printf("%c", ph);
        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ph != EOF);

    // Closing the file
    fclose(ptr);
    return 0;
}
