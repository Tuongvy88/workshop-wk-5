//Including the file in which methods are written

#include "function-1-1.cpp"
using namespace std;

int main(){

//Calling the function to read values
int* arr=readNumbers();

//Calling the function to display numbers
printNumbers(arr,10);
return 0;
}