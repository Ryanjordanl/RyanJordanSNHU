/*
Name: Ryan Jordan
Assignment: Working with files
Class: c230
Date: 4-7-24
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function convertS Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
	return (fahrenheit - 32) * 5 / 9;
}
int main() {
	ifstream inputFile("FahrenheitTemperature.txt");
	ofstream outputFile("CelsiusTemperature.txt");
	if (!inputFile.is_open()) {
		cout << "The file was not able to open." << endl;
		return 1;
	}
	if (!outputFile.is_open()) {
		cout << "The output file could not be created or opened." << endl;
		return 1;
	}
	
	string city;
	double fahrenheit, celsius;
	// Read data from input and write output
	while (inputFile >> city >> fahrenheit) {
		celsius = fahrenheitToCelsius(fahrenheit);
		outputFile << city << " " << celsius << endl;
	}
	// Close both files
	inputFile.close();
	outputFile.close();
	cout << "Temperatures in Celsius were converted successfully and written to the file 'CelsiusTemperature.txt'." << endl;
		return 0;
}
