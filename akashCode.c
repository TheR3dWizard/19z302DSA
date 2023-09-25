#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilities.h"


int* readFile(char filename[]){
    FILE *fp;
    fp = fopen(filename, "r");
    
    int sampleLengthVar, sampleElement;

    fscanf(fp, "%d", &sampleLengthVar);
    printf("Scanning a sample of length: %d\n", sampleLengthVar);

    printf("    ALLOC-PTR_START\n");
    int* sampleArrayPtr = (int*)malloc(sampleLengthVar * sizeof(int));
    printf("    ALLOC-PTR_END\n");

    printf("    SCN-START\n");
    for (int iterable = 0; iterable < sampleLengthVar; iterable++){
        printf("    SCN-ITR: %d\r", iterable);
        fscanf(fp, "%d", &sampleElement);
        *(sampleArrayPtr + iterable) = sampleElement;
    }
    printf("\n");
    printf("    SCN-END\n");

    fclose(fp);

    bubblesort(sampleArrayPtr, sampleLengthVar);
}


int run(char filename[]){
    printf("Scanning for and sorting `%s` \n", filename);
    clock_t start = clock(); // start the timer

    readFile(filename);

    clock_t end = clock(); // end the timer
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time spent: %f\n", time_spent);
    printf("\n\n");
}

int main() {
    run("ascsorted.txt");
    run("descsorted.txt");
    run("nearlysorted.txt");
    // run("./Testcase Generation/ascending.txt");
    // run("./Testcase Generation/descending.txt");
    // run("./Testcase Generation/random.txt");
}