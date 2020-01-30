/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] =   "#000000",   /* after initialization */
    [INPUT] =  "#3476a4",   /* during input */
    [FAILED] = "#fe0000",   /* wrong password */
};

/*
 * xresources preferences to load at startup
 */
ResourcePref resources[] = {
        { "background",   STRING,  &colorname[INIT] },
        { "color10",      STRING,  &colorname[INPUT] },
        { "color1",       STRING,  &colorname[FAILED] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "locked";

/* text color */
static const char * text_color = "#ffffff";

/* font name (must be a valid x11 front name) */
static const char * font_name = "12x24";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 15;
