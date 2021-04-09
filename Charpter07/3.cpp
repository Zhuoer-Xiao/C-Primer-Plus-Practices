#include<iostream>
using namespace std;
typedef struct box {
	char maker[40];
	float height;
	float weight;
	float length;
	float volume;
};
void functionA(box b1) {
	cout << "maker : " << b1.maker << " height : " << b1.height << " weight : " << b1.weight << " length : " << b1.length << " volume : " << b1.volume;
}

void functionB(box* b1) {
	b1->volume = b1->height * b1->length * b1->weight;
}

int main() {
	box b = { "box01",175,60,5, };
	functionB(&b);
	functionA(b);
	return 0;
}