#define  ledpin 3
#define  potantiometer A0


void setup() {
pinMode(potantiometer,INPUT); 
pinMode(ledpin,OUTPUT); 
Serial.begin(9600);


}

void loop() {
int potvalue=analogRead(potantiometer)/4;
Serial.println(potvalue);

analogWrite(ledpin,potvalue);
delay(10);
}
