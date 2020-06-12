 #include<string>
 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Limb
{
    int footStepSize = 1;
    int stepCount;
    void stepForward()
    {
        ++stepCount;
    }
    int stepSize()
    {
        return footStepSize;
    }
};

struct Person
{
    int age;
    int height;
    float hairLength;
    unsigned int SATScore;
    int distanceTraveled;
    Limb leftFoot;
    Limb rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += rightFoot.stepSize() + leftFoot.stepSize();
}
 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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

bool Shoe::holdAnkleSteady( bool isSteady)
{
   return isSteady;
}

float Shoe::keepFeetWarm(float footTemperature)
{
    return footTemperature;
}

int Shoe::runFast(int runningSpeed)
{
    return runningSpeed;
}

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

int PunchClock::punchInTime(Employee empA, int inTime)
{
    Employee employeeName = empA;
    return inTime;
}
int PunchClock::breakTime(Employee empA,int breakTime)
{
    Employee employeeName = empA;
    return breakTime;
}
int PunchClock::punchOutTime(Employee empA,int outTime)
{
    Employee employeeName = empA;
    return outTime;
}

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

bool Fridge::isFoodCool(bool produceCool, bool meatCool, bool dairyCool)
{
    if (produceCool && meatCool && dairyCool)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool Fridge::isProduceCrisp(int celeryState, int carrotsState, int lettuceState)
{
    if((celeryState + carrotsState + lettuceState)/3 > 5)
    {
        return true;
    }
     else 
    {
        return false;
    }
}
void Fridge::organiseInCategories(int produce, int meats, int dairy)
{
    int shelf1 = produce;
    int shelf2 = meats;
    int shelf3 = dairy;
}

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

void Keyboard::playNoteWithVelocity(VirtualInstrument v1, int aNoteNumber, int aVel, int aChannel)
{
    int note[] = {aNoteNumber, aVel, aChannel};
    if(aVel > 0)
    {
        v1.midiReceived = true;
    }
    else
    {
        v1.midiReceived = false;
    }
      
}
void Keyboard::sendCC(VirtualInstrument v2, int aCCNumber, int aCCValue, int aChannel)
{
    int note[] = {aCCNumber, aCCValue, aChannel};
    if(aCCValue > 0)
    {
        v2.midiReceived = true;
    }
    else
    {
        v2.midiReceived = false;
    }
}

int Keyboard::noteLength(int aNoteNumber, bool isHeld)
{
    if(isHeld)
    {
        return aNoteNumber;
    }
    else
    {
        return 0;
    }
    
}
    
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
    double adjustChannelLevel(int aChannelNumber, double aChannelLevel);
    //2) adjust group level
    double adjustGroupLevel(int aGroupNumber, double aGroupLevel);
    //3) assign to a group
    int assignToGroup(int aChannelNumber, int aGroupNumber);

};
double Fader::adjustChannelLevel(int aChannelNumber, double aChannelLevel)
{
    double newLevel;
    if(aChannelNumber >= 1 && aChannelNumber <= 32)
    {
        newLevel = level + aChannelLevel;
    }
    else
    {
        newLevel = level;
    }
    return newLevel;
}

double Fader::adjustGroupLevel(int aGroupNumber, double aGroupLevel)
{
   double newLevel;
    if(aGroupNumber >= 1 && aGroupNumber <= 4)
    {
        newLevel = aGroupLevel;
    }
    else
    {
        newLevel = 0;
    }
    return newLevel;
}

int Fader::assignToGroup(int aChannelNumber, int aGroupNumber)
{
    if(aChannelNumber >= 1 && aChannelNumber <= 32 && aGroupNumber >= 1 && aGroupNumber <= 4)
    {
        return aGroupNumber;
    }
    else
    {
        return 0;
    }
}

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

bool EQ::channelLowCutOn(int aChannel, bool alowCutIsOn)
{
    if(aChannel >= 1 && aChannel <= 32)
    {
        return alowCutIsOn;
    }
    else
    {
        return false;
    }
}

void EQ::channelPeakEqValues(int aChannel, double eqGain, double eqQ, double eqFreq)
{
    if(aChannel >= 1 && aChannel <= 32)
    {
        peakGain = eqGain; 
        peakQ = eqQ;
        double peakFreq = eqFreq; 
    }
}

bool EQ::channelEqToggle(int aChannel, bool eqIsOn)
{
    if(aChannel >= 1 && aChannel <= 32)
    {
        return eqIsOn;
    }
    else
    {
        return false;
    }
}


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
    double levelToMons(int aChannelNumber = 2, int aSendNumber = 4,bool aPlfOn = true, double aSentLevel = -12.0);
    //2) adjust level sent to effects
    double chnlSndToFXLevel(int aChannelNumber = 2, int aSendNumber = 4, bool aPlfOn = false, double aSentLevel = 0.0);
    //3) determine if signal is pre or post fader level
    bool getPFLState(int aChannelNumber = 2, int aSendNumber = 4);
};

double Send::levelToMons(int aChannelNumber, int aSendNumber, bool aPlfOn, double aSentLevel)
{
    double newLevel;
    if( aChannelNumber >= 1 && aChannelNumber <= 32 && aSendNumber <= 1 && aSendNumber <= 6 && aPlfOn == true)
    {
        newLevel = chSendLevel + aSentLevel;
    }
    else
    {
        newLevel = chSendLevel;
    }
    return newLevel;
}

double Send::chnlSndToFXLevel(int aChannelNumber, int aSendNumber, bool aPlfOn, double aSentLevel)
{
    double newLevel;
    if( aChannelNumber >= 1 && aChannelNumber <= 32 && aSendNumber <= 1 && aSendNumber <= 6 && aPlfOn == false)
    {
        newLevel = chSendLevel + aSentLevel;
    }
    else
    {
        newLevel = chSendLevel;
    }
    return newLevel;
}
//3) determine if signal is pre or post fader level
bool Send::getPFLState(int aChannelNumber, int aSendNumber)
{
    bool aPlfOn = pflOn;
     if( aChannelNumber >= 1 && aChannelNumber <= 32 && aSendNumber <= 1 && aSendNumber <= 6 && aPlfOn == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}


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

void Matrix::receiveSignalFromGroup(int aGroupID, double aGroupMtrxLvl, bool aMtrxIsMuted)
{
    if(aGroupID >= 1 && aGroupID <= 4 && aMtrxIsMuted == false)
    {
        groupMtrxLvl = aGroupMtrxLvl;
    }
    else
    {
        groupMtrxLvl = 0;
    }
    
}

double Matrix::setMtrxLvl(int aMtrxID, double aMatrixLevel)
{
    if(aMtrxID >= 1 && aMtrxID <= 8)
    {
        return aMatrixLevel;
    }
    else
    {
        return mtrxMstrLvl;
    }
}

bool Matrix::toggleMtrxMute(int aMtrxID, bool aMtrxIsMuted)
{
    if(aMtrxID >= 1 && aMtrxID <= 8)
    {
        return aMtrxIsMuted;
    }
    else
    {
        return false;
    }
}

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
    bool displaySoloed(int aChannelNumber);
};

void Meter::diplayChnlLevel(int aChannelNumber, int aPixelCout)
{
    if( aChannelNumber >= 1 && aChannelNumber <= 32)
    {
        PixelCount = aPixelCout;
    }
}

bool Meter::getIsClipping(int aChannelNumber)
{
    bool isClipping = clipping;
    if( aChannelNumber >= 1 && aChannelNumber <= 32)
    {
        return isClipping;
    }
    else
    {
        return false;
    }
}

bool Meter::displaySoloed(int aChannelNumber)
{
    if( aChannelNumber >= 1 && aChannelNumber <= 32)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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

void Mixer::groupChannels(int channelA, int channelB, int channelC, int channelD)
{
    int channelSum = channelA+channelB+channelC+channelD;
}
void Mixer::compressChannelSignal(int aChannelNumber, bool aCompressorOn)
{
    bool isOn;
    if( aChannelNumber >= 1 && aChannelNumber <= 32)
    {
        isOn = aCompressorOn;
    }
    else
    {
        isOn = false;
    }

}
char Mixer::addEffect(int aChannelNumber, char effecID)
{
    if( aChannelNumber >= 1 && aChannelNumber <= 32)
    {
        return effecID;
    }
    else
    {
        return 'a';
    }
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

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
