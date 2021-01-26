#include "leg_constuctor.h"

void BaseSettings::setToDefault()
{
    baselength = 165;

    sholderLength   = 49;
    sholderMinAngle = 0;
    sholderMaxAngle = 0;

    forearmLength   = 60;
    forearmMinAngle = 0;
    forearmMaxAngle = 0;

    centerHeight  = 70;
    semiMajorAxis = 100;
    semiMinorAxis = 20;

    phaseOffset  = 0;
}

Leg LegConstructor::solve(LegSettings &settings, IPolarShape *trajectory)
{
    Leg leg;

    //=========================================================

    Geometry::Dot begin = trajectory->center();
    Geometry::Dot end   = trajectory->value(settings.phase);

    leg.chord = Geometry::Vector(begin, end);

    //=========================================================

    begin = settings.origin;
    end = leg.chord.end;

    leg.support = Geometry::Vector(begin, end);

    //=========================================================

    Geometry::Vector Xbasis = Math::basisX();

    double supportAngle = Math::angle(leg.support, Xbasis);

    double supportLength = Math::length(leg.support);

    double alpha = Math::triangleAngle(settings.sholder, supportLength, settings.forearm);
    double betta = Math::triangleAngle(settings.sholder, settings.forearm, supportLength);

    alpha = settings.inverted ? -alpha : alpha;
    betta = settings.inverted ? -betta : betta;

    double sholderAngle = supportAngle - alpha - Math::pi;
    double forearmAngle = sholderAngle - betta + Math::pi;

    leg.shoulder = Math::decart(settings.sholder, sholderAngle);
    leg.forearm = Math::decart(settings.forearm, forearmAngle);

    leg.shoulder = Math::moveVector(leg.shoulder, leg.support.begin);
    leg.forearm = Math::moveVector(leg.forearm, leg.shoulder.end);

    //=========================================================

    return leg;
}
