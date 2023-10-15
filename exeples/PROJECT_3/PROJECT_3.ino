#include <SS_Sword.h>

Sabia sword(3, 5, 6, 11, 8);
int coef = 0 ;

void setup()
{
  sword.init();
  sword.getStartSound();
  coef = 1;

}

void loop()
{
  sword.moveUpdate();
  if (sword.getMove())
  {
    sword.getPunchSound();
  }
  if (sword.getButton() && coef !=  10) coef = coef + 1;
  else coef = 1;

  sword.fade((coef * 20 ));
}
