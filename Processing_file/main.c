#include <stdio.h>
#include <stdlib.h>

int read_word(FILE *infile, char *input);
int read_line(FILE *infile, char *line, size_t line_size);
int main()
{
    FILE *infile1;
    FILE *infile2;
    int status1, status2;
    char *input1[255], *input2[255];

    const size_t line_size = 300;
    char* line = malloc(line_size);

    infile1 = fopen("test1.txt", "r");
    infile2 = fopen("test2.txt", "r");

    if(infile1 == NULL)
    {
        printf("Can not open the file 1!\n");
    }
    else if(infile2 == NULL)
    {
        printf("Can not open the file 1!\n");
    }
    else
    {
        do
        {
            status1 = read_word(infile1, &input1);
            status2 = read_word(infile2, &input2);
            printf("File 1: %s\n File 2: %s\n", input1, input2);
            printf("Status 1: %d\n Status 2: %d\n", status1, status2);
            printf("------------------------\n");

        }
        while(status1 != -1 || status2 != -1);

    }
    fclose(infile1);
    fclose(infile2);

    return 0;
}
int read_word(FILE *infile, char *input)
{
    int status;
    status = fscanf(infile,"%s", input);
    return status;
}
