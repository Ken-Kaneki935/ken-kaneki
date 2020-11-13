#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <Color.h>
#include <Drapeau.h>
#include <QPushButton>
#include <QHBoxLayout>
#include <QStackedLayout>
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
MainWindow(QWidget *parent = nullptr);
~MainWindow();
//--- Déclaration des boutons ---//
QPushButton *B1 = new QPushButton("Allemagne");
QPushButton *B2 = new QPushButton("Autriche");
QPushButton *B3 = new QPushButton("Belgique");
QPushButton *B4 = new QPushButton("Bulgarie");
QPushButton *B5 = new QPushButton("Estonie");
QPushButton *B6 = new QPushButton("France");
QPushButton *B7 = new QPushButton("Hongrie");
QPushButton *B8 = new QPushButton("Irlande");
QPushButton *B9 = new QPushButton("Italie");
QPushButton *B10 = new QPushButton("Lettonie");
QPushButton *B11 = new QPushButton("Lituanie");
QPushButton *B12 = new QPushButton("Luxembourg");
QPushButton *B13= new QPushButton("PaysBas");
QPushButton *B14 = new QPushButton("Roumanie");

 // Créer les boutons pour tous les autres drapeaux
public slots:
void Drapeau_ALLEMAGNE();
void Drapeau_Autriche();
void Drapeau_Belgique();
void Drapeau_Bulgarie();
void Drapeau_Estonie();
void Drapeau_France();
void Drapeau_Hongrie();
void Drapeau_Irlande();
void Drapeau_Italie();
void Drapeau_Lettonie();
void Drapeau_Lituanie();
void Drapeau_Luxembourg();
void Drapeau_PaysBas();
void Drapeau_Roumanie();

// Créer les slots de tous les autres drapeaux
private:
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

