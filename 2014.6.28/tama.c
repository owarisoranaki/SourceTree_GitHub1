float x=0,y=0;
float vx=1,vy=1;

void setup(){
  size(900,900);
}

void draw(){
  background(0,255,255);//haikei
  strokeWeight(20);//utigawa_ironuri
  ellipse(x,y,20,20);//tama_ensyuu
  
  x+=vx;
  y+=vy;
  
  vy+=0.05f;
  
  if(x<0||width<x){
    vx*=-1;
  }
  if(y<0||height/1.5<y){
    //vy*=-1.1f;//donndonnhayakunaruyo
     vy*=-1;
  }
}