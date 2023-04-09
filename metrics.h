#ifndef METRICS_H
# define METRICS_H
# define __pico__ 0.000000000001
# define __nano__ 0.000000001
# define __micro__  0.000001
# define __mili__  0.001
# define __centi__  0.01
# define __deci__  0.1
# define __zero__  1
# define __deca__  10
# define __hecto__  100
# define __kilo__  1000
# define __mega__  1000000
# define __giga__  1000000000
# define __tera__  1000000000000
# define __peta__  1000000000000000

# define __inch__  0.0254
# define __feet__  0.3048
# define __mile__  1609.344
# define __yard__  0.9144
# define __pound__  453.592
# define __stone__  6350.29318
# define __gallon__  3.785411784

# define __kelvin__  273.15
# define __celsius__  0
# define __fahrenheit__  32

// Temperator conversion
float kelvin_to_celsius(float kelvin);
float kelvin_to_fahrenheit(float kelvin);
float celsius_to_fahrenheit(float celsius);
float celsius_to_kelvin(float celsius);
float fahrenheit_to_celsius(float fahrenheit);
float fahrenheit_to_kelvin(float fahrenheit);

// Inch to funtions
double inch_to_picometer(double inch);
double inch_to_nanometer(double inch);
double inch_to_micrometer(double inch);
double inch_to_milimeter(double inch);
double inch_to_centimeter(double inch);
double inch_to_decimeter(double inch);
double inch_to_meter(double inch);
double inch_to_decameter(double inch);
double inch_to_hectometer(double inch);
double inch_to_kilometer(double inch);
double inch_to_megameter(double inch);
double inch_to_gigameter(double inch);
double inch_to_terameter(double inch);
double inch_to_petameter(double inch);

// Feet to funtions
double feet_to_picometer(double feet);
double feet_to_nanometer(double feet);
double feet_to_micrometer(double feet);
double feet_to_milimeter(double feet);
double feet_to_centimeter(double feet);
double feet_to_decimeter(double feet);
double feet_to_meter(double feet);
double feet_to_decameter(double feet);
double feet_to_hectometer(double feet);
double feet_to_kilometer(double feet);
double feet_to_megameter(double feet);
double feet_to_gigameter(double feet);
double feet_to_terameter(double feet);
double feet_to_petameter(double feet);

// Mile to functions
double mile_to_picometer(double mile);
double mile_to_nanometer(double mile);
double mile_to_micrometer(double mile);
double mile_to_milimeter(double mile);
double mile_to_centimeter(double mile);
double mile_to_decimeter(double mile);
double mile_to_meter(double mile);
double mile_to_decameter(double mile);
double mile_to_hectometer(double mile);
double mile_to_kilometer(double mile);
double mile_to_megameter(double mile);
double mile_to_gigameter(double mile);
double mile_to_terameter(double mile);
double mile_to_petameter(double mile);

// Yard to functions
double yard_to_picometer(double yard);
double yard_to_nanometer(double yard);
double yard_to_micrometer(double yard);
double yard_to_milimeter(double yard);
double yard_to_centimeter(double yard);
double yard_to_decimeter(double yard);
double yard_to_meter(double yard);
double yard_to_decameter(double yard);
double yard_to_hectometer(double yard);
double yard_to_kilometer(double yard);
double yard_to_megameter(double yard);
double yard_to_gigameter(double yard);
double yard_to_terameter(double yard);
double yard_to_petameter(double yard);

// Pound to functions
double pound_to_picogramm(double pound);
double pound_to_nanogramm(double pound);
double pound_to_microgramm(double pound);
double pound_to_miligramm(double pound);
double pound_to_centigramm(double pound);
double pound_to_decigramm(double pound);
double pound_to_gramm(double pound);
double pound_to_decagramm(double pound);
double pound_to_hectogramm(double pound);
double pound_to_kilogramm(double pound);
double pound_to_megagramm(double pound);
double pound_to_gigagramm(double pound);
double pound_to_teragramm(double pound);
double pound_to_petagramm(double pound);

// Stone to functions
double stone_to_picogramm(double stone);
double stone_to_nanogramm(double stone);
double stone_to_microgramm(double stone);
double stone_to_miligramm(double stone);
double stone_to_centigramm(double stone);
double stone_to_decigramm(double stone);
double stone_to_gramm(double stone);
double stone_to_decagramm(double stone);
double stone_to_hectogramm(double stone);
double stone_to_kilogramm(double stone);
double stone_to_megagramm(double stone);
double stone_to_gigagramm(double stone);
double stone_to_teragramm(double stone);
double stone_to_petagramm(double stone);

// Gallon to functions
double gallon_to_picolitre(double gallon);
double gallon_to_nanolitre(double gallon);
double gallon_to_microlitre(double gallon);
double gallon_to_mililitre(double gallon);
double gallon_to_centilitre(double gallon);
double gallon_to_decilitre(double gallon);
double gallon_to_litre(double gallon);
double gallon_to_decalitre(double gallon);
double gallon_to_hectolitre(double gallon);
double gallon_to_kilolitre(double gallon);
double gallon_to_megalitre(double gallon);
double gallon_to_gigalitre(double gallon);
double gallon_to_teralitre(double gallon);
double gallon_to_petalitre(double gallon);



// From to Inch functions
double inch_from_picometer(double picometer);
double inch_from_nanometer(double nanometer);
double inch_from_micrometer(double micrometer);
double inch_from_milimeter(double milimeter);
double inch_from_centimeter(double centimeter);
double inch_from_decimeter(double decimeter);
double inch_from_meter(double meter);
double inch_from_decameter(double decameter);
double inch_from_hectommeter(double hectometer);
double inch_from_kilometer(double kilometer);
double inch_from_megameter(double megameter);
double inch_from_gigameter(double gigameter);
double inch_from_terameter(double terameter);
double inch_from_petameter(double petameter);

// From to Feet functions
double feet_from_picometer(double picometer);
double feet_from_nanometer(double nanometer);
double feet_from_micrometer(double micrometer);
double feet_from_milimeter(double milimeter);
double feet_from_centimeter(double centimeter);
double feet_from_decimeter(double decimeter);
double feet_from_meter(double meter);
double feet_from_decameter(double decameter);
double feet_from_hectommeter(double hectometer);
double feet_from_kilometer(double kilometer);
double feet_from_megameter(double megameter);
double feet_from_gigameter(double gigameter);
double feet_from_terameter(double terameter);
double feet_from_petameter(double petameter);

// From to Mile functions
double mile_from_picometer(double picometer);
double mile_from_nanometer(double nanometer);
double mile_from_micrometer(double micrometer);
double mile_from_milimeter(double milimeter);
double mile_from_centimeter(double centimeter);
double mile_from_decimeter(double decimeter);
double mile_from_meter(double meter);
double mile_from_decameter(double decameter);
double mile_from_hectommeter(double hectometer);
double mile_from_kilometer(double kilometer);
double mile_from_megameter(double megameter);
double mile_from_gigameter(double gigameter);
double mile_from_terameter(double terameter);
double mile_from_petameter(double petameter);

// From to Yard functions
double yard_from_picometer(double picometer);
double yard_from_nanometer(double nanometer);
double yard_from_micrometer(double micrometer);
double yard_from_milimeter(double milimeter);
double yard_from_centimeter(double centimeter);
double yard_from_decimeter(double decimeter);
double yard_from_meter(double meter);
double yard_from_decameter(double decameter);
double yard_from_hectommeter(double hectometer);
double yard_from_kilometer(double kilometer);
double yard_from_megameter(double megameter);
double yard_from_gigameter(double gigameter);
double yard_from_terameter(double terameter);
double yard_from_petameter(double petameter);

// From to Pound functions
double pound_from_picogramm(double picogramm);
double pound_from_nanogramm(double nanogramm);
double pound_from_microgramm(double microgramm);
double pound_from_miligramm(double miligramm);
double pound_from_centigramm(double centigramm);
double pound_from_decigramm(double decigramm);
double pound_from_gramm(double gramm);
double pound_from_decagramm(double decagramm);
double pound_from_hectomgramm(double hectogramm);
double pound_from_kilogramm(double kilogramm);
double pound_from_megagramm(double megagramm);
double pound_from_gigagramm(double gigagramm);
double pound_from_teragramm(double teragramm);
double pound_from_petagramm(double petagramm);

// From to stone functions
double stone_from_picogramm(double picogramm);
double stone_from_nanogramm(double nanogramm);
double stone_from_microgramm(double microgramm);
double stone_from_miligramm(double miligramm);
double stone_from_centigramm(double centigramm);
double stone_from_decigramm(double decigramm);
double stone_from_gramm(double gramm);
double stone_from_decagramm(double decagramm);
double stone_from_hectomgramm(double hectogramm);
double stone_from_kilogramm(double kilogramm);
double stone_from_megagramm(double megagramm);
double stone_from_gigagramm(double gigagramm);
double stone_from_teragramm(double teragramm);
double stone_from_petagramm(double petagramm);

// From gallon functions
double gallon_from_picolitre(double picolitre);
double gallon_from_nanolitre(double nanolitre);
double gallon_from_microlitre(double microlitre);
double gallon_from_mililitre(double mililitre);
double gallon_from_centilitre(double centilitre);
double gallon_from_decilitre(double decilitre);
double gallon_from_litre(double litre);
double gallon_from_decalitre(double decalitre);
double gallon_from_hectomlitre(double hectolitre);
double gallon_from_kilolitre(double kilolitre);
double gallon_from_megalitre(double megalitre);
double gallon_from_gigalitre(double gigalitre);
double gallon_from_teralitre(double teralitre);
double gallon_from_petalitre(double petalitre);

#endif