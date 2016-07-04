#ifndef ROOM_H
#define ROOM_H

class Guest;

//Element
class Room
{
public:
    Room();

    virtual void accept(Guest* guest) = 0;

    bool getFree() const;

    void freeRoom();
    void busyRoom();

private:
    bool free;
};

#endif // ROOM_H
