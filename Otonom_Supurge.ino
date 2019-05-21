int trigPin = 5;
int echoPin = 4;
int trigPin2 = 13;
int echoPin2 = 6;
int trigPin3 = 8;
int echoPin3 = 7;
int enA = 9;
int in1 = 2;
int in2 = 10;
int enB = 3;
int in3 = 11;
int in4 = 12;
 
void setup()

{

Serial.begin (9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
 
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
 
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
 
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
 
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
  }
 
void loop()
 
{

  do {delay(3000);}
  while(0);
 
int duration, distance;

    digitalWrite (trigPin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin, LOW);
    duration = pulseIn (echoPin, HIGH);
    distance = (duration/2) / 29.1;
 
    Serial.print("sag sensor:");
    Serial.print(distance);   
    Serial.print("cm");
    Serial.println();
  
 
int duration2, distance2;

    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration2 = pulseIn (echoPin2, HIGH);
    distance2 = (duration2/2) / 29.1;
 
    Serial.print("sag sensor:");
    Serial.print(distance2);   
    Serial.print("cm");
    Serial.println();
 
 int duration3, distance3;
 
    digitalWrite (trigPin3, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin3, LOW);
    duration3 = pulseIn (echoPin3, HIGH);
    distance3 = (duration3/2) / 29.1;
 
    Serial.print("sag sensor:");
    Serial.print(distance3);   
    Serial.print("cm");
    Serial.println();
    
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  analogWrite(enA, 100);
 
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
 
  analogWrite(enB, 100);
  delay(2000);
 
      if(distance<10 && distance >4)
      
      {
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);  
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);  
 
        delay(750);
        
         
         digitalWrite(in1, LOW);
         digitalWrite(in2, HIGH);  
         digitalWrite(in3, LOW);
         digitalWrite(in4, HIGH);
 
         delay(1750);
 
         digitalWrite(in1, HIGH);
         digitalWrite(in2, LOW);
 
         delay(1750);
 
      }
        
      if(distance2<7 && distance2 >4)
      
      {
        
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(enA, 200);
 
     
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enB, 130); 
 
      delay(1500);
      }
 
      
      if(distance3<7 && distance3 >4)
      
      {
 
      
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(enA, 130);
 
      
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enB, 100); 
 
      delay(1500);
      }
 
      }
