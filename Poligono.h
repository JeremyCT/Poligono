class Poligono
{
protected:
    static int numPoli;
    PointArray points;
public:
    Poligono(const PointArray &pa);
    Poligono(const Point points[], const int numPoli);
    virtual double area() const=0;
    static int getnumPoli()
    {
        return numPoli;
    }
    int getNumSides()const { return points.getSize();}
    const PointArray *getPoints() const { return &points;}
    ~Poligono(){--numPoli;}
};
