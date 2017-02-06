#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QtWidgets/QApplication>
#include <QTimer>
#include "gubbe.h"
#include <QGraphicsRectItem>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	//create a scene
	QGraphicsScene * scene = new QGraphicsScene();
	
	//create a player
	Gubbe * gubbe = new Gubbe();
	gubbe->setRect(0, 0, 100, 100);
	
	// add the Item to the scene
	scene->addItem(gubbe);

	// make rect focusable
	gubbe->setFlag(QGraphicsItem::ItemIsFocusable);
	gubbe->setFocus();

	// add a view
	QGraphicsView * view = new QGraphicsView(scene);
	view->show();
	view->setFixedSize(800, 600);
	scene->setSceneRect(0, 0, 800, 600);

	gubbe->setPos(0, view->height() - gubbe->rect().height());

	////spawn block
	//QTimer * timer = new QTimer();
	//QTimer::connect(timer, SIGNAL(timeout()), gubbe, SLOT(spawn()));
	//timer->start(5000);

	return a.exec();
}