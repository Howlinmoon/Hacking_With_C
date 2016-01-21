//
//  main.c
//  06_10_challenge 2
//
//  Created by jim Veneskey on 1/21/16.
//  Copyright © 2016 Jim Veneskey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Calculate the freezing and boiling temperature of water in Celsius, Fahrenheit and Kelvin
    
    float waterBoilInCelsius = 100;
    float waterFreezeInCelsius = 0;
    
    float waterBoilInFahrenheit;
    float waterFreezeInFahrenheit;
    
    float waterBoilInKelvin;
    float waterFreezeInKelvin;
    
    
    // Convert to Fahrenheit
    waterBoilInFahrenheit = waterBoilInCelsius * 9.0 / 5.0 + 32;
    waterFreezeInFahrenheit = waterFreezeInCelsius * 9.0 / 5.0 + 32;
    
    // Convert to Kelvin
    waterBoilInKelvin = waterBoilInCelsius + 273.0;
    waterFreezeInKelvin = waterFreezeInCelsius + 273.0;
    
    printf("Water boils at %f degrees Celsius and freezes at %f degrees Celsius\n", waterBoilInCelsius, waterFreezeInCelsius);

    printf("Water boils at %f degrees Fahrenheit and freezes at %f degrees Fahrenheit\n", waterBoilInFahrenheit, waterFreezeInFahrenheit);
    
    printf("Water boils at %f degrees Kelvin and freezes at %f degrees Kelvin\n", waterBoilInKelvin, waterFreezeInKelvin);
    
    
    return 0;
}
