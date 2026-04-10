#include "flight/flight.h"
#include "flight/flightrw.h"
#include <fstream>
#include <iostream>

void flightread() { // 读取
  std::ifstream file("flight.txt");
  if (!(file.is_open())) {
    std::cerr << "找不到叫做flight.txt的文件" << std::endl;
    return;
  }
  flights.clear();
  Flight flight;
  while (file >> flight.flight >> flight.departure >> flight.destination >>
         flight.departuretime >> flight.distance) {
    flights.push_back(flight);
  }
}

void flightwrite() { // 写入
  std::ofstream file("flight.txt");
  if (!(file.is_open())) {
    std::cerr << "找不到叫做flight.txt的文件" << std::endl;
    return;
  }
  for (const auto& flight : flights) {
    file << flight.flight << " " << flight.departure << " " << flight.destination
         << " " << flight.departuretime << " " << flight.distance << std::endl;
  }
}
