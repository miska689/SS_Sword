#include <SS_Sword.h>

Sabia sword(3, 5, 6, 11, 8);

void setup()
{
  sword.init();

}

void loop()
{
  sword.moveUpdate();
  Serial.print("AccX");
  Serial.print(" ");
  Serial.print(sword.getAcclerationX());
  Serial.print(" ");
  Serial.println();
  Serial.print("AccY");
  Serial.print(" ");
  Serial.print(sword.getAcclerationY());
  Serial.print(" ");
  Serial.println();
  Serial.print("AccZ");
  Serial.print(" ");
  Serial.print(sword.getAcclerationZ());
  Serial.print(" ");
  Serial.println();
  Serial.print("GyroX");
  Serial.print(" ");
  Serial.print(sword.getGyroX());
  Serial.print(" ");
  Serial.println();
  Serial.print("GyroY");
  Serial.print(" ");
  Serial.print(sword.getGyroY());
  Serial.print(" ");
  Serial.println();
  Serial.print("GyroZ");
  Serial.print(" ");
  Serial.print(sword.getGyroZ());
  Serial.print(" ");
  Serial.println();
}
