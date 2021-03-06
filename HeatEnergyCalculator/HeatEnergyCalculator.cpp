// HeatEnergyCalculator.cpp : Defines the entry point for the application.
//

#include "HeatEnergyCalculator.h"

using namespace std;

class Calculator {

private:
  const double airProperties[6][15] = {
	{0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90} ,//tempC
	{1.292, 1.269, 1.246, 1.225, 1.204, 1.184, 1.164, 1.145, 1.127, 1.109, 1.092, 1.059, 1.025, 0.9994, 0.9718} , //rho
	{0.02364, 0.02401, 0.02439, 0.02476, 0.02514, 0.02551, 0.02588, 0.02625, 0.02662, 0.02699, 0.02735, 0.02808, 0.02881, 0.02953, 0.03024} , //k
	{1.729e-5, 1.754e-5, 1.778e-5, 1.802e-5, 1.825e-5, 1.849e-5, 1.872e-5, 1.895e-5, 1.918e-5, 1.941e-5, 1.963e-5, 2.008e-5, 2.052e-5, 2.096e-5, 2.139e-5} ,//mju
	{1.338e-5, 1.382e-5, 1.426e-5, 1.470e-5, 1.516e-5, 1.562e-5, 1.608e-5, 1.655e-5, 1.702e-5, 1.750e-5, 1.798e-5, 1.896e-5, 1.995e-5, 2.097e-5, 2.201e-5} ,//nu
	{ 0.7362, 0.7350, 0.7336, 0.7323, 0.7309, 0.7296, 0.7282, 0.7268, 0.7255, 0.7241, 0.7228, 0.7202, 0.7177, 0.7154, 0.7132} //prandtl
  };

public: 
  void giveTempC() {
	auto tempC = airProperties[0];
	std::cout << typeid(tempC).name()  << std::endl;
  }
};



int main()
  {
  Calculator calc;
  calc.giveTempC();
	  cout << "Hello CMake." << endl;
	  return 0;
  }