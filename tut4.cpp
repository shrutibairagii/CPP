# include<iostream>

using namespace std;
/*In this piece of code, we have initialized two "glo" variables. 1st variable is outside the /n
main function, and the 2nd variable is inside the main function. The value assigned to the "glo"/n
 variable outside the main function is 6, and the value assigned to the "glo" variable inside the main/n
  function is 9. One thing to note here is that in the main function, we have again assigned a value 78 to/n
   the variable "glo" which will update the previous value 9.

After initializing the "glo" variables, we had output the "glo" variables at two places in our program the 1st place/n
 is inside the main function, and the 2nd place is inside the sum function. The main thing to note here is that:

When the "cout" will run inside the sum function, it will check for "glo" variable value inside the sum function. As we/n
 can see that there is no "log" variable initialized inside the sum function, it will check for the "glo" variable outside /n
 of the sum function scope, which we call a global scope. As we can see, that "glo" function is initialized in the global /n
 scope with the value 6, so the sum function will take that value.   
When the "cout" will run inside the main function, it will check for "glo" variable value inside the main function first, /n
and as we can see that there is a "glo" variable initialized inside the main function scope which is a local scope,/n
 it will use that value.*/
int glo = 6;
void sum(){
    int a; 
    cout<< glo;
    }

int main(){
    int glo=9;
    glo=78;
    // int a = 14;
    // int b = 15;

    /*In this code, we have initialized different types of variables /n
    and then printed them on screen. At line no 6 and 7, we /n
    initialized two integer variables a, and b, but they are/n
    commented out for  compiler to ignore them. At line no 8, we have again /n
    initialized two integer variables a, and b, but this time they both are on /n
    the same line separated by a comma. The main thing to note here is that variables/n
    can be initialized on separate lines or in a single line. At line no 9, we have /n
    initialized a float variable pi and assigned a decimal value 3.14 to it. At line no 10,/n
    we have initialized a character variable c and assigned a character'd' to it.  At line no/n
    11, we have printed the value of a, and b. The main thing to note here is that "/n" is used to /n
    print a new line. At line no 12, we have printed the value of pi. Similarly, in line no 13, /n
    the value of c is printed. */
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}
