//
// Created by MacBook_Air_Maks on 29.04.2026.
//

#include "Voice_recoding.h"

Voice_recoding::Voice_recoding() {
    speaker = "Невідомо";
    duration = 0;
    recoding_date = "Невідома";
}

Voice_recoding::Voice_recoding(string speaker, int duration, string recoding_date) {
    this->speaker = speaker;
    this->duration = duration;
    this->recoding_date = recoding_date;
}

void Voice_recoding::setSpeaker(string speaker) {
    this->speaker = speaker;
}

void Voice_recoding::setDuration(int duration) {
    this->duration = duration;
}

void Voice_recoding::setRecodingDate(string recoding_date) {
    this->recoding_date = recoding_date;
}

string Voice_recoding::getSpeaker() const {
    return speaker;
}

int Voice_recoding::getDuration() const {
    return duration;
}

string Voice_recoding::getRecodingDate() const {
    return recoding_date;
}

void Voice_recoding::showInfo() const {

    cout << "\n=====================================\n";
    cout << "            АУДІОЗАПИС \n";
    cout << "=====================================\n";

    cout << "Спікер            : " << speaker << endl;
    cout << "Тривалість        : " << duration / 60
     << " хв " << duration % 60 << " сек" << endl;
    cout << "Дата запису       : " << recoding_date << endl;

    cout << "=====================================\n";
}
