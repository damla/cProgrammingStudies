//
//  main.c
//  C Programming Test
//
//  Created by Damla Koksal on 30.12.2017.
//  Copyright © 2017 Damla Koksal. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int num; // We will calculate the factorial of this number.
    int result = 1;
    
    printf("Please enter a number: ");
    scanf("%d", &num); //& sign is to get the address of num.
    
    int flag=num; //Created flag to not change the value of num.
    
    while(flag>0){
        result*= flag; // result = num * (num-1) * ..... * 1= num!
        flag--;
    }
    
    printf ("Factorial of %d is %d. \n", num, result);
    
    return 0;
}


