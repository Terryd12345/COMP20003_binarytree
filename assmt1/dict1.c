#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dict1.h"


int main(int argc, char **argv){

    FILE *csv;
    char ch;
    int row_index, data_index, row_number;
    
    csv = fopen("athlete_events_filtered.csv", "r");
    ch = fgetc(csv);

    row_index = 0;
    data_index = 0;
    row_number = 0;

    while (row_number < 10)
    {

        if(ch == ','){    
            row_index++;
            data_index = 0;
            printf(" ");
        } else if(ch == '\n'){

            row_index = 0;
            data_index = 0;
            row_number++;
            printf("\n");

        } else {
            data_index++;
            printf("%c", ch);
        }   
        
        ch = fgetc(csv);
    };

    fclose(csv);



}