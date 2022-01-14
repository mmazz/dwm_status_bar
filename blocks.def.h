//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//    {"", "", 0, 0},
    {"", "sb-volume", 0, 10},
//  {"", "sb-keyboard", 0, 20},
    {"", "sb-internet",	5,	2},
    {"", "sb-battery", 5, 3},
    {"", "sb-weather",	18000,	4},
    {"", "sb-clock", 60, 5},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
