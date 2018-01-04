#ifdef BISHOP_H
#define BISHOP_H

class Bishop
{
public:
	Bishop(int x, int y, bool b);
	
	void move(int xTar, int yTar);
	
	bool checkValid(int xTar, int yTar);
	
	int get_xPos();
	
	int get_yPos();
	
private:
	int xPos;
	int yPos;
	bool black;
}

#endif