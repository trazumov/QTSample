#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget
{
	public:
  		explicit Window(QWidget *parent = 0);
	private slots:
  		void handleButton();
 	private:
 		QPushButton *m_button;
};

#endif