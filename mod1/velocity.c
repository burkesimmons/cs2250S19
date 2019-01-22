#include <stdio.h>

int main()
{
	//1) Ask for distance in meters
	
	//2) Ask for time in seconds
	
	//3) Calculate and Display the velocity in km/hr
	
	int dist = 0;
	int time = 0;
	int velocity = 0;
	int kmsVelocity = 0;

	printf("Input a distance in meters.\n");
	scanf("%d", &dist);

	printf("Input a time in seconds.\n");
	scanf("%d", &time);

	velocity = dist/time;

	printf("The velocity in meters per second is %dm/s\n", velocity);
	
	//1 km = 1000 meters
	//1 hr = 3600 seconds
	//TODO: Fix the coredum related to Floating point
	kmsVelocity = (dist/1000)/(time/3600);

	printf("The velocity in kilometers per second is %dkm/s\n", dist / 1000/time);
	printf("Velocity (integer) is %d km/hr\n", kmsVelocity);

	return 0;
}
