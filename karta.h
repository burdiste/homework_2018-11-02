#ifndef KARTA_H
#define KARTA_H


class karta
{
    public:
        karta();
        virtual ~karta();
        virtual int vrat_nakup_cena();
    protected:
        int m_nakup_cena = 0;
    private:

};

#endif // KARTA_H
