class Circle{
    private:
        double r;
        double d;
    public:

    Circle(double radius, double diameter){
        this->r = radius;
        this->d = diameter;
    }
    
    void setRadius(double radius){
        this->r = radius;
    }

    void setDiameter(double diameter){
        this->d = diameter;
    }

    double getRadius(){
        return this->r;
    }

    double getDiameter(){
        return this->d;
    }

    double calcArea();
    double calcCircum();


};