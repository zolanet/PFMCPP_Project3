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

struct Shoe
{
    //1) number of eyelets
    int numberOfEyelets = 12;
    //2) sole material
    std::string soleMateriel = "Leather";
    //3) tongue length
    int tongueLength = 4;
    //4) heel height
    int heelHeight = 0;
    //5) laces length
    double laceLength = 12.5;

    //1) holds ankle steady
    bool holdAnkleSteady( bool isSteady = false);
    //2) keeps feet warm
    float keepFeetWarm(float footTemperature = 37.2f);
    //3) makes you run faster
    int runFast(int runningSpeed = 10);

};
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

struct PunchClock
{
    //1) Time of day
    int timeOfDay = 10;
    //2) Day of year
    int dayOfYear = 24;
    //3) Punch button
    bool punchButtonState = false;
    //4) punch card slit
    bool slitHasCard = true; 
    //5) lock
    bool locked = true;

    struct Employee
    {
        bool genderMale;
        std::string firstName = "Gaston";
        int age = 16;
        int yearHired = 2020;
        int cumulatedWorkHours = 40;

        void workedAtStation(int dayOfWeek = 1, char station= 'a');
        void chores(bool mop = true, bool trashEmptied = false);
        int daysSick(bool justified, int daysTotal);
    };

    //1) log punch-in time
    int punchInTime(Employee empA, int inTime = 11);
    //2) log break time
    int breakTime(Employee empB,int breakTime = 12);
    //3) log punch-out time
    int punchOutTime(Employee empA,int outTime = 13);
};
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

struct Fridge
{
    //1) number of Doors
    int numberOfDoors = 3;
    //2) number of Drawers
    int numberOfDrawers = 3;
    //3) number of Shelves
    int numberOfShelves = 4;
    //4) temperature control
    float temperature = 10.0f;
    //5) humidity control
    int humidityContol = 3;

    //1) keeps food cool
    bool isFoodCool(bool produceCool, bool meatCool, bool dairyCool);
    //2) keeps produce crisp
    bool isProduceCrisp(int celeryState = 4, int carrotsState = 3, int lettuceState = 1); //on a scale of 1 to 4
    //3) organise food in categories
    void organiseInCategories(int produce = 3, int meats = 1, int dairy = 6);
}; 
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
    3) determine note length according to time held
 */
struct Keyboard
{
    //1) number of notes
    int numOfNotes = 88;
    //2) number of rotary encoders
    int numOfREncoders = 8;
    //3) pitch bend
    int pitchBendValue = 0;
    //4) mod wheel
    int modWheelValue = 127;
    //5) octave shift buttons
    int octaveShiftPosition = 4;//from 0 to 7

    struct VirtualInstrument
    {
        int presetSlot = 1;
        int instrChannel = 12;
        double instrMstrLevel = 0.0;
        bool instrBypassIsOn = false;
        bool midiReceived = false;

        bool receiveMidi(int aInstrChannel = 12, bool aMidiReceived = true);
        void recordPreset(int aPresetSlot = 7, std::string aPresetName = "Awesome Patch");
        int randomPreset(int currentPreset);
    };
    //1) play notes according to velocity
    void playNoteWithVelocity(VirtualInstrument v1, int aNoteNumber = 64, int aVel = 112, int aChannel=1);
    //2) send control change messages
    void sendCC(VirtualInstrument v2, int aCCNumber = 12, int aCCValue = 24, int aChannel=10);
    //3) determine note length according to time held
    int noteLength(int aNoteNumber = 64, bool isHeld = false);
};
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
struct Fader
{
    //1) Throw in mm
    double faderThrow =  100;//in mm
    //2) Fader channel number
    int channelNumber = 1;
    //3) Level in dBs
    double level = 0.0; // in dBs
    //4) Fader response curve
    bool responseCurveLog = true; //toggle between log and lin
    //5) group assign button
    int groupAssign = 1; //only one grpup at a time since we can't use arrays yet

    //1) adjust channel level
    float adjustChannelLevel(int aChannelNumber, float aChannelLevel);
    //2) adjust group level
    float adjustGroupLevel(int aGroupNumber, float aGroupLevel);
    //3) assign to a group
    int assignToGroup(int aChannelNumber, int aGroupNumber);

};
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
struct EQ
{
    //1) 80 hz low cut button
    bool lowCutButton = true;
    //2) low-shelf frequency setting
    double lshelfFreq = 120; //in Hz
    //3) peak EQ gain setting
    double peakGain = 0; //in dBs
    //4) peak EQ q setting
    double peakQ = 1.7;
    //5) On button
    double isOn = true;

    //1) Toggle low cut on or off
    bool channelLowCutOn(int aChannel, bool alowCutIsOn = false);
    //2) Adjust peak EQ values
    void channelPeakEqValues(int aChannel = 1, double eqGain= 0.0, double eqQ= 1.2, double eqFreq = 400);
    //3) Toggle EQ on or off 
    bool channelEqToggle(int aChannel = 10, bool eqIsOn = true);
};
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
struct Send
{
    //1) Send number
    int sendNumber = 6;
    //2) Channel Send level in dBs
    double chSendLevel = 0.0; //in dBs
    //3) PFL button
    bool pflOn = false;
    //4) Master send level in dBs
    double mstrSendLevel = -6.0;//in dBs
    //5) Master return Level
    double mstrReturnLevel = -3.0; //in dBs

    //1) adjust level sent to monitors
    double levelToMons(int aChannelNumber = 2, int aSendNumber = 4, bool aPlfOn = true, double aSentLevel = -12.0);
    //2) adjust level sent to effects
    double chnlSndToFXLevel(int aChannelNumber = 2, int aSendNumber = 4, bool aPlfOn = false, double aSentLevel = 0.0);
    //3) determine if signal is pre or post fader level
    bool getPFLState(int aChannelNumber = 2, int aSendNumber = 4);
};
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
struct Matrix
{
    //1) Matrix master level in dB
    double mtrxMstrLvl = 0.0;
    //2) External input level 
    double extInputLvl = 3.0;
    //3) Group numbers
    double GroupID = 3;
    //4) Group matrix level in dB
    double groupMtrxLvl = -3.0;
    //5) Mute buttons
    bool mtrxIsMuted = true;

    //1) Receives signal from a group
    void receiveSignalFromGroup(int aGroupID = 4, double aGroupMtrxLvl = 0.0, bool aMtrxIsMuted = false);
    //2) adjust matrix output
    double setMtrxLvl(int aMtrxID = 1, double aMatrixLevel = 0);
    //3) Mute signal
    bool toggleMtrxMute(int aMtrxID = 1, bool aMtrxIsMuted = false);
};
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
struct Meter
{
    //1) Number of Pixels
    int PixelCount = 8;
    //2) Level in dBs
    double rmsLevel = 0.3;
    //3) Channel number
    int channelNumber = 32;
    //4) Clip indicator
    bool clipping = false;
    //5) Clip hold button
    bool clipHoldIsOn = true;

    //1) Display channel output level
    void diplayChnlLevel(int aChanelNumber, int aPixelCout);
    //2) Display channel clipping
    bool getIsClipping(int aChannelNumber);
    //3) Diplay soloed channel signal
    double displaySoloed(int aChannelNumber);
};
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
struct Mixer
{
    //1) Faders
    Fader fader1;
    //2) EQs
    EQ eq2;
    //3) Sends
    Send send1;
    //4) Matrices
    Matrix matrix6;
    //5) Meters
    Meter meterA;

    //1) Group channels
    void groupChannels(int channelA, int channelB, int channelC, int channelD);// you can aonly group 4 channels
    //2) Compress signal level
    void compressChannelSignal(int aChannelNumber, bool aCompressorOn = true);
    //3) Add effects
    char addEffect(int ChannelNumber, char effecID = 'A'); //A=reverb B=Delay

};
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
