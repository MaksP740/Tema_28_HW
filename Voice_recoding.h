//
// Created by MacBook_Air_Maks on 29.04.2026.
//

#ifndef TEMA_28_HW_VOICE_RECODING_H
#define TEMA_28_HW_VOICE_RECODING_H

#include <iostream>
#include <string>
using namespace std;


class Voice_recoding {

protected:
    string speaker;
    int duration;
    string recoding_date;

public:
    Voice_recoding();
    Voice_recoding(string speaker, int duration, string recoding_date);

    void setSpeaker(string speaker);
    void setDuration(int duration);
    void setRecodingDate(string recoding_date);

    string getSpeaker() const;
    int getDuration() const;
    string getRecodingDate() const;

    void showInfo() const;
};


#endif //TEMA_28_HW_VOICE_RECODING_H
