//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		    /*Update Interval*/	     /*Update Signal*/
	{"",            "~/scripts/bar/cpu",	    10,		             0},
	{"",            "~/scripts/bar/memory",	    10,		             0},
	{"",            "~/scripts/bar/volume",	    10,		             10},
	{"",            "~/scripts/bar/backlight",  10,		             11},
	{"",            "~/scripts/bar/battery",    10,		             0},
	{"",            "~/scripts/bar/clock",	    10,		             0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
