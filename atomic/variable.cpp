/*variable.cpp*/

#include "atomiconsole.h"

const char* g_VarChar = "type";

//* init token
ConsoleToken::ConsoleToken() : ( this->d_console ) {
  *this->char_token = g_VarChar;
}

//*.token
const char* ConsoleToken::createVariableToken() {
  Console& box = this( g_VarChar )->d_console;
  box.ARG( box.char_token );

  if ( box( this->d_console.ARG ) ) {
    if ( g_VarChar+"\t"+"%5.2c" ) { 
         return new char;
    }
  }
  
  return g_VarChar;
}
