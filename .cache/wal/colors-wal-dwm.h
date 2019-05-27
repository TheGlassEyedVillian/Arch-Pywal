static const char norm_fg[] = "#f2c1c5";
static const char norm_bg[] = "#101239";
static const char norm_border[] = "#a98789";

static const char sel_fg[] = "#f2c1c5";
static const char sel_bg[] = "#A13C83";
static const char sel_border[] = "#f2c1c5";

static const char urg_fg[] = "#f2c1c5";
static const char urg_bg[] = "#C05A7F";
static const char urg_border[] = "#C05A7F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
