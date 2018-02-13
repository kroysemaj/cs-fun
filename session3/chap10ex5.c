#include <stdio.h>

int findString ( const char searchString[], const char whatWeAreLookingFor[]) {
  int i = 0, j = 0, l = -1;

  // until we hit the null character
  while ( searchString[i] != '\0' ) {
    // check if the current index of searchString equals the first
    // index in the whatWeAreLookingFor string
    if ( searchString[i] == whatWeAreLookingFor[0] ) {
      l = i;
      // if it does, start checking for rest of the stuff to match
      // until we hit the whatWeAreLookingFor null character
      while ( whatWeAreLookingFor[j] != '\0' ) {
        // check if the current index of searchString and whatWeAreLookingFor match
          if (searchString[i] == whatWeAreLookingFor[j]) {
            // if they do, incriment and keep going
            ++i;
            ++j;

            if (whatWeAreLookingFor[j] == '\0') {
              return l;
            }

          } else {
            // if they don't, reset j and break out of the loop
            j = 0;
            l = -1;
            break;
          }
      }
    }
    // if the current index of searchString does not match the first index
    // of whatWeAreLookingFor, incriment the current index and start over
    ++i;
  }

  return l;
}

int main (void)
{
  int findString ( const char searchString[], const char whatWeAreLookingFor[]);

  int result = findString( "first string has stuff to look for", "stuff" );
  printf("%i\n", result );

  return 0;
}