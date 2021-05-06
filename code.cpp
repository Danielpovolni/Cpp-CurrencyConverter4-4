#include <iostream>
#include <string>
using namespace std;

int main(){
	string currency_from, currency_to;
	float amount, base;
	cout << "Enter from witch currency you wanna convert(euro,yen,pound,franc,dollar): ";
	cin >> currency_from;
	cout << "Enter to witch currency you wanna convert(euro,yen,pound,franc,dollar): ";
	cin >> currency_to;
	cout << "Enter the amount you wanna convert: ";
	cin >> amount;
 
	//BASE 

	float float_amount = (float)amount;
	if( currency_from =="dollar"){
		base = float_amount / 1;}
		
	else if( currency_from =="euro"){
		base = float_amount / 0.83;}
		
	else if( currency_from =="yen"){
		base = float_amount / 109.28;}
		
	else if( currency_from =="franc"){
		base = float_amount / 0.91;}
	
	//converting values to float	
	float float_base = (float)base;
	float result;
	

  	if(currency_to == "dollar"){
		result= float_base*1; }
  	else if(currency_to == "euro"){
		result= float_base*0.83; }
	else if(currency_to == "yen"){
		result= float_base*109.28; }
	else if(currency_to == "franc"){
		result= float_base*0.91; }
	cout << amount<< " " <<  currency_from << "(s)" << " is " << result << " " <<  currency_to << "(s)" ;			

}
