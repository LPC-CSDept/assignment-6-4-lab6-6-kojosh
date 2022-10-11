//		Make a program that find the prime numbers according to two user inputs [begin, end]
//		begin and end must be positive integers.
//			if begin == end, getListprime(int) function is called with default arguments [begin, 100]
//			if begin > end,  getListprime(  ) function is called with default arguments [0, 100]
//			if begin < end, getListprime(int, int) fuction is called with the range from begin to end.
//		example)
//			user input = 20, 20 , call getListprime( 20 ) // the second parameter is default.[20,100]
//			user input = 40, 20 , call getListprime(   ) // the both parameters are default. [0,100]
//			user input = 20, 50,  call getListprime(20, 50) // call the function with actual arguments


#include <iostream>
#include <iomanip>
using namespace std;

//----------
// Make a line for Function Prototype for getListprime Here
void printPrimeList(int a, int b){
    int flag;
    cout << " Prime numbers between " << a << " and " << b << ":" << endl;\
    for(int i=a; i <=b; i++){
        if(i == 1 || i == 0)
           continue;
        flag =1;
        for(int j =2; j<= (i/2); ++j){
        // for(int j =2; j<= (i/j); ++j){
			// for (int j=2; j<i; j++) 
            if(i % j == 0){
                flag =0;
                break;
            }
        } 
        if (flag == 1){
            cout << i << " ";
        }   
    }
}

void getListprime(int begin){
    printPrimeList(begin, 100);
}

void getListprime(){
    printPrimeList(0,100);
}

void getListprime(int begin, int end){
    printPrimeList(begin, end);
}


int main()
{
	int begin, end;
	cout << "Enter your input (two integers for range) \n";
	cin >> begin >> end;
    if(begin <= 0 || end <= 0){
        cout << "Invalid!";
    }
	if (begin < end)
		getListprime(begin, end);
	else if (begin > end)
		getListprime();
	else
		getListprime(begin);
}