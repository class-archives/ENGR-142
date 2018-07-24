/* Assignment: Project 2 Code
 * File:    Proj2_SolarHydro_Team45.c
 * Date:    25 March 2016
 * By:      Kathryn Atherton	
 *          katherto
 *          Joshua Hahn
 *          hahn28
 *          Hannah Mackin Schenck
 *          hmackins
 *         
 * Section: 03, 1:30-3:30
 * Team:    45 
 *
 * ELECTRONIC SIGNATURE
 * Kathryn Atherton
 * Joshua Hahn
 * Hannah Mackin Schenck
 *
 * The electronic signatures above indicate that the
 * program submitted for evaluation is the combined effort
 * of all team members and that each member of the team was
 * an equal participant in its creation.  In addition, each
 * member of the team has a general understanding of all
 * aspects of the program development and execution.
 *
 * A BRIEF DESCRIPTION OF WHAT THE PROGRAM OR FUNCTION DOES
 * This model provides estimates for a solar hydro  power 
 * storage plant. 
 */ 
 
 // Import Relevant Libraries
 #include <stdio.h>
 #include <math.h>
 
 // Define constants
 # define E_OUT 120    //MWh
 # define g 9.81       //m / sec^2
 # define density 1000 //kg / m^3
 # define PI 4 * atan(1)
 
 int main(void){	
	//define variables to be input
	double pipe_Diameter;         //m
	double pipe_f;				  //unitless
	double pipe_Length;           //m
	double fitting_k1;            //unitless
	double fitting_k2;            //unitless
	double fitting_k3;            //unitless
	double turbine_Flow;          //m^3 / s
	double turbine_Efficiency;    //unitless
	double pump_Flow;             //m^3 / s
	double pump_Efficiency;       //unitless
	double reservoir_Depth;       //m
	double reservoir_Elevation;   //m
	
	
	//prompt user for input
	printf("Pipe Inputs:\n");
	printf("Pipe Diameter (m): ");
	scanf("%lf", &pipe_Diameter);
	printf("Pipe Friction Factor: ");
	scanf("%lf", &pipe_f);
	printf("Pipe Length (m): ");
	scanf("%lf", &pipe_Length);
	
	printf("\nFitting Inputs:\n");
	printf("Bend Coefficient 1: ");
	scanf("%lf", &fitting_k1);
	printf("Bend Coefficient 2: ");
	scanf("%lf", &fitting_k2);
	printf("Bend Coefficient 3: ");
	scanf("%lf", &fitting_k3);
	
	printf("\nTurbine Inputs:\n");
	printf("Turbine Volumetric Flow (m^3/s): ");
	scanf("%lf", &turbine_Flow);
	printf("Turbine Efficiency: ");
	scanf("%lf", &turbine_Efficiency);
	
	printf("\nPump Inputs:\n");
	printf("Pump Volumetric Flow (m^3/s): ");
	scanf("%lf", &pump_Flow);
	printf("Pump Efficiency: ");
	scanf("%lf", &pump_Efficiency);
	
	printf("\nReservoir Inputs:\n");
	printf("Elevation of the Bottom of the Reservoir (m): ");
	scanf("%lf", &reservoir_Elevation);
	printf("Reservoir Depth (m): ");
	scanf("%lf", &reservoir_Depth);
	
	getchar();
	
	//Calculate the pipe area, effective elevation, 
	//and expected energy output in J
	double pipe_Area = PI * pow(pipe_Diameter / 2, 2);
	double effective_elevation = reservoir_Elevation + .5 * reservoir_Depth;
	double E_Out_J = E_OUT * 3.6 * pow(10, 9);
	
	//Calculate head losses on the way down from the reservoir
	double velocity_Down = turbine_Flow / pipe_Area;
	double friction_loss_down = pipe_f * pipe_Length * pow(velocity_Down, 2)
		/ (pipe_Diameter * 2 * g);
	double bend_loss_down = (fitting_k1 * pow(velocity_Down, 2) / (2 * g)) 
		+ (fitting_k2 * pow(velocity_Down, 2) / (2 * g))
		+ (fitting_k3 * pow(velocity_Down, 2) / (2 * g));
	
	//calculate mass needed to produce E_Out_J
	double mass = (E_Out_J / turbine_Efficiency) / (g * (effective_elevation 
		- bend_loss_down - friction_loss_down));
		
	//Calculate head losses on the way up
	double velocity_Up = pump_Flow / pipe_Area;
	double friction_loss_up = pipe_f * pipe_Length * pow(velocity_Up, 2) /
		 (pipe_Diameter * 2 * g);
	double bend_loss_up = (fitting_k1 * pow(velocity_Up, 2) / (2 * g))
		+ (fitting_k2 * pow(velocity_Up, 2) / (2 * g))
		+ (fitting_k3 * pow(velocity_Up, 2) / (2 * g));
		
	//calculate energy needed to pump water mass this high
	double E_In_J = mass * g * (effective_elevation + friction_loss_up 
		+  bend_loss_up) / pump_Efficiency;
		
	//convert to MWh
	double E_In = E_In_J / 3.6 / pow(10, 9);
	
	//Overall efficiency
	double total_efficiency = E_OUT / E_In;
	
	//Calculate area of reservoir needed
	double volume = mass / density;
	double area = volume / reservoir_Depth;
	
	//time to fill and empty
	double time_to_fill = volume / pump_Flow / 3600;
	double time_to_empty = volume / turbine_Flow / 3600;
	
	//Print results
	printf("\nMass of water stored (kg): %.2e\n", mass);
	printf("Required Energy Input (Mwh): %.2f\n", E_In);
	printf("Total Efficiency: %.2f\n", total_efficiency);
	printf("Surface Area of Reservoir (m^2): %.2e\n", area);
	printf("Time to Fill Reservoir (hours): %.2lf\n", time_to_fill);
	printf("Time to Empty Reservoir (hours): %.2lf\n", time_to_empty);
	
	return 0;
}