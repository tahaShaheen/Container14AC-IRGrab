// This sketch will send out a Nikon D50 trigger signal (probably works with most Nikons)
// See the full tutorial at http://www.ladyada.net/learn/sensors/ir.html
// this code is public domain, please enjoy!


/*Obviously I changed it a bit
   but I've let the function names and everything else remain the same
  - Taha
*/
int IRledPin =  13;    // LED connected to digital pin 13

// The setup() method runs once, when the sketch starts

void setup()   {
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  Serial.println("Sending IR signal");

  SendNikonCode();

  delay(60 * 1000); // wait one minute (60 seconds * 1000 milliseconds)
}

// This procedure sends a 38KHz pulse to the IRledPin
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait

  cli();  // this turns off any background interrupts

  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
    digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
    delayMicroseconds(10);         // hang out for 10 microseconds, you can also change this to 9 if its not working
    digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
    delayMicroseconds(10);         // hang out for 10 microseconds, you can also change this to 9 if its not working

    // so 26 microseconds altogether
    microsecs -= 26;
  }

  sei();  // this turns them back on
}

void SendNikonCode() {
  // This is the code for my particular Nikon, for others use the tutorial
  // to 'grab' the proper code from the remote

  //16 degree C, TURBO, Mode: COOL
  pulseIR(6300);      delayMicroseconds(7580);      pulseIR(580);      delayMicroseconds(1660);
  pulseIR(580);      delayMicroseconds(1700);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(580);      delayMicroseconds(1660);      pulseIR(560);      delayMicroseconds(1680);
  pulseIR(600);      delayMicroseconds(1640);      pulseIR(580);      delayMicroseconds(1660);
  pulseIR(580);      delayMicroseconds(1680);      pulseIR(580);      delayMicroseconds(580);
  pulseIR(600);      delayMicroseconds(540);      pulseIR(540);      delayMicroseconds(620);
  pulseIR(580);      delayMicroseconds(560);      pulseIR(540);      delayMicroseconds(640);
  pulseIR(560);      delayMicroseconds(520);      pulseIR(580);      delayMicroseconds(600);
  pulseIR(580);      delayMicroseconds(560);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(580);      delayMicroseconds(1660);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(580);      delayMicroseconds(560);      pulseIR(540);      delayMicroseconds(1660);
  pulseIR(580);      delayMicroseconds(1660);      pulseIR(580);      delayMicroseconds(1640);
  pulseIR(600);      delayMicroseconds(1620);      pulseIR(600);      delayMicroseconds(580);
  pulseIR(580);      delayMicroseconds(600);      pulseIR(560);      delayMicroseconds(560);
  pulseIR(540);      delayMicroseconds(1700);      pulseIR(580);      delayMicroseconds(580);
  pulseIR(540);      delayMicroseconds(620);      pulseIR(560);      delayMicroseconds(580);
  pulseIR(540);      delayMicroseconds(580);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(580);      delayMicroseconds(600);      pulseIR(540);      delayMicroseconds(1680);
  pulseIR(600);      delayMicroseconds(560);      pulseIR(540);      delayMicroseconds(1700);
  pulseIR(600);      delayMicroseconds(1660);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(540);      delayMicroseconds(1720);      pulseIR(580);      delayMicroseconds(580);
  pulseIR(540);      delayMicroseconds(1720);      pulseIR(580);      delayMicroseconds(560);
  pulseIR(600);      delayMicroseconds(1640);      pulseIR(560);      delayMicroseconds(580);
  pulseIR(580);      delayMicroseconds(540);      pulseIR(580);      delayMicroseconds(580);
  pulseIR(580);      delayMicroseconds(540);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(540);      delayMicroseconds(660);      pulseIR(540);      delayMicroseconds(580);
  pulseIR(520);      delayMicroseconds(1720);      pulseIR(580);      delayMicroseconds(1660);
  pulseIR(600);      delayMicroseconds(1640);      pulseIR(560);      delayMicroseconds(1700);
  pulseIR(600);      delayMicroseconds(1660);      pulseIR(580);      delayMicroseconds(600);
  pulseIR(540);      delayMicroseconds(1700);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(560);      delayMicroseconds(560);      pulseIR(600);      delayMicroseconds(560);
  pulseIR(580);      delayMicroseconds(560);      pulseIR(560);      delayMicroseconds(560);
  pulseIR(580);      delayMicroseconds(580);      pulseIR(560);      delayMicroseconds(1700);
  pulseIR(580);      delayMicroseconds(1680);      pulseIR(540);      delayMicroseconds(1720);
  pulseIR(580);      delayMicroseconds(1640);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(580);      delayMicroseconds(560);      pulseIR(560);      delayMicroseconds(1660);
  pulseIR(580);      delayMicroseconds(1660);      pulseIR(600);      delayMicroseconds(580);
  pulseIR(580);      delayMicroseconds(540);      pulseIR(580);      delayMicroseconds(600);
  pulseIR(580);      delayMicroseconds(520);      pulseIR(600);      delayMicroseconds(560);
  pulseIR(540);      delayMicroseconds(1700);      pulseIR(580);      delayMicroseconds(540);
  pulseIR(560);      delayMicroseconds(600);      pulseIR(600);      delayMicroseconds(560);
  pulseIR(560);      delayMicroseconds(1660);      pulseIR(580);      delayMicroseconds(560);
  pulseIR(580);      delayMicroseconds(1680);      pulseIR(540);      delayMicroseconds(600);
  pulseIR(580);      delayMicroseconds(1640);      pulseIR(580);      delayMicroseconds(540);
  pulseIR(580);      delayMicroseconds(600);      pulseIR(540);      delayMicroseconds(1660);
  pulseIR(600);      delayMicroseconds(560);      pulseIR(540);      delayMicroseconds(1700);
  pulseIR(580);      delayMicroseconds(540);      pulseIR(580);      delayMicroseconds(1680);
  pulseIR(600);      delayMicroseconds(540);      pulseIR(580);      delayMicroseconds(1660);
  pulseIR(560);      delayMicroseconds(1680);      pulseIR(600);      delayMicroseconds(7560);
  pulseIR(580);
}
