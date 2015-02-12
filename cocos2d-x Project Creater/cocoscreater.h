#ifndef COCOSCREATER_H
#define COCOSCREATER_H

#include <QtWidgets/QDialog>
#include <QProcess>
#include "ui_cocoscreater.h"

class CCocosCreater : public QDialog
{
	Q_OBJECT

public:
	CCocosCreater(QWidget *parent = 0);
	~CCocosCreater();

	bool checkPath();

public Q_SLOTS: 
	void slotBrowserClick();
	void slotCreateProject();
	void slotCpp();
	void slotLua();
	void slotJs();
private:
	QProcess mPro;
	QString  mPath;
	QString  mType;
	Ui::CCocosCreaterClass ui;
};

#endif // COCOSCREATER_H
