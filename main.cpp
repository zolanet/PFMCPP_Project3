/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/

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
