/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void markSrt(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=1000;
    int array[SIZE];
    int utilize;
    
    //Initialize or input i.e. set variable values
    cout<<"Choose the Array Size to Sort"<<endl;
    do{
        cout<<"Maximum size = 1000"<<endl;
        cin>>utilize;
    }while(utilize>SIZE);
    fillAry(array,utilize);
    
    //Display the outputs
    prntAry(array,utilize,10);
    
    //Sorted List
    markSrt(array,utilize);
    
    //Display the outputs
    prntAry(array,utilize,10);

    //Exit stage right or left!
    return 0;
}

void markSrt(int a[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]  Just 2 digit numbers
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}