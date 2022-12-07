#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) :
 QWidget(parent)
 {
	setFixedSize(500, 400);
	m_button = new QPushButton("Hello World", this);
	m_button->setGeometry(10, 10, 100, 50);
	
	connect(m_button, &QPushButton::released, this, &Window::handleButton);

}

void Window::handleButton()
{
  m_button->setText("Example");
  m_button->resize(100,100);
}