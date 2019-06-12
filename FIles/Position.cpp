/*
 * Position.cpp
 *
 *  Created on: Apr 29, 2019
 *      Author: zoytx
 */

#include "Position.h"

Position::Position() {
	xaxis=0;
	yaxis=0;

}

Position::Position(int x,int y) {
	xaxis=x;
	yaxis=y;

}

int Position::getXaxis() const {
	return xaxis;
}

void Position::setXaxis(int xaxis) {
	this->xaxis = xaxis;
}

int Position::getYaxis() const {
	return yaxis;
}

void Position::setYaxis(int yaxis) {
	this->yaxis = yaxis;
}

Position::~Position() {
	// TODO Auto-generated destructor stub
}
void Position::updateposition(int x,int y){
	this->xaxis=x;
	this->yaxis=y;



}
bool Position::operator ==(Position s){
	if(this->getXaxis()*10==10*s.getXaxis() and this->getYaxis()*10==10*s.getYaxis())
		return true;
	else return false;
}

