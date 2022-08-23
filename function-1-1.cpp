#include<iostream>

using namespace std;

//Function for reading 10 numbers and storing into dynamic array of 10 integers

int *readNumbers(){
int *array;
array = new int[10];
for(int i=0;i<10;i++)
cin>>array[i];
return array;
}

//Displaying the numbers along with indexes stored in dynamic array

void printNumbers(int *numbers,int length){
for(int i=0;i<length;i++)
cout<<i<<" "<<numbers[i]<<"\n";
}