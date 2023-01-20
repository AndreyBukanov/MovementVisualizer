#ifndef IPOLARCAM_H
#define IPOLARCAM_H


class IPolarCam
{
public:
    virtual ~IPolarCam();

    /*
     * Return cam distance according the angle in radian and selected phase
     */
    virtual double value(double angle, double phase) = 0;
};

#endif // IPOLARCAM_H
