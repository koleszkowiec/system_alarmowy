#include "Sensor.h"

class PIR : public Sensor 
{
public:
	PIR();
	~PIR();
	void introduce();
};

class Window : public Sensor
{
public:
	Window();
	~Window();
	void introduce();
};

