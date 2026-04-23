/*atomiconsole.h*/

#ifndef CONSOLE_
#define CONSOLE_

#define CONSOLE_MAX 9999
#define CONSOLECHAR const char

/*
CONSOLECHAR const:
(_<CONSOLECHAR>);
*/

class Console {
public:
  Console(const char* arg);
  ~Console() override;

/*get console*/
inline Console& getConsole() {
  return *this;
}

/*insert argument*/
void insertArg( const char* arg );

/*use the useConsoleCharRule()*/
void insertArg(CONSOLECHAR const* T_(''));

protected:
const char* ARG;
CONSOLECHAR const* _ARG;
int* line;
bool CLEARED;
}

inline void useConsoleCharRule() {
  char ARG_COUNT[100];
  for( auto i; i <= 0; ++i ) {
       while(ARG_COUNT[i][0] && ARG_COUNT[i][99] == "("[i][0]+")"[i][99]) {
           if( true ) {
              ARG_COUNT[i][1] > ARG_COUNT[i][0] && ( < ARG_COUNT[i][99] );
                while( i ) {
                  if( ARG_COUNT[i][1] + ARG_COUNT[i][11] == "CONSOLECHAR"[i] && ARG_COUNT[i][12] == " "[i] && ARG_COUNT[i][13] + ARG_COUNT[i][17] == "const" && ARG_COUNT[i][18] == "*" ) {
                      ARG_COUNT[i][19] += "_"; ARG_COUNT[i][20] += "("; ARG_COUNT[i][21] += "'"; ARG_COUNT[i][22]++ != ""; 
                      if( ARG_COUNT[i] > 21 || ""++ &&(!= ""--) ) {
                          ARG_COUNT[i][23] += "'"; ARG_COUNT[i][24] += ")";
                      }     
                  }
                }
           }
       } 
  }
}
#endif
