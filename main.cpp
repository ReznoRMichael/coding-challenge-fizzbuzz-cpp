#include <iostream>
#include <string>

using namespace std;

// Sample Coding Challenge
// algorithm that will output Fizz whenever the number is a multiply of 3
// and Buzz whenever the number is a multiply of 5
// when the number is a multiply of both 3 and 5 it will output FizzBuzz

const int numIterations = 100;

int main()
{
    // This was my first quick attempt
    // solved in 14 minutes (07.07.2019)

    string fizz("Fizz");
    string buzz("Buzz");

    for(int i=1; i <= numIterations; i++)
    {
        if( !(i % 3) && (i % 5) )
        {
            cout << fizz << endl;
        }
        else if( !(i % 5) && (i % 3) )
        {
            cout << buzz << endl;
        }
        else if( !(i % 3) && !(i % 5) )
        {
            cout << fizz+buzz << endl;
        }
        else
        {
            cout << i << endl;
        }
    }


    // But the above code doesn't use best programming practices and is hard to maintain, expand and change
    // So I want to try to improve it

//    for(int i=1; i <= numIterations; i++)
//    {
//        if( !(i % ) )
//    }

    return 0;
}
