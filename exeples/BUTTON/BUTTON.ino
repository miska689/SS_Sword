#include <SS_Sword.h>

Sabia sword(3, 5, 6, 11, 8);

void setup()
{
  sword.init();
}

void loop()
{
  if (sword.getButton())
  {
    Serial.print("Butonul este apasat!");
    Serial.print(" ");
    Serial.println();
  }
  else
  {
    Serial.print("Butonul nu este apasat!");
    Serial.print(" ");
    Serial.println();
  }
  delay( 1000 );
}
