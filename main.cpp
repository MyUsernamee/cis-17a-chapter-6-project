#include <iostream>

double calculateCharge(double weight, double distance);

int main () {
	
	while (true) {

		std::cout << "Please enter the weight of the package in KG" << std::endl;
		
		double weight_kg;
		std::cin >> weight_kg;

		if (weight_kg == 0)
			return 0;

		std::cout << "Please enter the distance in miles" << std::endl;

		double distance_miles;
		std::cin >> distance_miles;
		
		std::cout << "The total is: \n$" << calculateCharge(weight_kg, distance_miles) << std::endl;
		

	}
}

double calculateCharge(double weight, double distance) {

	double distance_per_500 = distance / 500;

	return distance_per_500 * (weight > 10 ? 6.40 : weight > 6 ? 5.30 : weight > 2? 4.20 : 3.10); // Is this readable no, but I didn't feel like typing out all of the if statments :)
												      // Please no hate :(

}
