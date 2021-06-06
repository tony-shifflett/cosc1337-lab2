/*
Charles Shifflett
Program Status: Complete
This is a simple program to convert inches to feet with inches remainder for a fictional basketball player
*/

#include <iostream>

int main () {

int inchHeight = 75; //total height of basketball player in inches
int feet; // inchHeight converted into feet, without remainder
int inches; //remainder of the conversion from inches to feet, in inches

    feet = inchHeight/12; // integer division leaves off remainder
    inches = inchHeight%12; //remainder stored here after modulo operation

    std::cout<< "The " << inchHeight << " basketball player is " << feet <<" feet " 
    << inches << " inches tall" << std::endl;
    return 0;
}