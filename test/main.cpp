#include <SFML/Graphics.hpp>
#include <unistd.h>

void insertionSort();
void dispSort(int id);

sf::RenderWindow window(sf::VideoMode(1300,600), "SFML works!");
const int n = 100;
float blockH[100];
unsigned int microsecond = 100000;
bool sorted = false;

int main() {
  for (int i=0; i < n; i++) {
    blockH[i] = (rand()%500);
  }

  while (window.isOpen()) {

    sf::Event event;
      while (window.pollEvent(event)) {

        switch (event.type) {
          case sf::Event::EventType::Closed:
          window.close();
          break;
        }
      }
    if(!sorted) {
      dispSort(0);
      insertionSort();
    }
  }

  return 0;

}


void insertionSort() {
  usleep(microsecond*5);
  int i, key, j;
  for (i=0; i < n; i++) {
    key = blockH[i];
    j = i - 1;

    while (j >= 0 && blockH[j] > key) {
      blockH[j+1] = blockH[j];
      j = j - 1;
      dispSort(j);
    }
    blockH[j + 1] = key;
  }

  sorted = true;
  dispSort(i);  

}

void dispSort(int id) {
  window.clear();
  for (int i=0; i < n; i++) {
    sf::RectangleShape block(sf::Vector2f(10, blockH[i]));
    block.setPosition(i*12, 600-blockH[i]);
    block.setFillColor(sorted || i==id? sf::Color::Green : sf::Color::White); window.draw(block);
  }
  window.display();
}


