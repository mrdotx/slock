/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",   /* after initialization */
	[INPUT] =  "#2b2b2b",   /* during input */
	[FAILED] = "#df2800",   /* wrong password */
	[CAPS] =   "#effd5f",   /* capslock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* default message */
static const char * message = "locked";

/* text color */
static const char * text_color = "#4185d7";

/* font name (must be a valid x11 front name) */
static const char * font_name = "-misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-16";

/* time in seconds before the monitor shuts down */
static const int monitortime = 15;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 15;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "slock.init",             STRING,  &colorname[INIT] },
		{ "slock.input",            STRING,  &colorname[INPUT] },
		{ "slock.failed",           STRING,  &colorname[FAILED] },
		{ "slock.caps",             STRING,  &colorname[CAPS] },
		{ "slock.message",          STRING,  &text_color },
		{ "slock.message.font",     STRING,  &font_name },
};
