#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

using namespace std;
using namespace sf;

void UserControl(RectangleShape&);
void AI(RenderWindow&, RectangleShape&, RectangleShape&, CircleShape&);
void Draw(RenderWindow&, RectangleShape&, RectangleShape&, CircleShape&);

int main(){
  RenderWindow window(VideoMode(600, 400), "Pong", Style::Titlebar);
  window.setFramerateLimit(60);

  CircleShape ball;
  RectangleShape paddleLeft(Vector2f(5.0f, 25.0f));
  RectangleShape paddleRight(Vector2f(5.0f, 25.0f));

  paddleLeft.setFillColor(Color::White);
  paddleLeft.setPosition(3.0f, window.getSize().y/2);
  
  paddleRight.setFillColor(Color::White);
  paddleRight.setPosition(592.0f, window.getSize().y/2);

  ball.setRadius(3.0f);
  ball.setFillColor(Color::White);
  ball.setPosition(window.getSize().x/2, window.getSize().y/2);

  while(window.isOpen()){
      Event ev;

      while(window.pollEvent(ev)){
	if(ev.type == Event::Closed) window.close();
	if(ev.key.code == Keyboard::Escape) window.close();
      }

      UserControl(paddleLeft);
      AI(window, paddleRight, paddleLeft, ball);
      Draw(window, paddleLeft, paddleRight, ball);
    }
  
  return 0;
}

void Draw(RenderWindow& window, RectangleShape& paddleLeft, RectangleShape& paddleRight, CircleShape& ball){
  window.clear();
  
  window.draw(ball);
  window.draw(paddleLeft);
  window.draw(paddleRight);

  window.display();
}

void UserControl(RectangleShape& paddleLeft){
  if(Keyboard::isKeyPressed(Keyboard::Key::Up) && paddleLeft.getPosition().y >= 0.0f) paddleLeft.move(0.0f, -5.0f);
  if(Keyboard::isKeyPressed(Keyboard::Key::Down) && paddleLeft.getPosition().y <= 375.0f) paddleLeft.move(0.0f, 5.0f);
}

void AI(RenderWindow& window, RectangleShape& paddleRight, RectangleShape& paddleLeft, CircleShape& ball){
  // ball.move(0.0f, 1.0f);
  
  bool leftGoing = true;
  bool rightGoing = false;
  bool upGoing = false;
  bool downGoing = true;

  
  // paddleRight automovement
   if(paddleRight.getPosition().y >= 0.0f && paddleRight.getPosition().y <= 375.0f) paddleRight.setPosition(window.getSize().x-8, ball.getPosition().y);

  // ball hitting paddleLeft
  if((ball.getPosition().x >= paddleLeft.getPosition().x && ball.getPosition().x <= (paddleLeft.getPosition().x+25.0f)) && (ball.getPosition().y <= (paddleLeft.getPosition().y+5.0f))){
    if(upGoing) ball.move(4.0f, -1.0f);
    else if(downGoing) ball.move(4.0f, 1.0f);
    rightGoing = true;
    leftGoing = false;
  }
  // ball hitting paddleRight
  else if((ball.getPosition().y + 6.0f) >= paddleRight.getPosition().y){
    if(upGoing) ball.move(-4.0f, -1.0f);
    else if(downGoing) ball.move(-4.0f, 1.0f);
    rightGoing = false;
    leftGoing = true;
  }

  // ball hitting lower wall
  if((ball.getPosition().y >= 394.0f) && rightGoing){
    ball.move(2.0f, 2.0f);
    upGoing = true;
    downGoing = false;
  }
  else if((ball.getPosition().y >= 394.0f) && leftGoing){
    ball.move(-2.0f, 2.0f);
    upGoing = true;
    downGoing = false;
  }
  // ball hitting upper wall
  else if((ball.getPosition().y <= 0.0f) && rightGoing){
    ball.move(2.0f, -2.0f);
    upGoing = false;
    downGoing = true;
  }
  else if((ball.getPosition().y <= 0.0f) && leftGoing){
    ball.move(-2.0f, -2.0f);
    upGoing = false;
    downGoing = true;
  }
}

