#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	cout << "draw" << endl;

	ofBackground(0);

	float time = ofGetElapsedTimef();
	float time_angle = 0;
	float radius_adjust = 0;
	float center = 0;

	if (time < 5)
	{
		time_angle = 0;
		radius_adjust = 0;
		center = 200;
	}
	else
	{
		time_angle = time - 5;
		radius_adjust = sin(time_angle);
		center = 200 - 200 * atan((time - 5) / 2) / atan(99999999);
	}

	for (int i = 0; i < 16; i++) {
		float xorig = 600 - center;
		float yorig = 400;
		float xorig_2 = 600 + center;
		float radius = 50 + i * 20;

		float angle = time_angle * 0.03 * ofMap(i, 0, 16, 1, 16);
		float b = 10 + 4 * i;

		float x = xorig + radius * cos(angle) * radius_adjust;
		float y = yorig + radius * sin(angle) * 0.6 * radius_adjust;

		float x_1 = x - 1.717*b;
		float y_1 = y - b;
		float x_2 = x + 1.717*b;
		float y_2 = y - b;
		float x_3 = x;
		float y_3 = y + 2 * b;

		ofSetColor(255, 232, 230, 127);
		ofSetLineWidth(3);
		ofNoFill();
		ofDrawTriangle(x_1, y_1, x_2, y_2, x_3, y_3);


		float x_r = xorig_2 - radius * cos(angle) * radius_adjust;

		float x_1_r = x_r - 1.717*b;
		float x_2_r = x_r + 1.717*b;
		float x_3_r = x_r;

		ofSetColor(210, 50, 25, 100);
		ofSetLineWidth(3);
		ofNoFill();
		ofDrawTriangle(x_1_r, y_1, x_2_r, y_2, x_3_r, y_3);
	}


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
