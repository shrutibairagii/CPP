# include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin>>num1; /* '>>' is called Extraction operator */

    cout<<"Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin>>num2; /* '>>' is called Extraction operator */

    cout<<"The sum is "<< num1+num2;

    return 0;
}

/*In this piece of code, we have declared two integer variables "num1" and "num2". /n
Firstly we used "cout" to print "Enter the value of num1:" as it is on the screen,/n
 and then we used "cin" to take the input in "num1" at run time from the user.

Secondly, we used "cout" to print "Enter the value of num2:" as it is on the screen,/n
 and then we used "cin" to take the input in "num2" at run time from the user.

In the end, we used "cout" to print "The sum is" as it is on the screen and also gave the/n
 literal "num1+num2" which will add the values of both variables and print it on the screen.*/