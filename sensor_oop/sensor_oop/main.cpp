#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Sensor.h"
//#include "Sensors.h"
#include "SensorFactory.h"

enum sensor_type{PIRt, Windowt};

int main() 
{
	SensorFactory *sensorFactory = new SensorFactory();
	Sensor *sensor = new PIR();
	//Sensor *sensor = sensorFactory->getSensor();
	std::cout << "sensor1";

	//sensor->introduce();
	int k=1;
	std::cout << "Czy utworzyc jeszcze jednego? [1-yes/0-no]" << std::endl;
	std::cin >> k;
	return 0;

}
