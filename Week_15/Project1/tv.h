#ifndef TV_H_
#define TV_H_

class Remote;
class Tv
{
public:
    friend class Remote; // Remote can access Tv private parts
    enum { Off, On };
    enum { MinVal, MaxVal = 20 };
    enum { Antenna, Cable };
    enum { TV, DVD };

    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}

    void onoff() { state = (state == On) ? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();

    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV; }
    void settings() const; // display all settings
    void PD(Remote &r)
    {
        if (this->state)
        {
            std::cout << "After toggling the Remote state:" << std::endl;
            std::cout << "The state of Remote is Interactive" << std::endl;
        }

    }
private:
    int state; // on or off
    int volume; // assumed to be digitized
    int maxchannel; // maximum number of channels
    int channel; // current channel setting
    int mode; // broadcast or cable
    int input; // TV or DVD
};

class Remote
{
private:
    int mode; // controls TV or DVD
    int State;
    

public:
    friend class TV;
    enum { Normal, Interactive };

    Remote(int m = Tv::TV) : mode(m),State(Normal) {}
    //Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    bool volup(Tv& t) { return t.volup(); }
    bool voldown(Tv& t) { return t.voldown(); }
    void onoff(Tv& t) { t.onoff(); }
    void chanup(Tv& t) { t.chanup(); }
    void chandown(Tv& t) { t.chandown(); }
    void NI() { State = (State == Interactive) ? Normal : Interactive; }
    void set_chan(Tv& t, int c) { t.channel = c; }//access the private member

    void set_mode(Tv& t) { t.set_mode(); }
    void set_input(Tv& t) { t.set_input(); }
    void statepd(Tv& t)
    {
        if (t.state == 0)
        {
            std::cout << "The state of Remote is Normal" << std::endl;
            std::cout << "The TV is off, you can not toggle the remote state" << std::endl;
            this->State = 0;
        }
           
        if (t.state == 1)
        {
            std::cout << "After toggling the Remote state:" << std::endl;
            std::cout << "The state of Remote is Interactive" << std::endl;
            this->State = 1;

        }
            
    }
};
#endif
#pragma once
