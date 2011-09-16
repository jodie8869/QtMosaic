/**
 * \file qtmosaic.h
 */

#ifndef QTMOSAIC_H
#define QTMOSAIC_H

#include <QtGui/QMainWindow>
#include "ui_qtmosaic.h"

class QtMosaicDatabase;

class QtMosaic : public QMainWindow
{
	Q_OBJECT

public:
	QtMosaic(QWidget *parent = 0, Qt::WFlags flags = 0);
	~QtMosaic();

private:
	Ui::QtMosaicClass ui;
  QAction *openAct;
  QAction *saveAct;
  QAction *exitAct;
  QAction *openDatabaseAct;
  QAction *editDatabaseAct;

  void createActions();
  void createToolbar();
  void createMenubar();

  void loadFile(QString fileName);
  void saveFile(QString fileName);

  QtMosaicDatabase* databaseUI;

public slots:
  void open();
  void save();

  void editDatabase();
};

#endif // QTMOSAIC_H
