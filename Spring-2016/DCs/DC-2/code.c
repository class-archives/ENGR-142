#pragma config(Sensor, S1, sonarSensor, sensorSONAR)

task main()
{
		//define variables representing design specifications
		const float maxDistance = 15.0;
		const int maxMotorPower = 25;

		//define other useful variables
		int currentDistance = 10;
		int setMotorPower = 10;

		do{
			//read in currentDistance to object in front, correcting for sensor error
			currentDistance = SensorValue[sonarSensor];
			//if it is a safe distance away, run at maximum speed
			if(currentDistance > maxDistance){
				setMotorPower = maxMotorPower;
			}
			else{
				//set motor power to be proportional to the current distance versus the safety distance
				setMotorPower = (maxMotorPower * (1 - ((maxDistance - currentDistance) / maxDistance)));

			}
			//set new motor speed (had to reverse direction because of robot design)
			motor[motorA] = -setMotorPower;
			motor[motorB] = -setMotorPower;

		}while(currentDistance > 0); //loop until the program is stoppped

}
