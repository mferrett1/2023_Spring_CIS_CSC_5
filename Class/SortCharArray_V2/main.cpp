/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 4, 2023, 11:03 AM
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

#include <cstring>
#include <iostream>
using namespace std;

int main(){
    //Declare static arrays
    const int ROWS=2,COLS=20;
    char str1[COLS] = "Metallica";
    char str2[COLS] = "Megadeth";
    char words[ROWS][COLS];
    
    //Initialize the array
    strcpy(words[0],str1);
    strcpy(words[1],str2);
    
    //Output the Array
    cout<<"Before the Sort"<<endl;
    for(int row=0;row<ROWS;row++){
        cout<<words[row]<<endl;
    }

  // compare str1 and str2 lexicographically
  //After the sort
    if(strcmp(words[0], words[1])>0){
        char temp[COLS];
        strcpy(temp,words[0]);//temp=str1
        strcpy(words[0],words[1]);//str1=str2
        strcpy(words[1],temp);//str2=temp
   }
  
   //Perform swap
    cout<<endl<<"After the Sort"<<endl;
   cout<<words[0]<<endl;
   cout<<words[1]<<endl;

  return 0;
}