/*
 * Position.h
 *
 *  Created on: Apr 29, 2019
 *      Author: zoytx
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position {
protected:
int xaxis;
int yaxis;
public:
	Position();
	Position(int x,int y);

	virtual ~Position();
	int getXaxis() const;
	void setXaxis(int xaxis);
	int getYaxis() const;
	void setYaxis(int yaxis);
	void updateposition(int x,int y);
	bool operator ==(Position s);
};

#endif /* POSITION_H_ */
