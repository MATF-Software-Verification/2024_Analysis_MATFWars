#ifndef RESULT_H
#define RESULT_H

#include <QCoreApplication>
#include <QDebug>
#include <QDialog>
#include <QString>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#include <vector>

namespace Ui
{
class Result;
}

class Result : public QDialog
{
  Q_OBJECT

public:
  explicit Result (QWidget *parent = nullptr);
  ~Result ();
  void evaluateForLeaderboard (int score);

signals:
  void menuResultClicked ();

private slots:
  void on_menu_result_button_clicked ();

  void on_enter_result_button_clicked ();

private:
  void loadLeaderboardMembers ();

protected:
  bool eventFilter (QObject *watched, QEvent *event) override;

private:
  Ui::Result *ui;
  std::vector<std::pair<int, std::string> > m_leaderboardMembers;
  QString menuStyle;
  QString enterStyle;
};

#endif // RESULT_H
