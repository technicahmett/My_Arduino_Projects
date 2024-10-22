

const int LUpLed=13;    //9; //sol üst led
const int RUpLed=12;    //8; //sağ üst led
const int LDnLed=14;    //7; //sol alt led
const int RDnLed=27;    //6; //sağ alt led
const int LBkLed=26;    //5; //sol arka led
const int RBkLed=25;    //4; //sağ arka led
const int LFrSigLed=33;  //  //sol ön sinyal 
const int RFrSigLed=32;  //  //sağ ön sinyal 
int leds[]= {LUpLed,RUpLed,LDnLed,RDnLed};
int sizem=sizeof(leds)/sizeof(int);

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
  
  pinMode(LUpLed, OUTPUT);
  pinMode(RUpLed, OUTPUT);
  pinMode(LDnLed, OUTPUT);
  pinMode(RDnLed, OUTPUT);  
  pinMode(LBkLed, OUTPUT);
  pinMode(RBkLed, OUTPUT);
  pinMode(LFrSigLed, OUTPUT);
  pinMode(RFrSigLed, OUTPUT);

  digitalWrite(LUpLed, LOW);
  digitalWrite(RUpLed, LOW);
  digitalWrite(LDnLed, LOW);
  digitalWrite(RDnLed, LOW);
  digitalWrite(LBkLed, LOW);
  digitalWrite(RBkLed, LOW);
  digitalWrite(LFrSigLed, LOW);
  digitalWrite(RFrSigLed, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

for (int i=0; i<=sizem; i++){
digitalWrite(leds[i], HIGH);
    delay(150);
    // turn the pin off:
   digitalWrite(leds[i], LOW);
//digitalWrite(leds[i], HIGH);    
    }   
for (int i=sizem; i>=0; i--){
digitalWrite(leds[i], HIGH);
    delay(150);
    // turn the pin off:
    digitalWrite(leds[i], LOW);
    }

Serial.println(__FILE__);
Serial.print("sizeof array/int");
Serial.println(sizeof(leds)/sizeof(int));

Serial.print("sizeof array");
Serial.println(sizeof(leds));

Serial.print("sizeof int");
Serial.println(sizeof(int));
}
