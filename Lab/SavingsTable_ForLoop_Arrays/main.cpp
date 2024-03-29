/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 24th, 2022, 12:15 AM
 * Purpose:  Savings Table
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const char PERCENT=100;//Percent Conversion

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const int SIZE=150;//Size to allocate Array
    float   balance,//Balance to start $'s
            intRate,//Interest in %
            savings[SIZE];//Savings accumulated in $'s
    int     initD8, //Initial Date/Year
            numCmpd;//Number of years, compounding periods
    
    //Initial Variables
    balance=1e2f;//$100
    intRate=6.0/PERCENT;//6 Percent
    initD8=2022;//This year
    numCmpd=24;//12 Years
    savings[0]=balance;
    
    //Map the Inputs to the Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"      $ "<<savings[0]<<"  = Initial Balance in $'s"<<endl;
    cout<<"         "<<intRate*PERCENT<<"%  = Interest Rate %"<<endl;
    cout<<endl;
    cout<<"              Balance      Interest"<<endl;
    cout<<"Year  Date  Beg of Year  End of Year"<<endl;
    for(int year=0;year<=numCmpd;year++){
        float interest=savings[year]*intRate;
        cout<<setw(4)<<year<<setw(6)<<initD8
                <<"   $"<<setw(7)<<savings[year]<<"      $"<<setw(7)<<interest<<endl;
        initD8++;
        savings[year+1]=savings[year]+interest;
    }
    
    //Display the Inputs and Outputs

    //Exit the code
    return 0;
}