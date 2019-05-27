const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101239", /* black   */
  [1] = "#C05A7F", /* red     */
  [2] = "#A13C83", /* green   */
  [3] = "#C73585", /* yellow  */
  [4] = "#B04887", /* blue    */
  [5] = "#D95492", /* magenta */
  [6] = "#F26F9A", /* cyan    */
  [7] = "#f2c1c5", /* white   */

  /* 8 bright colors */
  [8]  = "#a98789",  /* black   */
  [9]  = "#C05A7F",  /* red     */
  [10] = "#A13C83", /* green   */
  [11] = "#C73585", /* yellow  */
  [12] = "#B04887", /* blue    */
  [13] = "#D95492", /* magenta */
  [14] = "#F26F9A", /* cyan    */
  [15] = "#f2c1c5", /* white   */

  /* special colors */
  [256] = "#101239", /* background */
  [257] = "#f2c1c5", /* foreground */
  [258] = "#f2c1c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
