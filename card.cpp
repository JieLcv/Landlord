#include "card.h"

Card::Card()
{

}

Card::Card(Card::CardPoint point, Card::CardSuit suit)
{
    setPoint(point);
    setSuit(suit);
}

void Card::setPoint(Card::CardPoint point)
{
    m_point = point;
}

void Card::setSuit(Card::CardSuit suit)
{
    m_suit = suit;
}

Card::CardPoint Card::point() const
{
    return m_point;
}

Card::CardSuit Card::suit()const
{
    return m_suit;
}


bool operator ==(const Card &left, const Card &right)
{
    return left.point() == right.point() && left.suit() == right.suit();
}

uint qHash(const Card &card)
{
    return card.point()*100 + card.suit();
}

bool lessSort(const Card &c1, const Card &c2)
{
    if(c1.point() == c2.point())
    {
        return c1.suit() < c2.suit();
    }
    else
    {
        return c1.point() < c2.point();
    }
}

bool greatSort(const Card &c1, const Card &c2)
{
    if(c1.point() == c2.point())
    {
        return c1.suit() > c2.suit();
    }
    else
    {
        return c1.point() > c2.point();
    }
}

bool operator <(const Card &left, const Card &right)
{
    return lessSort(left, right);
}
