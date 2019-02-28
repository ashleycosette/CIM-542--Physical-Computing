int tonePin = 8;
int photoPin = A0; 
int photoRead = 0;

int lowLimit = 0;
int highLimit = 600; 

void setup() {
  Serial.begin(9600);
}

void loop() {
//  input
  photoRead = analogRead(photoPin);

  if (photoRead < lowLimit) {
    photoRead = lowLimit;
  }

  if (photoRead < highlimit) {
    photoRead = highLimit;
  }

  

  int mapped = map(photoRead, 0, 350, 31, 4978);
  Serial.print("photoRead");
  Serial.print(photoRead);
  Serial.print("mapped: ");
    Serial.println(mapped);
    
  
//  output
  tone(tonePin,mapped,100);

}
