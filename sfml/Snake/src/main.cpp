#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

using namespace std;
using namespace sf;

int main(){
  RenderWindow window(VideoMode(600, 400), "Snake Game!", Style::Titlebar);
  window.setFramerateLimit(60); 
  
  return 0;
}
