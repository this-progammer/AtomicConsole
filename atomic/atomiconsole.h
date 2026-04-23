/*atomiconsole.h*/

#ifndef CONSOLE_
#define CONSOLE_

#define CONSOLE_MAX 9999
#define CONSOLECHAR const char

class Console {
public:
  Console(CONSOLECHAR* _arg);
  ~Console() override;

}

#endif
