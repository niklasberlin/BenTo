
#include "src/MainManager.h"
MainManager main("1.2.1");

void setup()
{
  delay(50); //
  main.init();
}

void loop()
{
  main.update();
}
