#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**< Deklaretioner af alle funktionerne */
void FloydsTriangle();

int main()
{
    FloydsTriangle();

    return 0;
}

/********************************************
 *  Beskrivelse: Spørger efter hvor mange   *
 *  rækker floyds trekanten skal have og    *
 *  Tegner Floyds trekant:                  *
 *  1                                       *
 *  2 3                                     *
 *  4 5 6                                   *
 *  Men også på hovede                      *
 *  4 5 6                                   *
 *  2 3                                     *
 *  1                                       *
 ********************************************/
void FloydsTriangle()
{
    int numOfRows;
    int rowNum = 1;
    int number = 1;

    //spørger efter antal rækker floyds trekant skal have
    printf("Indtast antal raekker skal vaere et heltal: ");
    scanf("%d", &numOfRows);
    printf("\n");

    //Tegner Floyds trekanten
    for(int i = 0; i < numOfRows; i++){
        for(int j = 0; j < rowNum; j++){
            printf("%d \t",number);
            number++;
        }
        printf("\n");
        rowNum++;
    }

    printf("\n\n");

    rowNum = numOfRows;

    //Tegner Floyds trekant på hovede
    for(int i = 0; i < numOfRows; i++){
        number = ((rowNum*rowNum-(rowNum-2))/2);
        for(int j = 0; j < rowNum; j++){
            printf("%d \t",number);
            number++;
        }
        printf("\n");
        rowNum--;
    }
}

