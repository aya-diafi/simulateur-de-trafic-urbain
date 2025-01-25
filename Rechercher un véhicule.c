// دالة للبحث عن مركبة
void searchVehicle() {
    int id;
    printf("\nEnter the vehicle identification number you want to search for: ");
    scanf("%d", &id);

    for (int i = 0; i < vehicleCount; i++) {
        if (vehicles[i].id == id) {
            printf("\nVehicle found:\n");
            printf("Identification number: %d\n", vehicles[i].id);
            printf("type: %s\n", vehicles[i].type);
            printf("starting location: %s\n", vehicles[i].start);
            printf("arrival location: %s\n",vehicles[i].destination);
        }
    else{
        printf("\nNo vehicle was found with this identification number.\n");}
        
    }        
}
