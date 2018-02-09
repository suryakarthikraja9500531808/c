#include <stdio.h>
#include <conio.h>
 oid main()
 {
    int maxElement, inputArray[500], maxElementPosition;
    int elementCount, counter;
     
    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);
     
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
    /* Initializing maxElement and maxElementPosition 
     * with first element of inputArray and zero 
     * respectively
     */
    maxElement = inputArray[0];
    maxElementPosition = 0;
     
    /* Compare each element of input array with maxElement, and
       if it is greater than maxElement update maxElement and 
       maxElementPosition
    */
    for(counter = 1; counter < elementCount; counter++){
        if(inputArray[counter] > maxElement){
            maxElement = inputArray[counter];
            maxElementPosition = counter;
        }
    }
    /* Print Maximum element and it's position in array */
    printf("Maximum element in array is %d at index %d",
        maxElement, maxElementPosition);
     
    getch();
    
}
