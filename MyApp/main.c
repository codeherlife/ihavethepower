//
//  main.c
//  MyApp
//
//  Created by Melanie Mills on 8/27/18.
//  Copyright © 2018 CSCI. All rights reserved.
//

#include <stdio.h>

FILE *fp;

#define MIN 1
#define MAX 30

int main(void) {
    int i;
    
    fp = fopen("csis.txt", "w");
    
    printf("%8s %8s %8s %8s %8s\n", "Value", "Square", "Cube", "Fourth", "Fifth");
    fprintf(fp, "%8s %8s %8s %8s %8s\n", "Value", "Square", "Cube", "Fourth", "Fifth");
    printf("%8s %8s %8s %8s %8s\n", "-----", "------", "----", "------", "-----");
    fprintf(fp, "%8s %8s %8s %8s %8s\n", "-----", "------", "----", "------", "-----");
    
    for (i = MIN; i <= MAX; ++i){
        printf("%8d %8d %8d %8d %8d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
        fprintf(fp, "%8d %8d %8d %8d %8d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
    }
    fclose(fp);
    return 0;
}
