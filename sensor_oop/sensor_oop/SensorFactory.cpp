#pragma once
#include <iostream>
#include "Sensors.h"
//#include "Sensor.h"
#include "SensorFactory.h"

enum sensor_type{PIRt, Windowt};

	SensorFactory::SensorFactory() { std::cout << "SensorFactory built " << std::endl; }
	SensorFactory::~SensorFactory() { std::cout << "~SensorFactory striked " << std::endl; }
	
	Sensor *getSensor(sensor_type tSensor)
	{
		Sensor *sensor = NULL;

		switch(tSensor)
		{
		case PIRt:
			sensor = new PIR();
			break;
		case Windowt:
			sensor = new Window();
			break;
		default:
			sensor = NULL;
			break;
		}
		return sensor;
	}