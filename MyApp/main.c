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
    
    printf("%10s %10s %10s %10s %10s\n", "Value", "Square", "Cube", "Fourth", "Fifth");
    printf("%10s %10s %10s %10s %10s\n", "-----", "------", "----", "------", "-----");
    
    for (i = MIN; i <= MAX; ++i){
        printf("%10d %10d %10d %10d %10d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
    }
    return 0;
}
