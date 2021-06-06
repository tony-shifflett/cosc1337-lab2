/* 
Charles Shifflett
Program Status: Complete
This program performs a simple arithmetic calculation to determine the necessary 
sale price of a flash drive in order to return a 35% profit on the
cost of manufacture
*/

#include <iostream>
#include <iomanip>


int main(){

double productionCost = 8.00; // productionCost stores the cost of making the drive
double salesPrice; // salesPrice will store the retail cost 

//the following calculation determines what sales price will return a 35% profit
// on the $8.00 cost of manufacture

salesPrice = productionCost + productionCost*.35;

//the following code prints the text and price per assignment prompt, and formats salesPrice 
std::cout << "To have a 35% profit, the flash drive should sell for $"
<< std::fixed<<std::setprecision(2)<<salesPrice << std::endl;

return 0; 
}