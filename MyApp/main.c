//
//  main.c
//  MyApp
//
//  Created by Melanie Mills on 8/27/18.
//  Copyright © 2018 CSCI. All rights reserved.
//

#include <stdio.h>
#define MIN 1
#define MAX 30

int main(void) {
    int i;
    
    printf("%8s %8s %8s %8s %8s\n", "Value", "Square", "Cube", "Fourth", "Fifth");
    printf("%8s %8s %8s %8s %8s\n", "-----", "------", "----", "------", "-----");
    
    for (i = MIN; i <= MAX; ++i){
        printf("%8d %8d %8d %8d %8d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
    }
    return 0;
}
