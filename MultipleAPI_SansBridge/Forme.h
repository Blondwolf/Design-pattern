#ifndef FORME_H
#define FORME_H


class Forme
{
    public:
        Forme();
        virtual ~Forme();
        void draw();
    protected:
        virtual void paint();
    private:
};

#endif // FORME_H
