#include <iostream>
#include <string>

int main(){
    for(int i = 0; i <= 1; i++){
	using namespace std;
	bool nice;
	string currency_from, currency_to;
	float amount, base;
	cout << "Enter from witch currency you wanna convert(euro,yen,pound,franc,dollar): ";
	cin >> currency_from;
	if(currency_from != "dollar" && currency_from != "euro" && currency_from != "yen" && currency_from != "franc"){
    		cout << "Wrong input! " << endl;
    		i = i - 1;}
	else {
		cout << "Enter to witch currency you wanna convert(euro,yen,pound,franc,dollar): ";
		cin >> currency_to;
		if(currency_to != "dollar" && currency_to != "euro" && currency_to != "yen" && currency_to != "franc"){
    			cout << "Wrong input! " << endl;
    			i=i-1;}
		else{
			cout << "Enter the amount you wanna convert: ";
			cin >> amount;
			nice = true;}
		if(amount == 0){
        		cout << "Wrong input!" << endl;
        		nice = true;
        		i=i-1;
			}
    		nice == true;
				}
	float float_amount = (float)amount;

	if( currency_from =="dollar"){
		base = float_amount / 1;
		nice = false;}

	else if( currency_from =="euro"){
		base = float_amount / 0.83;
		nice = false;}

	else if( currency_from =="yen"){
		base = float_amount / 109.28;
		nice = false;}

	else if( currency_from =="franc"){
		base = float_amount / 0.91;
		nice = false;}

	//converting values to float
	float float_base = (float)base;
	float result;


  	if(currency_to == "dollar"){
		result= float_base*1;
		nice =false;}
  	else if(currency_to == "euro"){
		result= float_base*0.83;
		nice = false;}
	else if(currency_to == "yen"){
		result= float_base*109.28;
		nice = false;}
	else if(currency_to == "franc"){
		result= float_base*0.91;
		nice = false;}
	if(nice == false){
	cout << amount<< " " <<  currency_from << "(s)" << " is " << result << " " <<  currency_to << "(s)" ;
	i =3;}}}


