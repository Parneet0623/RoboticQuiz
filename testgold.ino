#include<AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);           // set up Serial library at 9600 bps
  
  motor1.setSpeed(75);     // set the speed to 100/255
  //motor2.setSpeed(100);     // do the same for the others...
  motor3.setSpeed(175);    
  motor4.setSpeed(200);
  Serial.println("Q1 : How many games have RCB won this season?");
}
int a=0;
void sttrue();
void stfalse();
int score=0;
void loop() {
  // put your main code here, to run repeatedly:
  
if(Serial.available()>0){
       
    a=Serial.parseInt();
    if(a==0)
    {
      Serial.println("If you are a Kohli fan,then I am sorry");
      sttrue();
      score++;
    }
    else
    {
     Serial.println("What in the world were you thinking?");
     stfalse();  
    }
    Serial.println("Q2 : In which year was Thapar built?");
    delay(6000);
   a=Serial.parseInt();
   if(a==1956)
   {
    Serial.println("Correct");
    sttrue();
    score++; 
   }
   else
   {Serial.println("Ooopppssss!!!");
    stfalse();}

    Serial.println("Q3 : Can we pass class objects as arguments to non-member functions ? "); 
    Serial.println("1->Yes 2->No");
    delay(6000);
    a=Serial.parseInt();
    if(a==1)
    {
     Serial.println("Correct"); 
     sttrue(); 
     score++; 
    }
    else
    {
     Serial.println("INCORRECT!!");
     stfalse();  
    }
    Serial.println("Q4 : If the following 4 statements are presented. Determine which is true:");
    Serial.println("1. Only one satement is false. ");
    Serial.println("2. Two statements are false.");
    Serial.println("3. Four statements are fase.");
    Serial.println("4. Three statements are false.");
    delay(6000);
    a=Serial.parseInt();
    if(a==4)
    {
      Serial.println("Correct.");
      sttrue();
      score++;
      }
      else
      {Serial.println("Incorrect");
       stfalse();
      }
    Serial.println("Q5 : Which is better 1)Moosewala or 2)Aujla ?");
    delay(6000);
   a=Serial.parseInt();
   if(a==1)
   {
    Serial.println("DIL DA NI MADAAA!"); 
    sttrue();
    score++;
   }
   else
   {
    Serial.println("Seriously!!");
    stfalse(); 
   }
   Serial.println("The score is :");
   Serial.println(score);
   while(true){}
  }
  
}
  
 
  void sttrue(){ 
   motor1.run(FORWARD);
   delay(600);
   motor1.run(RELEASE);
   motor3.run(BACKWARD);
 motor4.run(FORWARD);
 delay(300);
 motor4.run(RELEASE);
 motor3.run(RELEASE);
 motor3.run(FORWARD);
 motor4.run(BACKWARD);
 delay(600);
 motor4.run(RELEASE);
 motor3.run(RELEASE);
 motor1.run(BACKWARD);
 delay(600);
 motor1.run(RELEASE);
  }
 void stfalse()
 {
   motor1.run(BACKWARD);
   delay(500);
   motor1.run(RELEASE);
   motor3.run(BACKWARD);
 motor4.run(FORWARD);
 delay(300);
 motor4.run(RELEASE);
 motor3.run(RELEASE);
 motor3.run(FORWARD);
 motor4.run(BACKWARD);
 delay(600);
 motor4.run(RELEASE);
 motor3.run(RELEASE);
 motor1.run(FORWARD);
 delay(500);
 motor1.run(RELEASE);

  }
