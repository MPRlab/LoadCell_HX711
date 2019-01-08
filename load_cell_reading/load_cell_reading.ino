
#include "HX711.h"  
 
#define DOUT  7
#define CLK  6
 
HX711 scale(DOUT, CLK);
 
//Change this calibration factor as per your load cell once it is found you many need to vary it in thousands
float calibration_factor = -96650; //-106600 worked for my 40Kg max scale setup 
 
//=============================================================================================
//                         SETUP
//=============================================================================================
void setup() {
  Serial.begin(115200);  
  scale.set_scale(-96650);  //Calibration Factor obtained from first sketch
  scale.tare();             //Reset the scale to 0  
}
 

void loop() {
  Serial.println(scale.get_units()*(-1000), 1);  //Up to 3 decimal points
  Serial.println(millis());

}
