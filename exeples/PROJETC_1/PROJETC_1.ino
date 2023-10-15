#include <SS_Sword.h>

Sabia sword(3, 5, 6, 11, 8);

void setup()
{
  sword.init();

}

void loop()
{
  sword.setColor(255, 255, 0);	
  delay( 1000 );
  sword.setColor(255, 0, 255);	
  delay( 1000 );
  sword.setColor(255, 255, 0);	
  delay( 1000 );
}
