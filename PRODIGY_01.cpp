/*
Task 1:-
Build Tempaerature  Conversion Program
*/
#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius)
{
  return celsius * 9 / 5 + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9;
}

double celsiusToKelvin(double celsius)
{
  return celsius + 273.15;
}

double kelvinToCelsius(double kelvin)
{
  return kelvin - 273.15;
}

double fahrenheitToKelvin(double fahrenheit)
{
  double celsius = fahrenheitToCelsius(fahrenheit);
  return celsiusToKelvin(celsius);
}

double kelvinToFahrenheit(double kelvin)
{
  double celsius = kelvinToCelsius(kelvin);
  return celsiusToFahrenheit(celsius);
}

int main()
{
  cout << "Temperature Conversion Program" << endl;

  while (true)
  {
    cout << "\n1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "7. Quit" << endl;

    cout << "Enter your choice (1-7): ";
    int choice;
    cin >> choice;

    if (choice == 7)
    {
      cout << "Exiting the program. Goodbye!" << endl;
      break;
    }

    double temperature;
    cout << "Enter temperature value: ";
    cin >> temperature;

    switch (choice)
    {
    case 1:
      cout << temperature << " Celsius is equal to " << celsiusToFahrenheit(temperature) << " Fahrenheit." << endl;
      break;
    case 2:
      cout << temperature << " Fahrenheit is equal to " << fahrenheitToCelsius(temperature) << " Celsius." << endl;
      break;
    case 3:
      cout << temperature << " Celsius is equal to " << celsiusToKelvin(temperature) << " Kelvin." << endl;
      break;
    case 4:
      cout << temperature << " Kelvin is equal to " << kelvinToCelsius(temperature) << " Celsius." << endl;
      break;
    case 5:
      cout << temperature << " Fahrenheit is equal to " << fahrenheitToKelvin(temperature) << " Kelvin." << endl;
      break;
    case 6:
      cout << temperature << " Kelvin is equal to " << kelvinToFahrenheit(temperature) << " Fahrenheit." << endl;
      break;
    default:
      cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
    }
  }

  return 0;
}
