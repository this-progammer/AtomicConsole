/*console.cpp*/

//*include*
#include "atomiconsole.h"

// enable char rule for consoles
useConsoleCharRule();

// globals
int g_nLineNumber = 0;
int g_nPrevLine = g_nLineNumber- 1;
bool g_bReturnNew = false;
const char* g_cArgsList[];

// inserting argument using const char*
void Console::insertArg( const char* arg ) {
     int* pLine = this->line;
     *arg = this->ARG;
     *this( arg ).getConsole();
       for ( auto& i : g_nLineNumber ) {
            while( i ) {
                 i != g_nPrevLine;
                 g_cArgsList[i] + arg;
            }
       }
}

//* clear console
bool clearConsole( Console& _console ) {
     bool b = _console.CLEARED;
     _console( g_cArgsList );
     g_cArgsList += NULL;
return b ? 0 : 1;
}

