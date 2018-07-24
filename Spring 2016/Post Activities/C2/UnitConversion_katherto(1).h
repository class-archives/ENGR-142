/* Assignment: C2 Post Activity, Task 1
 * File:    UnitConversion_katherto.h
 * Date:    30 January 2016
 * By:      Kathryn Atherton
 *          katherto
 * Section: 03, 1:30-3:20
 * Team:    45 
 *
 * ELECTRONIC SIGNATURE
 * KATHRYN ATHERTON
 *
 * The electronic signature above indicates that the
 * program submitted for evaluation is my individual work
 * and I have a general understanding of all aspects of 
 * its development and execution.
 *
 * A BRIEF DESCRIPTION OF WHAT THE PROGRAM OR FUNCTION 
 * DOES
 * This is a library of mathematical functions that 
 * perform unit conversions so that they are handy and 
 * available to use with large programs. 
 */

 //FUNCTION PROTOTYPES
 double Cels2Fahr(double celcius);
 double Fahr2Cels(double fahrenheit);
 double Cels2Kel(double celcius);
 double Fahr2Ran(double fahrenheit);
 double Fahr2Kel(double fahrenheit);
 double M2Ft(double meters);
 double Km2Mi(double kilometers);
 double Mi2M(double miles);
 double Km2Nmi(double kilometers);
 double Ag2nm(double angstroms);
 double Ft2M(double feet);
 double Acre2Hectare(double acres);
 double SqKm2SqMi(double squareKilometers);
 double SqMi2SqKm(double squareMiles);
 double Hectare2SqKm(double hectare);
 double Nm2Invcm(double nanometers);
 double J2Erg(double joules);
 double J2BTU(double joules);
 double Wv2E(double wavelength);
 double Watt2BTUs(double watts);
 
 
 
 //TEMPERATURE CONVERSIONS
 //Celsius to Fahrenheit (Cels2Fahr())
 double Cels2Fahr(double celcius){
	 double fahrenheit;
	 
	 fahrenheit = celcius * (9.0 / 5.0) + 32;
	 
	 return fahrenheit;
 }
 //Fahrenheit to Celsius (Fahr2Cels())
 double Fahr2Cels(double fahrenheit){
	 double celcius;
	 
	 celcius = (fahrenheit - 32) / (9.0 / 5.0);
	 
	 return celcius;
 }
 //Celsius to Kelvin (Cels2Kel())
 double Cels2Kel(double celcius){
	 double kelvin;
	 
	 kelvin = celcius + 273.15;
	 
	 return kelvin;
 }
 //Fahrenheit to Rankine (Fahr2Ran())
 double Fahr2Ran(double fahrenheit){
	 double rankine;
	 
	 rankine = fahrenheit + 459.67;
	 
	 return rankine;
 }
 
 //Fahrenheit to Kelvin (Fahr2Kel())
 double Fahr2Kel(double fahrenheit){
	 double kelvin;
	 
	 kelvin = 5 * (fahrenheit - 32) / 9 + 273.15;
	 
	 return kelvin;
 }
 
 //LENGTH CONVERSIONS
 //Meters to Feet (M2Ft())
 double M2Ft(double meters){
	 double feet;
	 
	 feet = meters * 3.2808;
	 
	 return feet;
 }
 //Kilometers to Miles (Km2Mi())
 double Km2Mi(double kilometers){
	 double miles;
	 
	 miles = kilometers * 0.62137;
	 
	 return miles;
 }
 //Miles to Meters (Mi2m())
 double Mi2M(double miles){
	 double meters;
	 
	 meters = miles / 0.00062137;
	 
	 return meters;
 }
 //Kilometers to Nautical Miles (Km2NMi())
 double Km2Nmi(double kilometers){
	 double nauticalMiles;
	 
	 nauticalMiles = kilometers * 0.540;
	 
	 return nauticalMiles;
 }
 //Angstroms to nanometers (Ag2nm())
 double Ag2nm(double angstroms){
	 double nanometers;
	 
	 nanometers = Angstroms * 0.1;
	 
	 return nanometers;
 }
 //Feet to Meters (Ft2M())
 double Ft2M(double feet){
	 double meters;
	 
	 meters = feet / 3.2808;
	 
	 return meters;
 }
 
 //AREA CONVERSIONS
 //Acres to Hectares(Acre2Hectare())
 double Acre2Hectare(double acres){
	 double hectares;
	 
	 hectares = acres / 2.4711;
	 
	 return hectares;
 }
 //Sq. Km to Sq. Mile (SqKm2SqMi())
 double SqKm2SqMi(double squareKilometers){
	 double squareMiles;
	 
	 squareMiles = squareKilometers * 0.38610;
	 
	 return squareMiles;
 }
 //Sq. Mile to Sq. Km (SqMi2SqKm())
 double SqMi2SqKm( double squareMiles){
	 double squareKilometers;
	 
	 squareKilometers = squareMiles / 0.38610;
	 
	 return squareKilometers;
 } 
 //Hecare to Sq. Km (Hectare2SqKm())
 double Hectare2SqKm(double hectare){
	 double squareKilometers;
	 
	 squareKilometers = hectares * 0.01;
	 
	 return squareKilometers;
 }
 
 //SPECIAL UNIT CONVERSIONS
 //Nanometers to inverse centimeters(Nm2Invcm())
 double Nm2Invcm(double nanometers){
	 double inverseCentimeters;
	 
	 inverseCentimeters = 10000000.0 / nanometers;
	 
	 return inverseCentimeters;
 }
 //Joules ot Ergs (J2Erg())
 double J2Erg(double joules){
	 double ergs;
	 
	 ergs = joules * 0.0000001;
	 
	 return ergs;
 }
 // J to BTU (J2BTU())
 double J2BTU(double joules){
	 double britishThermalUnits;
	 
	 britishThermalUnits = joules / 1055.05585262; 
	 
	 return britishThermalUnits;
 }
 //Wavelength (in nm) to Energy (in KeV) (Wv2E())
 double Wv2E(double wavelength){
	 double energy;
	 double h = 0.0000000000000000000000000000000006626; //Planck's Constant
	 double c = 299800000; //Speed of Light
	 
	 energy = h * c / wavelength;
	 
	 return energy;
 }
 //Watts to British Thermal Units per Second (Watts2BTUs())
 double Watt2BTUs(double watts){
	 double britishThermalUnitsPerSec;
	 
	 britishThermalUnitsPerSec = watts / 1055.055852;
	 
	 return britishThermalUnitsPerSec;
 }