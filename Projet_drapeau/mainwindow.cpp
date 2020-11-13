#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
, ui(new Ui::MainWindow)
{
ui->setupUi(this);
setWindowTitle("Drapeaux tricolores UE");
resize(700,400);

QPixmap bkgnd ("/home/sn2/Bureau/fond.jpg");
bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
QPalette palette;
palette.setBrush(QPalette::Background, bkgnd);
this->setPalette(palette);

//--- Layout des boutons ---//
QVBoxLayout *Pagelayout = new QVBoxLayout;
QHBoxLayout *Hlayout1 = new QHBoxLayout;
QHBoxLayout *Hlayout2 = new QHBoxLayout;
Pagelayout->addLayout(Hlayout1);

Pagelayout->addLayout(Hlayout2);
this->B1->setGeometry(50, 100, 100, 50);

//Complétez le dimensionnement de tous les boutons
//--- Connexion du signal "clicked()" avec le slot de chaque drapeau ---//
connect(B1, SIGNAL(clicked()),this, SLOT(Drapeau_ALLEMAGNE()));
connect(B2, SIGNAL(clicked()),this, SLOT(Drapeau_Autriche()));
connect(B3, SIGNAL(clicked()),this, SLOT(Drapeau_Belgique()));
connect(B4, SIGNAL(clicked()),this, SLOT(Drapeau_Bulgarie()));
connect(B5, SIGNAL(clicked()),this, SLOT(Drapeau_Estonie()));
connect(B6, SIGNAL(clicked()),this, SLOT(Drapeau_France()));
connect(B7, SIGNAL(clicked()),this, SLOT(Drapeau_Hongrie()));
connect(B8, SIGNAL(clicked()),this, SLOT(Drapeau_Irlande()));
connect(B9, SIGNAL(clicked()),this, SLOT(Drapeau_Italie()));
connect(B10, SIGNAL(clicked()),this, SLOT(Drapeau_Lettonie()));
connect(B11, SIGNAL(clicked()),this, SLOT(Drapeau_Lituanie()));
connect(B12, SIGNAL(clicked()),this, SLOT(Drapeau_Luxembourg()));
connect(B13, SIGNAL(clicked()),this, SLOT(Drapeau_PaysBas()));
connect(B14, SIGNAL(clicked()),this, SLOT(Drapeau_Roumanie()));

// Complétez toutes les connexions
//--- Ajout des bouton au Widget Horizotal ---//
Hlayout1->addWidget(B1);
Hlayout1->addWidget(B2);
Hlayout1->addWidget(B3);
Hlayout1->addWidget(B4);
Hlayout1->addWidget(B5);
Hlayout1->addWidget(B6);
Hlayout1->addWidget(B7);
Hlayout2->addWidget(B8);
Hlayout2->addWidget(B9);
Hlayout2->addWidget(B10);
Hlayout2->addWidget(B11);
Hlayout2->addWidget(B12);
Hlayout2->addWidget(B13);
Hlayout2->addWidget(B14);

//Ajouter les boutons aux widgets Hlayout1 et Hlayout2

QWidget *widget = new QWidget;
widget->setLayout(Pagelayout);
setCentralWidget(widget);
}
void MainWindow::Drapeau_ALLEMAGNE(){Drapeau *A = new Drapeau("Black","red","gold","Horizontal","Allemagne");}
void MainWindow::Drapeau_Autriche(){Drapeau *B = new Drapeau("red","white","red","Horizontal","Autriche");}
void MainWindow::Drapeau_Belgique(){Drapeau *C = new Drapeau("Black","gold","red","Vertical","Belgique");}
void MainWindow::Drapeau_Bulgarie(){Drapeau *D = new Drapeau("white","green","red","Horizontal","Bulgarie");}
void MainWindow::Drapeau_Estonie(){Drapeau *E = new Drapeau("blue","black","white","Horizontal","Estonie");}
void MainWindow::Drapeau_France(){Drapeau *F = new Drapeau("Blue","white","red","Vertical","France");}
void MainWindow::Drapeau_Hongrie(){Drapeau *G = new Drapeau("red","white","green","Horizontal","Hongrie");}
void MainWindow::Drapeau_Irlande(){Drapeau *H = new Drapeau("green","white","orange","Vertical","Irlande");}
void MainWindow::Drapeau_Italie(){Drapeau *I = new Drapeau("green","white","red","Vertical","Italie");}
void MainWindow::Drapeau_Lettonie(){Drapeau *J = new Drapeau("gold","green","red","Horizontal","Lettonie");}
void MainWindow::Drapeau_Lituanie(){Drapeau *K = new Drapeau("gold","green","red","Horizontal","Lituanie");}
void MainWindow::Drapeau_Luxembourg(){Drapeau *L = new Drapeau("red","white","blue","Horizontal","Luxembourg");}
void MainWindow::Drapeau_PaysBas(){Drapeau *M = new Drapeau("red","white","blue","Horizontal","PaysBas");}
void MainWindow::Drapeau_Roumanie(){Drapeau *N = new Drapeau("blue","gold","red","Vertical","Roumanie");}

// Complétez tous les slots
MainWindow::~MainWindow()
{
delete ui;
}


