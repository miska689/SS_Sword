#include <SS_Sword.h>

Sabia sword(3, 5, 6, 11, 8);
int counter = 0 ;

void setup()
{
  sword.init();
  counter = 1 ;
}

void loop()
{
  if (sword.getButton())
  {
    counter = counter + 1;
  }
  if (counter == 1)
  {
    sword.setColor(0, 255, 255);
  }
  if (counter == 2)
  {
    sword.setColor(255, 0, 255);
  }
  if (counter == 3)
  {
    sword.setColor(255, 255, 0);
  }
  if (counter == 4)
  {
    sword.fade(20);
  }
  if (counter == 5)
  {
    counter = 1 ;
  }
}
