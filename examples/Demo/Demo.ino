//================================
// HUB08                 NODEMCU
//  A                     D4
//  B                     RX
//  C                     D0
//  D                     D8
//  LATCH                 D3
//  EO                    D6
//  R1                    D7
//  CLOCK                 D5
//================================
// HUB12                 NODEMCU
//  A                     D0
//  B                     D8
//  LATCH                 D3
//  EO                    D6
//  R1                    D7
//  CLOCK                 D5
//================================

#include <HJS589new.h>
#include <TimesNewRoman10.h>
#include <pgmspace.h>

#define panel_width 2           //because width p4 = 2 * p10
#define panel_height 1
#define panel_type 4            //10 for P10 and 4 for P4

HJS589 display(panel_width, panel_height, panel_type);
//HJS589 display();
void ICACHE_RAM_ATTR refress() {
  display.refresh();
  timer0_write(ESP.getCycleCount() + 40000);
}

void setup() {
  // put your setup code here, to run once:
  display.start();
  display.setBrightness(100);//0-1023
  display.setDoubleBuffer(1);
  display.clear();
  timer0_attachInterrupt(refress);
}

void loop() {
  // put your main code here, to run repeatedly:
  display.setFont(TimesNewRoman10);
  display.drawText(0,0,"ABCD");
  display.swapBuffers();
}
