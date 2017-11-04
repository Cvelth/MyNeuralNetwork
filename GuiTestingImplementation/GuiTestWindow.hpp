#pragma once
#include <QtWidgets/QWidget>
#include "ui_GuiTestWindow.h"
#include "Shared.hpp"
GenerateNewException(NoNeuralNetworkInserted);
GenerateNewException(NeuralNetworkSupportError);
namespace mnn { class AbstractNetwork; }
class MultiField;
class GuiTestWindow : public QWidget {
	Q_OBJECT
public:
	GuiTestWindow(QWidget *parent = Q_NULLPTR);
	~GuiTestWindow();
private:
	Ui::GuiTestWindowClass ui;
	mnn::AbstractNetwork *m_currentNetwork;
	QVBoxLayout *m_inputs_layout;
	MultiField *m_inputs_field;
	QPushButton *m_calculate;
	QVBoxLayout *m_outputs_layout;
	MultiField *m_outputs_field;
	QPushButton *m_learn;

public slots:
	void insertNetwork(mnn::AbstractNetwork* network);
};