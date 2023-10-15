#include <SS_Sword.h>

Sabia sword(3, 5, 6, 11, 8);

void setup()
{
  sword.init();

  sword.getStartSound();
}

void loop()
{
  sword.getLiveSound();
}
