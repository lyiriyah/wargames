/* provide the GTNW with some geographical data to draw the missiles */
struct location_t {
  const char* name;
  int x, y; /* x,y-coords on the map */
};
struct location_t world[]={
  /* US cities */
  {"las vegas", 5, 7},
  {"seattle", 3, 2},
  {"new york", 35, 4},
  {"new orleans", 25, 10},
  {"washington", 33, 6},
  {"washington dc", 33, 6},
  {"winston-salem", 30, 7},
  {"san francisco", 1, 6},
  {"chicago", 26, 4},
 
  /* Soviet cities */
  /* NOTE: These are not neccessarily correct. I simply eyed them relative to Murmansk */
  {"murmansk", 2, 73},
  {"moscow", 5, 70},
  {"minsk", 4, 66},
};