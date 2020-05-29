/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
Thing 1) Shoe
5 properties:
    1) number of eyelets
    2) sole material
    3) tongue length
    4) heel height
    5) laces length
3 things it can do:
    1) holds ankle steady
    2) keeps feet warm
    3) makes you run faster
 */

/*
Thing 2) Punch clock
5 properties:
    1) Time of day
    2) Day of year
    3) Punch button
    4) punch card slit
    5) lock
3 things it can do:
    1) log punch-in time
    2) log break time
    3) log punch-out time
 */

/*
Thing 3) Fridge
5 properties:
    1) number of Doors
    2) number of Drawers
    3) number of Shelves
    4) temperature control
    5) humidity control
3 things it can do:
    1) keeps food cool
    2) keeps produce crisp
    3) organise food in categories
 */

/*
Thing 4) Keyboard
5 properties:
    1) number of notes
    2) number of rotary encoders
    3) pitch bend
    4) mod wheel
    5) octave shift buttons
3 things it can do:
    1) play notes according to velocity
    2) send control change messages
    3) determine bote length according to time held
 */

/*
Thing 5)Faders
5 properties:
    1) Throw in mm
    2) Fader channel number
    3) Level in dBs
    4) Fader response curve
    5) group assign button
3 things it can do:
    1) adjust channel level
    2) adjust group level
    3) assign to a group
 */

/*
Thing 6)EQs
5 properties:
    1) 80 hz low cut button
    2) low-shelf frequency setting
    3) peak EQ gain setting
    4) peak EQ q setting
    5) On button
3 things it can do:
    1) Toggle low cut on or off
    2) Adjust peak EQ values
    3) Toggle EQ on or off 
 */

/*
Thing 7)Sends
5 properties:
    1) Send number
    2) Channel Send level in dBs
    3) PFL button
    4) Master send level in dBs
    5) Master return Level
3 things it can do:
    1) adjust level sent to monitors
    2) adjust level sent to effects
    3) determine if signal is pre or post fader level
 */

/*
Thing 8)Matrices
5 properties:
    1) Matrix master level in dB
    2) External input level 
    3) Group numbers
    4) Group matrix level in dB
    5) Mute buttons
3 things it can do:
    1) Receives signal from a group
    2) adjust matrix output
    3) Mute signal
 */

/*
Thing 9)Meters
5 properties:
    1) Number of Pixels
    2) Level in dBs
    3) Channel number
    4) Clip indicator
    5) Clip hold button
3 things it can do:
    1) Display channel output level
    2) Display channel clipping
    3) Diplay soloed channel signal
 */

/*
Thing 10)Mixer
5 properties:
    1) Faders
    2) EQs
    3) Sends
    4) Matrices
    5) Meters
3 things it can do:
    1) Group channels
    2) Compress signal level
    3) Add effects
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
