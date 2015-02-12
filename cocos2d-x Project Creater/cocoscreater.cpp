#include "cocoscreater.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QStringList>
#include <QDir>
CCocosCreater::CCocosCreater(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);
	
	connect(ui.btnCreate,  SIGNAL(clicked()), this, SLOT(slotCreateProject()));
	connect(ui.btnBrowser, SIGNAL(clicked()), this, SLOT(slotBrowserClick()));

	connect(ui.RbtnCpp, SIGNAL(toggled(bool)), this, SLOT(slotCpp())); 
	connect(ui.RbtnLua, SIGNAL(toggled(bool)), this, SLOT(slotLua())); 
	connect(ui.RbtnJs,  SIGNAL(toggled(bool)), this, SLOT(slotJs())); 
}

CCocosCreater::~CCocosCreater()
{

}

void CCocosCreater::slotBrowserClick()
{
	mPath = QFileDialog::getExistingDirectory(this,QStringLiteral("��ѡ�񹤳�·��"), "",QFileDialog::ShowDirsOnly);
	ui.leProjectPath->setText(mPath);
}

void CCocosCreater::slotCreateProject()
{
	if (checkPath())
	{
		QString proName  = ui.leProjectName->text();
		QString packName = ui.lePackageName->text();
		
		QString command = "cocos new " + proName + " -p " + packName + " -l " + mType + " -d " + mPath + "\\";



		QStringList strList;
		strList.append("/c");
		strList.append(command);

		mPro.start("C:\\Windows\\System32\\cmd.exe",strList);

		mPro.waitForStarted();

		mPro.waitForFinished();
		QString strTemp=QString::fromLocal8Bit(mPro.readAllStandardOutput());
		QMessageBox testMassage1;
		testMassage1.setText(strTemp);
		testMassage1.exec();
		//QString a =  mPro.readAllStandardError();
		//if (!a.isEmpty())
		//{
		//	qDebug( "%s", mPro.readAllStandardError() );
		//}
		
	}
	else
	{
		return;
	}
}

bool CCocosCreater::checkPath()
{
	if (ui.leProjectName->text() == "")
	{
		QMessageBox::information(this,QStringLiteral("��Ϣ"),QStringLiteral("�������Ʋ���Ϊ��"),QStringLiteral("ȷ��"));
		return false;
	}
	else if( ui.lePackageName->text() == "")
	{
		QMessageBox::information(this,QStringLiteral("��Ϣ"),QStringLiteral("��������Ϊ��"),QStringLiteral("ȷ��"));
		return false;
	}
	else if (ui.leProjectPath->text() == "" && !QDir(ui.leProjectPath->text()).exists())
	{
		QMessageBox::information(this,QStringLiteral("��Ϣ"),QStringLiteral("����·������ȷ"),QStringLiteral("ȷ��"));
		return false;
	}
	else
	{
		return true;
	}

}

void CCocosCreater::slotCpp()
{
	mType = "cpp";
}

void CCocosCreater::slotLua()
{
	mType = "lua";
}

void CCocosCreater::slotJs()
{
	mType = "js";
}
