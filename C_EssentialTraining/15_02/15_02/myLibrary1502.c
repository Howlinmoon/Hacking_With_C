/*
 * myLibrary1502.c
 *
 *  Created on: May 9, 2014
 *      Author: isacartzi
 */
#include <math.h>

double areaTrapezoid(double Base, double base, double height){
	return (Base + base)*height/2;
}

double volumeSphere(double r){
	return (4.0/3.0)*M_PI*pow(r,2);
}
