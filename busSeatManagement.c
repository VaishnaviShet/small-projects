/* This project deals with the working of bus-seat managment. 
It calculates the total passengers boarded in the bus in one round, along with total revenue earned.   */


#include <stdio.h>

void main(){
	int no_of_buses = 4, fare = 5, no_of_stops = 6, max_bus_limit = 10;
	int total_revenue =0, no_of_boarding, total_passengers=0;
	int i,j, k, l, capacity, temp_location=0, y;
	
	int waiting_passengers;
	int *arr;
	
	for(i=0; i<=max_bus_limit; i++){
		arr[i] = 0;
	}
	
	printf("Current bus status : \n");
	for(i=0;i<=max_bus_limit; i++){
		printf("%d ", arr[i]);
	}	

	printf("\n");
	
	capacity = max_bus_limit;
	printf("______________________________________________________________________________________\n\n\n");
	for(i=1; i<=no_of_stops;i++){
		
		for(l=0; l<max_bus_limit; l++){
			if(i == arr[l]){
				arr[l]=0;
				capacity++;
			}	
		}	
		
		printf("\n\t\tStop %d: \n", i);		
		if(i<no_of_stops){
			printf("Enter the number of waiting passengers:  ");
			scanf("%d", &waiting_passengers);
			
			printf("BEFORE BOARDING , The space available in the bus %d \n ", capacity );
			if(waiting_passengers>=capacity){
				no_of_boarding = capacity;
				total_passengers+=no_of_boarding;
				capacity = 0;
			}
			else{			//if(waiting_passengers[i]<capcity)
				no_of_boarding = waiting_passengers; 
				capacity-=no_of_boarding;                //capacity-=boarding_passengers[i];
				total_passengers+=no_of_boarding;
			}
			
			printf("NO of people boarding the bus %d\n  ", no_of_boarding);
			printf("AFTER BOARDING, The space available in the bus %d \n", capacity );
			
			//people boarding into the bus
			for(j=0; j<no_of_boarding; j++){
			
				printf("Enter the stop of each passenger: ");
				scanf("%d", &temp_location);
				
				while(temp_location <=i || temp_location >no_of_stops){
					printf("Invalid stop. ENTER STOP AGAIN!!  ");	
					scanf("%d", &temp_location);
				}
				
				for(k=0; k<max_bus_limit; k++ ){
					if(arr[k] == 0){
						arr[k] = temp_location;
						total_revenue += (temp_location-i)*fare;
						break;
					}
				}
				
			}
		}//if
		printf("Current people in the bus : \n");
			for(y=0; y<10; y++){
				printf("%d ", arr[y]);
			}
		printf("\n");
			
		printf("______________________________________________________________________________________\n\n");
	}
	
	
	printf("Total fare : %d", total_revenue);
	printf("Total people travelled : %d", total_passengers);
}
