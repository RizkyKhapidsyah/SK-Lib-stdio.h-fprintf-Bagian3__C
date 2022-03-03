#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* fp;
    fp = fopen("example.txt", "w");
    char lang[5][20] = { "C","C++","Java","Python","PHP" };

    fprintf(fp, "Top 5 programming language\n");
    
    for (int i = 0; i < 5; i++) {
        fprintf(fp, "%d. %s\n", i + 1, lang[i]);
    }
    
    fclose(fp);

    _getch();
    return 0;
}