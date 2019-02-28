int switchPin = 2;
int led1 = 3;
int led2 = 4;

int switchRead=0;
int counter=0;
boolean wasPressed = false;

long prevMillis = 0;
int interval = 0; 
boolean trigger = false;


void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  switchRead = digitalRead(switchPin);
  Serial.print("switch: ");
  Serial.println(switchRead);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  if (switchRead == HIGH) {
    wasPressed = true;
  }

  if (switchRead == LOW && wasPressed == true) {
    counter = counter + 1;
  }

  Serial.print("counter: ");
  Serial.println(counter);

  if(counter == 0){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }else if (counter == 1){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }else if (counter == 2){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }else if (counter == 3){

  if(millis() - prevMillis > interval){
    prevMillis = millis();
    if(trigger == false) {
      trigger = true;
    }else{
      trigger = false;
    }
  }

    
    digitalWrite(led2, HIGH);
    delay(2000);
    digitalWrite(led2, LOW);
    delay(2000);
  }else{
    counter = 0;
  }
  
}
