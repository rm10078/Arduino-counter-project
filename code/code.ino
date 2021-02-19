#include<LiquidCrystal.h>
int count=0;
const int rs=13,en=12,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
const int sensor=3;
const int reset=5;
void setup() {
  lcd.begin(16,2);
   pinMode(sensor,INPUT);
   pinMode(reset,INPUT_PULLUP);
   lcd.print("Wellcome");
   delay(1000);
   lcd.clear();
}

void loop() {
  if(digitalRead(sensor)==1){
    count++;
    while(digitalRead(sensor)==1){
      }
    }

  if(digitalRead(reset)==0){
    count=0;
    while(digitalRead(reset)==0){}
    }
    lcd.clear();
    lcd.print("Counter   value");
    lcd.setCursor(0,1);
    lcd.print(count);
}
