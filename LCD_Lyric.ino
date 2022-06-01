#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display


 


void setup() {
   lcd.begin (16,2); // <<----- My LCD was 16x2

// Switch on the backlight
lcd.setBacklight(HIGH);

  // awal
  lcd.setCursor (0,0); // go home (baris pertama)
  lcd.print("i know we"); 
  delay(1000);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("were'nt perfect");
  delay(2000);
  lcd.clear();
  lcd.setCursor (0,0); // go home (baris pertama)
  lcd.print("but i've never"); 
  delay(800);
  lcd.clear();
  
  lcd.setCursor (0,0); // go home (baris pertama)
  lcd.print("felt this way");
  delay(1800);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("for ");
  delay(800);
  lcd.setCursor (4,1);
  lcd.print("no one");
  delay(3000);
  lcd.clear();
  
  lcd.setCursor (0,0); 
  lcd.print("i just can't");
  delay(2000);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("imagine ");
  delay(1500);
  lcd.clear();
  
  lcd.setCursor (0,0); 
  lcd.print("how you could");
  delay(800);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("be so okay ");
  delay(1000);
  lcd.clear();
  
  lcd.setCursor (3,0); 
  lcd.print("now that");
  delay(1000);
  lcd.setCursor (3,1); //baris ke dua
  lcd.print("i'm");
  delay(1000);
  lcd.setCursor (7,1); //baris ke dua
  lcd.print("gone");
  delay(1500);
  lcd.clear();

  lcd.setCursor (0,0); 
  lcd.print("'cause u didn't");
  delay(1000);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("mean what u");
  delay(1000);
  lcd.clear();

  lcd.setCursor (0,0); 
  lcd.print("wrote in that");
  delay(1000);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("song about me");
  delay(3300);
  lcd.clear();

  lcd.setCursor (0,0); 
  lcd.print("'cause you said");
  delay(1000);
  lcd.setCursor (3,1); //baris ke dua
  lcd.print("forever");
  delay(1500);
  lcd.clear();

  lcd.setCursor (0,0); 
  lcd.print("now i drive");
  delay(1000);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("alone");
  delay(1000);
  lcd.clear();

  lcd.setCursor (2,0); 
  lcd.print("past your");
  delay(1000);
  lcd.setCursor (4,1); //baris ke dua
  lcd.print("street");
  delay(1500);
  lcd.clear();

  lcd.setCursor (0,0); 
  lcd.print("yeah, you said");
  delay(1000);
  lcd.setCursor (3,1); //baris ke dua
  lcd.print("forever");
  delay(1500);
  lcd.clear();

  lcd.setCursor (0,0); 
  lcd.print("now i drive");
  delay(1000);
  lcd.setCursor (0,1); //baris ke dua
  lcd.print("alone");
  delay(1000);
  lcd.clear();

  lcd.setCursor (2,0); 
  lcd.print("past your");
  delay(1000);
  lcd.setCursor (4,1); //baris ke dua
  lcd.print("street");
  delay(1000);
  lcd.clear();
  delay(6000);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
