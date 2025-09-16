#ifndef PLAYER_H
#define PLAYER_H

#include <QJsonObject>
#include <QPointF>
#include <QString>

class Player
{
public:
  Player (QString name = "player");
  virtual QString name () const;

  virtual void setName (const QString &newName);

  QPointF coordinate () const;
  void setCoordinates (QPointF newCoordinates);
  double diameter () const;
  void flipX ();
  QJsonObject createJson ();

  int playerID () const;
  void setPlayerID (int newPlayerID);

private:
  QString m_name;
  QPointF m_coordinate;
  int m_playerID;
  double m_diameter = 1.0;
};

#endif // PLAYER_H
