/*************************a2.c****************************
Student Name: Jacen Lougheed            Student Number:  0850947
Date: 02-10-13                          Course Name: CIS1500
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
     1) I have read and understood the University policy on academic integrity;
     2) I have completed the Computing with Integrity Tutorial on Moodle; and
     3) I have achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and all material
(data, images, ideas or words) that I have used, whether directly quoted or paraphrased.
Furthermore, I certify that this assignment was prepared by me specifically for this course.
****************************************************************************/
#include <stdio.h>

int main() {
	
	/* Initialising variables*/
	
	char ownerFName[10];
	char ownerLName[20];
	int dogWeight;
	char dogName[10];
	int stayLength;
	
	int totalCost;
	int costPDay;
	
	/*Asking for and getting appropriate user input*/
	printf("Please enter the owner's name: ");
	scanf("%s %s", ownerFName, ownerLName);
	
	printf("Please enter the dog's name: ");
	scanf("%s", dogName);
	
	printf("Please enter the dog's weight: ");
	scanf("%d", &dogWeight);
	
	printf("Please enter the length of stay: ");
	scanf("%d", &stayLength);

	/*Calculates the cost per day*/
	if(dogWeight < 25) {
		
		costPDay = 25;
		
	} else if(dogWeight > 80) {
		
		costPDay = 35;
		
	} else {
		
		costPDay = 30;
		
	}
	
	/*Applies the cost per day to get the total cost for the stay*/
	totalCost = costPDay * stayLength;
	
	/*Prints final output*/
	printf("Owner name: %s %s\n", ownerFName, ownerLName);
	printf("Dog name: %s\n", dogName);
	printf("Dog weight: %dlbs\n", dogWeight);
	printf("Stay Length: %d days\n", stayLength);
	printf("The cost per day is: %d\n", costPDay);
	printf("The total cost of the visit is: $%d\n", totalCost);
	
	/*Ends program*/
	return (0);
}
