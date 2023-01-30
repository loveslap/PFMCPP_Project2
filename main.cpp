#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here: 
bool
int 
long
float
char
double

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:

    char lastKey = 'b';
    char myGrade = 'A';
    char firstInitial = 'C';
    bool hadLunch = true;
    bool likedLunch = false; 
    bool hungry = false;
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int beanCount = 41;
    int ultimateAnswer = 42;
    long millisecondsSinceBoot = 34598734582;
    long tickCount = 0;
    long generations = 44404404404443;
    float distance = 0.0f;
    float velocity = 5.3459876f;
    float weight = 117.345356f;
    double pi = 3.14159265358979311599796346854;
    double gravity = 0;
    double trouble = 22;
    
    ignoreUnused(number, lastKey, myGrade, firstInitial, hadLunch, likedLunch, hungry, beanCount, ultimateAnswer, millisecondsSinceBoot, tickCount, generations, distance, velocity, weight, pi, gravity, trouble); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void orderBurger(bool withCheese, int baconSlices)
{
    ignoreUnused(withCheese, baconSlices);
} 
/*
 2)
 */
void makeEnvelope(int attack, int decay = 5, int sustain = 10, int release = 200) 
{
    ignoreUnused(attack, decay, sustain, release);
}
/*
 3)
 */
void mixDrink(int shotsVodka, int shotsSoda, int slicesLime, int shotsWhisky, int bitters)
{
    ignoreUnused(shotsVodka, shotsSoda, slicesLime, shotsWhisky, bitters);
}
/*
 4)
 */
bool runMerryGoRound(int numberOfRevolutions, float velocity = 4.004f) 
{
    ignoreUnused(numberOfRevolutions, velocity);
    return {};
}
/*
 5)
 */
bool makeNote(int pitch = 55, int velocity = 100, int duration = 25)
{
    ignoreUnused(pitch, velocity, duration);
    return {};
}
/*
 6)
 */
void microwaveDinner(int time, bool spinPlatter = true)
{
    ignoreUnused(time, spinPlatter);
}
/*
 7)
 */

int calculateTaxes(int income, int expenses)
{
    ignoreUnused(income, expenses);
    return {};
}
/*
 8)
 */
void phoneHome(long phoneNumber, bool useBluetooth = true)
{
    ignoreUnused(phoneNumber, useBluetooth);
}
/*
 9)
 */
void driveSubmarine(int depth, float direction, float distance)
{    
    ignoreUnused(depth, direction, distance);
}
/*
 10)
 */
void runAircon(int tempurature = 21, bool fan = true)
{
    ignoreUnused(tempurature, fan);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    orderBurger(true, 5);
    //2)
    makeEnvelope(5, 3, 0, 9); 

    //3)
    mixDrink(2,2,1,0,0);
    //4)
    auto finishedRun = runMerryGoRound(50);
    //5)
    auto noteMade = makeNote(56, 100, 127);
    //6)
    microwaveDinner(45, false);
    //7)
    auto taxDue= calculateTaxes(10000, 5800);
    //8)
    phoneHome(8675309, true);
    //9)
    driveSubmarine(21, -55, 3000);
    //10)
    runAircon(18, false);
    
    ignoreUnused(carRented, taxDue, finishedRun, noteMade);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
