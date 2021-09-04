#include "SFML/Graphics.hpp"

using namespace sf;

bool intersects(RectangleShape&, RectangleShape&);

int main(){
  const int width = 640;
  const int height = 480;

  RenderWindow window(VideoMode(width, height), "Pong!", Style::Default);
  window.setFramerateLimit(60);

  RectangleShape paddleRight, paddleLeft, ball, upperWall, lowerWall, leftWall, rightWall;

  // setting up paddleRight
  paddleRight.setSize(Vector2f(10.0f, 40.0f));
  paddleRight.setFillColor(Color::White);
  paddleRight.setPosition(635.0f, 220.0f);

  // setting up paddleLeft
  paddleLeft.setSize(Vector2f(10.0f, 40.0f));
  paddleLeft.setFillColor(Color::White);
  paddleLeft.setPosition(5.0f, 220.0f);

  // setting up ball
  ball.setSize(Vector2f(10.0f, 10.0f));
  ball.setFillColor(Color::Red);
  ball.setPosition(width/2, height/2);
  Vector2f ballSpeed(5.0f, 3.0f);

  // setting up upperWall
  upperWall.setSize(Vector2f(width, 3.0f));
  upperWall.setFillColor(Color::Yellow);
  upperWall.setPosition(0.0f, 0.0f);

  // setting up lowerWall
  lowerWall.setSize(Vector2f(width, 3.0f));
  lowerWall.setFillColor(Color::Yellow);
  lowerWall.setPosition(0.0f, height-3);

  // setting up leftWall
  leftWall.setSize(Vector2f(3.0f, height));
  leftWall.setFillColor(Color::Yellow);
  leftWall.setPosition(0.0f, 0.0f);

  // setting up rightWall
  rightWall.setSize(Vector2f(width, 3.0f));
  rightWall.setFillColor(Color::Yellow);
  rightWall.setPosition(width-3, 0.0f);

  bool leftGoing = false, rightGoing = true, upGoing = false, downGoing = true;

  while(window.isOpen()){
    Event ev;

    while(window.pollEvent(ev)) if(ev.type == Event::Closed || ev.key.code == Keyboard::Escape) window.close();

    // paddleLeft user defined movement
    if(Keyboard::isKeyPressed(Keyboard::Key::Up) && paddleLeft.getPosition().y >= 3.0f) paddleLeft.move(0.0f, -4.0f);
    else if (Keyboard::isKeyPressed(Keyboard::Key::Down) && paddleLeft.getPosition().y <= 437.0f) paddleLeft.move(0.0f, 4.0f);

    // ball hitting paddleRight and paddleLeft
    if(intersects(ball, paddleRight) && upGoing){
      ballSpeed.x = -ballSpeed.x;
      rightGoing = false;
      leftGoing = true;
    }
    else if(intersects(ball, paddleRight) && downGoing){
      ballSpeed.x = -ballSpeed.x;
      rightGoing = false;
      leftGoing = true;
    }
    else if(intersects(ball, paddleLeft) && upGoing){
      ballSpeed.x = -ballSpeed.x;
      rightGoing = true;
      leftGoing = false;
    }
    else if(intersects(ball, paddleLeft) && downGoing){
      ballSpeed.x = -ballSpeed.x;
      rightGoing = true;
      leftGoing = false;
    }

    // ball hitting upperWall and lowerWall
    if(intersects(ball, upperWall) && leftGoing){
      ballSpeed.y = -ballSpeed.y;
      upGoing = false;
      downGoing = true;
    }
    else if(intersects(ball, upperWall) && rightGoing){
      ballSpeed.y = -ballSpeed.y;
      upGoing = false;
      downGoing = true;
    }
    else if(intersects(ball, lowerWall) && leftGoing){
      ballSpeed.y = -ballSpeed.y;
      upGoing = true;
      downGoing = false;
    }
    else if(intersects(ball, lowerWall) && rightGoing){
      ballSpeed.y = -ballSpeed.y;
      upGoing = true;
      downGoing = false;
    }

    // if((intersects(ball, rightWall) && upGoing) || (intersects(ball, rightWall) && downGoing)){
    //   ballSpeed.y = -ballSpeed.y;
    //   leftGoing = false;
    //   rightGoing = true;
    // }

    ball.move(ballSpeed);

    // paddleRight auto movement
    if(paddleRight.getPosition().y >= 3.0f || paddleRight.getPosition().y <= (height-43)) paddleRight.setPosition(635.0f, ball.getPosition().y-20);
    
    window.clear(Color::Black);
    window.draw(paddleRight);
    window.draw(paddleLeft);
    window.draw(ball);
    window.draw(upperWall);
    window.draw(lowerWall);
    window.draw(leftWall);
    window.draw(rightWall);
    window.display();
  }

  return 0;
}

bool intersects(RectangleShape& r1, RectangleShape& r2){
  FloatRect a = r1.getGlobalBounds();
  FloatRect b = r2.getGlobalBounds();

  return a.intersects(b);
}
