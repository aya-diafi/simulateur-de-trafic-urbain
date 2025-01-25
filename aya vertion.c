#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  المركبة
typedef struct {
    int id;                   
    char type[50];          
    char start[50]; 
    char destination[50];  
} Vehicle;


Vehicle vehicles[3];
int vehicleCount = 0;

void addVehicle() {
    if (vehicleCount < 3) {
        printf(" identification number ");
        scanf("%d", &vehicles[vehicleCount].id);
        printf("enter the type:");
        scanf("%s", vehicles[vehicleCount].type);
        printf("enter Enter the car's starting location:");
        scanf("%s", vehicles[vehicleCount].start);
        printf("enter Enter the vehicle's arrival location: ");
        scanf("%s", vehicles[vehicleCount].destination);
        
        vehicleCount++;
        printf("\n vehicule added\n");
        
    } else {

        printf("\nMaximum capacity reached.\n");
    }
}