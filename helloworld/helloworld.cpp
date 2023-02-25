#include <SFML/Graphics.hpp>
#include <cassert>

int main() {
  sf::RenderWindow window(sf::VideoMode(700, 200), 
                            "Hello, I am a window");
  // create a sf::Font object named font
  // this object store the font data
  sf::Font font;
  // SFML dont use system font, have to provide a file
  if(!font.loadFromFile("./Candy.ttf")) {
    return -1;
  }
  // create a sf::Text object, passing the string, font and
  // the font size
  sf::Text message("Hello, World !", font, 60);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {

      switch (event.type) {
      case sf::Event::EventType::Closed:
        window.close();
        break;      
      }
    }
    window.clear();
    window.draw(message);
    window.display();
  }
 return 0;
}
