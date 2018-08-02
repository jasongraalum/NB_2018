#ifndef _Room_hpp_
#define _Room_hpp_

#include <iostream>
#include <cstring>

using namespace std;

class Room {
   private:
      bool visited;
 //     Object * objects;
      char * description;
   public:
      Room * doors[4];
      Room();
      Room(char *);
      void describe();
      void player_enters();
      void player_exits();
};
#endif
