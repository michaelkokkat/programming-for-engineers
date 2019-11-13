/*****************************************/
/* Michael Leo Kokkat, N19522570 */
/* Oct 19, 2019. */
/*	This program is designed to encode
	message streams as well as decode
	(and if necessary, correct) encoded
	message streams via Hamming Code.
	It assumes that all codes are in
	the standard Hamming(7,4) format.
	The message/code input comes from
	bitstream text files.	*/
	/*****************************************/

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <dos.h>

using namespace std;



class Time{         // classname
private:
	int hour, minute, second;
public:
	Time() {
		hour = 0;
		minute = 0;
		second = 0;
	}

	Time(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}

	int getHour() {
		return hour;
	}

	int getMinute() {
		return minute;
	}

	int getSecond() {
		return second;
	}

	void setTime(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}

	void print() {
		cout << hour << ":" << minute << ":" << second << "\n";
	}

	void nextSecond() {
		second++;
		if (second == 60) {
			second = 0;
			minute++;
			if (minute == 60) {
				minute = 0;
				hour++;
				if (hour == 24) {
					hour = 0;
				}
			}
		}
		

	}

	};


int main()
{
	Time time1(15, 53, 4);

	time1.print();
	for (int i = 0; i < 100000; i++) {
		if (i % 1000 == 0) {
			time1.nextSecond();
			time1.print();
		}
	}
	

	}

