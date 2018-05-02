using namespace std;

#include <iostream>
#include <math.h>
// funktion pitchmodulationWheel
int pitchmodulationWheel() {
	return 0;
}
// funktion falseMidiData
int falseMidiData() {
	return 0;
}
// funktion waveformCreate
int waveformCreate(float* wf) {
	int x = 0;
	int indexMax = (int)wf[0];
	float x_max = 2 * 3.14159654;
	cout << "WF[0] =" << indexMax << endl;
	for (x = 1; x < wf[0]; x++) {
		wf[x] = sin(x*x_max / wf[0]);

		cout << " _ " << wf[x] << '\t';
	}
	return 0;
}
// funktion waveformModify
int waveformModify() {
	return 0;
}
// funktion waveformModulation
int waveformModulation() {
	return 0;
}

int main() {
	// Tester programstumper til Tunefish
	float waveData[411];
	float* p_WaveData = waveData;

	waveData[0] = 410.0;
	waveformCreate(p_WaveData);
	for (int x = 0; x < (int)waveData[0]; x++) {
		cout << " _ " <<  waveData[x] <<  '\t';
	}

	char c;
	cin >> c;
	// funktion pitchmodulationWheel
	// funktion falseMidiData
	// funktion waveformCreate
	// funktion waveformModify
	// funktion waveformModify


}