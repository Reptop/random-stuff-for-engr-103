#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

//This is the dataset that you will process.
const int TEMPERATUREDATA[150] = {-138,-473,190,-441,1263,1426,40,926,672,1236,711,868,67,-71,1282,1030,362,623,-433,635,1429,1302,-478,558,569,-333,893,-44,511,-458,-271,873,-79,419,1284,37,698,-176,-185,-130,-87,1026,-409,480,1456,1373,362,670,496,781,-195,425,584,-173,-164,5,346,1229,813,1357,-376,1395,1082,45,314,867,934,-136,-457,1250,587,308,776,678,1288,1084,903,151,254,-101,1432,560,1176,868,1239,-488,-274,86,-406,1039,295,70,934,-122,967,101,-403,402,817,-8,152,256,801,-220,-214,941,1365,1189,-56,119,-60,229,-469,-383,-403,1271,-19,175,209,427,67,1356,997,-147,86,465,806,183,-281,124,1028,371,1232,329,1003,-481,-230,868,1208,215,-160,-351,1296,223,118,-255,346,951,421,1055};


/*

* void printHistogram()

* float *data : Pointer to an array of floats that will be processed for the histogram

* int size : The number of elements to process in the array (starts with 0 always)

* int range : Largest number for the histogram scale

* int bin_size : How big each bin of the histogram will be

* returns nothing but prints a lot of info.

*/

void printHistogram(int data[], int size, int range, int bin_size) {

    int histogram[range / bin_size];

    for (int i = 0; i < range / bin_size; i++) {

        histogram[i] = 0;

    }

    for (int i = 0; i < size; i++) {

        if (data[i] < range) {

            histogram[(int)data[i] / bin_size]++;

        }

    }

    for (int i = 0; i < range / bin_size; i++) {

        printf("%d - %d: ", i * bin_size, (i + 1) * bin_size - 1);

        for (int j = 0; j < histogram[i]; j++) {

            printf("*");

        }

        printf("\n");

    }

}


float makeVoltage(int value){

    if (value < 0 || value > 1023) //Checks if the value is in range

        return -1;

    return (5.0/1024 * value); //calculates the voltage based on a 10 bit input int

}


float makeCelsius(int value){

    if (value < 0 || value > 1023) //Checks if the value is in range

        return -1;

    return (.01 * (value - 511)); //calculates the degrees in Celsius based on a 10 bit input int

}

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main() {

  int filteredData[150];

  //init everything to 0;
  for (int i = 0; i < 150; ++i) {
    filteredData[i] = 0;
  }

  for (int i = 0; i < 150; ++i) {
    if (TEMPERATUREDATA[i] >= 0 && TEMPERATUREDATA[i] <= 1023) {
      filteredData[i] = TEMPERATUREDATA[i];
    }
    else {
      continue;
    }
  }

  int initialSize = sizeof(filteredData)/sizeof(filteredData[0]);
  int trueSize = 0;

  for (int i = 0; i < initialSize; ++i) {
    if (filteredData[i] != 0) {
      ++trueSize;
    }
    else {
      continue;
    }
  }

  bubbleSort(filteredData, initialSize);

  for (int i = 0; i < trueSize; ++i) {
    printf("Values in Celsius: %f", makeCelsius(filteredData[i]));
    printf("\n");
  }
  for (int i = 0; i < trueSize; ++i) {
    printf("Voltage: %f", makeVoltage(filteredData[i]));
    printf("\n");
  }

  printHistogram(filteredData, trueSize, 1003, 15);


  printf("Size of array is %d", trueSize);

  return 0;
}


