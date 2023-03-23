static const char *colorname[NUMCOLS] = {
    [INIT] =        "#000000",  /* after initialization */
    [INPUT] =       "#2b2b2b",  /* during input */
    [INPUT_ALT] =   "#2b2b2b",  /* during input, second color*/
    [FAILED] =      "#df2800",  /* wrong password */
    [PAM] =         "#4185d7",  /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* PAM service that's used for authentication */
static const char* pam_service = "login";

/* default message */
static const char * message = "locked";

/* text color */
static const char * text_color = "#cccccc";

/* font name (must be a valid x11 front name) */
static const char * font_name = "-misc-fixed-medium-r-normal--20-200-75-75-c-100-iso8859-1";

/* time in seconds before the monitor shuts down */
static const int monitortime = 20;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
        { "init",           STRING, &colorname[INIT] },
        { "input",          STRING, &colorname[INPUT] },
        { "input.alt",      STRING, &colorname[INPUT_ALT] },
        { "failed",         STRING, &colorname[FAILED] },
        { "pam",            STRING, &colorname[PAM] },
        { "message",        STRING, &text_color },
        { "message.font",   STRING, &font_name },
};
