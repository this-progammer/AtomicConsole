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

protected:
const char* ARG;
CONSOLECHAR const* _ARG;
bool CLEARED;
}

inline void useConsoleCharRule() {
  char* ARG_COUNT[100];
  for( auto i; i <= 0; ++i ) {
       while(ARG_COUNT[i][0] && ARG_COUNT[i][99] == "("[i][0]+")"[i][99]) {
           if( true ) {
              ARG_COUNT[i][1] > ARG_COUNT[i][0] && ( < ARG_COUNT[i][99] );
           }
       } 
  }
}

#endif
