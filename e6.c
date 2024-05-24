#include <stdio.h>

int main() {
    FILE *emp_file, *empdata_file;
    char ch;

    emp_file = fopen("data.txt", "r");
    if (emp_file == NULL)
	{
        printf("Unable to open source file.\n");
    }

    empdata_file = fopen("data_copy.txt", "w");
    if (empdata_file == NULL)
	{
        printf("Unable to open destination file.\n");
        fclose(emp_file);
    }
    
    while ((ch = fgetc(emp_file)) != EOF) {
        fputc(ch, empdata_file);
    }

    printf("Content copied successfully.\n");

    fclose(emp_file);
    fclose(empdata_file);
}

