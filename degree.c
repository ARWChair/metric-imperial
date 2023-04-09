#include "metrics.h"

float kelvin_to_celsius(float kelvin)
{
    return (kelvin - __kelvin__);
}

float kelvin_to_fahrenheit(float kelvin)
{
    return ((kelvin - __kelvin__) * 9/5 + __fahrenheit__);
}

float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9/5 + __fahrenheit__);
}

float celsius_to_kelvin(float celsius)
{
    return (celsius + __kelvin__);
}

float fahrenheit_to_celsius(float fahrenheit)
{
    return (fahrenheit - __fahrenheit__ * 0.5556);
}

float fahrenheit_to_kelvin(float fahrenheit)
{
    return ((fahrenheit - __fahrenheit__) * 5/9 + __kelvin__);
}