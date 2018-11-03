#ifndef KARTA_H
#define KARTA_H


class karta
{
    public:
        karta();
        virtual ~karta();
        virtual int vrat_nakup_cena();

    protected:

 //   private:
        int m_nakup_cena;
};

#endif // KARTA_H
