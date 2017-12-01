void setup() {
  
  randomSeed(analogRead(0)); //generates random seed off of unused serial port
                              //if this is a used port change the 0 to an unused one
}

void loop() {
  int randomNumber = random(1,9); //generates random number between 1 and 9 and places it in a variable
  Serial.println(randomNumber); //this is just here to output the random number to make sure its working
}
