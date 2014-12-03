#include <Servo.h> 

Servo ServoC;
Servo ServoL;
Servo ServoR;

#define MIN           40
#define MAX           60



#define MAXC          100
#define MINC           60
#define MAXR          120
#define MINR           60
#define MAXL          110
#define MINL           70


#define FRAME_DELAY   600

void setup() {
    Serial.begin(9600);           // set up Serial library at 9600 bps
    Serial.println("Motor party!");
    delay(1000);  

    AttachServos();

}

void AttachServos()
{
    ServoC.attach(6);
    ServoL.attach(5);
    ServoR.attach(3);
}

void DetachServos()
{
    ServoC.detach();
    ServoL.detach();
    ServoR.detach();
}

void frame0()
{
    Serial.println("frame 0");
//    ServoR.write(MAX);
//    ServoC.write(MIN);
//    ServoL.write(MAX);

    ServoR.write(MAXR);
    ServoC.write(MINC);
    ServoL.write(MAXL);

    delay(FRAME_DELAY);
}

void frame1()
{
    Serial.println("frame 1");
//    ServoR.write(MIN);
//    ServoC.write(MIN);
//    ServoL.write(MIN);

    ServoR.write(MINR);
    ServoC.write(MINC);
    ServoL.write(MINL);
    delay(FRAME_DELAY);
}

void frame2()
{
    Serial.println("frame 2");
//    ServoR.write(MIN);
//    ServoC.write(MAX);
//    ServoL.write(MIN);

    ServoR.write(MINR);
    ServoC.write(MAXC);
    ServoL.write(MINL);
    delay(FRAME_DELAY);
}

void frame3()
{
    Serial.println("frame 3");
//    ServoR.write(MAX);
//    ServoC.write(MAX);
//    ServoL.write(MAX);

    ServoR.write(MAXR);
    ServoC.write(MAXC);
    ServoL.write(MAXL);
    delay(FRAME_DELAY);
}

void forward()
{
    Serial.println("forward");
//    AttachServos();
    frame0();
    frame1();
    frame2();
    frame3();
//    DetachServos();
}
void loop() {
    forward();
/*    AttachServos();
    delay(1000);


    ServoC.write(90);
    ServoL.write(90);
    ServoR.write(90);
    delay(10000);
    ServoC.write(MINC);
    ServoL.write(MINL);
    ServoR.write(MINL);
    delay(10000);
    ServoC.write(MAXC);
    ServoL.write(MAXL);
    ServoR.write(MAXR);
    delay(10000);
    DetachServos();
    delay(1000);
*/    
}
