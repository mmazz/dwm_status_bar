//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "", 0, 0},
    {"", "sb-net", 1, 16},
    {"", "sb-battery", 5, 3},
    {"", "sb-volume", 0, 10},
    {"", "sb-keyboard", 0, 20},
    {"", "sb-wifi", 5, 4},
    {"", "sb-clock", 60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
