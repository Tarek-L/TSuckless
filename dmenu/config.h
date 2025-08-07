/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static const unsigned int alpha = 0xbb; /* Amount of opacity. 0xff is opaque */
static int centered = 1;                /* -c option; centers dmenu on screen */
static int min_width = 500;             /* minimum width when centered */
static const float menu_height_ratio =
    2.0f; /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "JetBrainsMono Nerd Font :pixelsize=14:antialias=true:autohint=true"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
    /*                      fg         bg       */
    [SchemeNorm] = {"#ebdbb2", "#282828"}, // normal text on dark bg
    [SchemeSel] = {"#282828",
                   "#958500"}, // selected: dark text on yellow fab22f
    [SchemeSelHighlight] = {"#282828", "#d79921"},  // selected highlight
    [SchemeNormHighlight] = {"#aaffaa", "#383838"}, // normal highlight
    [SchemeOut] = {"#ebdbb2", "#458588"},           // output (or use aqua/blue)
};
static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, 0xff},
    [SchemeOut] = {OPAQUE, 0xff},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 5;
