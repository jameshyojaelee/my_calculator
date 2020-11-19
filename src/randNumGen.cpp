#include <iostream>

using namespace std;

//custom pseudo-number generator
int randNumGen (int lowerBound, int upperBound){
    srand(time(NULL));
    int result;

    //when upperbound is smaller than lowerbound, error
    if(lowerBound > upperBound){
        cout << "INVALID INPUT: ";
        cout << "Your Lower Bound is larger than your Upper Bound"<< endl;
        return NULL;
    }

    //when both lowerbound and upperbound are negative
    if(lowerBound < 0 && upperBound < 0){
        //flip the bounds first
        lowerBound = lowerBound * (-1);
        upperBound = upperBound * (-1);

        //generate rand num
        result = lowerBound + (rand() % (upperBound - lowerBound + 1));

        //flip the number over
        result = result * (-1);
        return result;
    }

    //when only lowerbound is negative
    if(lowerBound < 0 &&  upperBound >0){
        result = lowerBound + (rand() % (upperBound - lowerBound + 1));
        return result;
    }

    //when both lowerbound and upperbound are positive
    if(lowerBound > 0 && upperBound > 0){
        result = lowerBound + (rand() % (upperBound - lowerBound + 1));
        return result; 
    }

}