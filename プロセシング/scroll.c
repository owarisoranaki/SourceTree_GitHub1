class circle {
  float x, y, r;
  circle() {
    x = random(width);
    y = random(height);
    r = 30;
  }
  void draw1() {
    ellipse(x, y, 2*r, 2*r);
  }
  boolean isHit(float px, float py) {
    float dx = px - x;
    float dy = py - y;
    return dx*dx+dy*dy < r*r;
  }
}

circle target;
int m_po=0;

void setup() {
   frameRate(60);
  size(600, 600);
  target = new circle();
}

void draw() {
  
  if(m_po==0){
    background(255,255,255);
  }
  
  color c = color(255, 255, 255);
  if (target.isHit(mouseX, mouseY)&&m_po==1) {
   c = color(255, 0, 0);
    background(100,mouseY,mouseX);
    target.x=mouseX;
    target.y=mouseY;
  }
  fill(c);
  target.draw1();
}

void mousePressed(){
  m_po=1;
}

void mouseReleased(){
  m_po=0;
}

//mouseDragged