#include "Gubbe.h"
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include "Block.h"
#include <QList.h>
#include <Block.h>

Gubbe::Gubbe() :/*QObject(),*/ QGraphicsRectItem()
{
//
//	QTimer *timer = new QTimer(this);
//	connect(timer, SIGNAL(timerout()), this, SLOT(move()));
//
//	timer->start(0);
//}

//void Gubbe::move()
//{
//	QList < QGraphicsItem*>colliding_items = collidingItems();
//	for (int i = 0, n = colliding_items.size(); i < n; ++i){
//
	}
//	//move gubbe right
//	setPos(x() + 50, y());
//}

void Gubbe::keyPressEvent(QKeyEvent * event)
{
	if (event->key() == Qt::Key_Right){
		setPos(x() + 10, y());
	}
	else if (event->key() == Qt::Key_Up){
		setPos(x(), y() - 10);
	}
	else if (event->key() == Qt::Key_Down){
		setPos(x(), y() + 10);
	}
}

//void Gubbe::spawn(){
//	Block * block = new Block();
//	scene()->addItem(block);
//
//}