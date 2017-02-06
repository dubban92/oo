#pragma once
#include <QtWidgets/QMainWindow>
#include <QGraphicsRectItem>
#include <QObject>

class Gubbe : /*public QObject, */public QGraphicsRectItem
{
	/*Q_OBJECT*/
public:
	void keyPressEvent(QKeyEvent * event);
	Gubbe();

//public slots:
//	void move();
//	void spawn();
};