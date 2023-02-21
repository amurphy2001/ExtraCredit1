#include <stdio.h>

int main() {
    FILE* file;
    char num1;
    int i = 0;
    int j = 0;
    int k = 0;
    char array[10][5];
    file = fopen("test.txt", "r");
    if (NULL == file){
        printf("This file can't be opened");
    }
    while(!feof(file)) {
        num1 = fgetc(file);
        if((num1 != NULL) && (num1 != ' ')&&(num1 != '\n')){
            array[i][j] = num1;
            k++;
            if(k == 49){
                break;
            }
            j++;
            if(j==5){
                i++;
                j = 0;
            }
        }
    }
    printf("%c\n",array[2][2]);
    fclose(file);

    return 0;
}