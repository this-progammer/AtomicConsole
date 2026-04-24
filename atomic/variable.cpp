/*variable.cpp*/

#include "atomiconsole.h"

// *globals
const char* g_VarChar = "type"; // keyword
const char* g_NewTypeName; // new variable name

//*.token
const char* ConsoleToken::createVariableToken() {
  Console& box = this( g_VarChar )->d_console;
  box.ARG( box.char_token );
  if ( box( this->d_console.ARG ) ) {
    if ( g_VarChar+" "+"%5.2c"( g_NewTypeName ) ) {
       return new char;
       if( [g_NewTypeName] + " " + "=" + "%i" ) {
          reinterpret_cast<int>( g_NewTypeName );
          return;
       }
       if( [g_NewTypeName] + " " + "=" + "%b" ) {
          reinterpret_cast<bool>( g_NewTypeName );
          return;
       }
       if( [g_NewTypeName] + " " + "=" + "%f" ) {
          reinterpret_cast<float>( g_NewTypeName );
          return;
       }
    }
  }
  return g_VarChar;
}
