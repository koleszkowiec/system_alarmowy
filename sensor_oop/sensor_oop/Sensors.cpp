#pragma once
#include <iostream>
#include <cstdlib>
//#include "Sensor.h"
#include "Sensors.h"
//#include "SensorFactory.h"

	PIR::PIR() { std::cout << "PIR() " << std::endl; }
	PIR::~PIR() { std::cout << "~PIR() " << std::endl; }
	void PIR::introduce() { std::cout << "I'm a PIR sensor!" << std::endl; }

	Window::Window() { std::cout << "Window() " << std::endl; }
	Window::~Window() { std::cout << "~Window() " << std::endl; }
	void Window::introduce() { std::cout << "I'm a window sensor!" << std::endl; }
