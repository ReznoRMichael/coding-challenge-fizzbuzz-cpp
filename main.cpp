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

//    for(int i=1; i <= numIterations; i++)
//    {
//        if( !(i % 3) && (i % 5) )
//        {
//            cout << fizz << endl;
//        }
//        else if( !(i % 5) && (i % 3) )
//        {
//            cout << buzz << endl;
//        }
//        else if( !(i % 3) && !(i % 5) )
//        {
//            cout << fizz+buzz << endl;
//        }
//        else
//        {
//            cout << i << endl;
//        }
//    }


    // But the above code doesn't use best programming practices and is hard to maintain, expand and change
    // So I wanted to try to improve it!

    /* -------- Coding Test - FizzBuzz - attempt 2 (reusable and expandable code) --------- */

    // store the temporary output in a string
    string outputString;
    // the number of max characters in the texts
    const int numChar = 50;

    /* -------- Here you can add new tests or remove them entirely --------- */
    /* -------- In the future I want to refactor the code so that removing the tests will be more comfortable ------- */

    // the number of tests that have to match
    const int numTests = 2;
    // the numbers that have to be matched for the tests go here
    int moduloNum[numTests] = { 3, 5 };
    // associate the text to the test numbers in moduloNum[]
    char moduloText[numTests][numChar] = { "Fizz", "Buzz" };

    /* --------- Main Loop --------- */

    for(int i=1; i <= numIterations; i++)
    {
        // empty the string before the next loop starts
        outputString = "";

        // loop checks if all the conditions/tests are true and concatenates the string accordingly
        for(int k=1; k <= numTests; k++)
        {
            // if the number matches, then apply the text associated with that number
            if( !(i % moduloNum[k-1]) ) outputString += moduloText[k-1];
        }

        // if the string is not empty (because one or more of the tests passed), then output the string
        if( outputString.length() ) cout << outputString << endl;

        // else output just the number
        else cout << i << endl;
    }

    return 0;
}
