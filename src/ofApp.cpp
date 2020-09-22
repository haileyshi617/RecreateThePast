#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	font.load("Social Gothic Regular.otf", 500, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {

	ofSetBackgroundColor(205, 194, 171);

	vector < ofPath > paths = font.getStringAsPoints("U");

	ofTranslate(600, 1000);

	// draw the red U

	for (int i_2 = 0; i_2 < paths.size(); i_2++) {
		paths[i_2].setPolyWindingMode(OF_POLY_WINDING_ODD);
		vector < ofPolyline > lines_2 = paths[i_2].getOutline();
		for (int j_2 = 0; j_2 < lines_2.size(); j_2++) {

			lines_2[j_2].setClosed(true);
			lines_2[j_2] = lines_2[j_2].getResampledBySpacing(3);
			lines_2[j_2] = lines_2[j_2].getSmoothed(mouseX * 0.3);

			for (int k_2 = 0; k_2 < lines_2[j_2].size(); k_2++) {
				lines_2[j_2][k_2].x += 10 * sin(lines_2[j_2][k_2].y * 0.08 * 1546 + ofGetElapsedTimef() + i_2) - lines_2[j_2][k_2].y;
			}
			ofSetColor(240, 88, 81);

			lines_2[j_2].draw();

		}
	}

	// draw the white u

	for (int i = 0; i < paths.size(); i++) {
		paths[i].setPolyWindingMode(OF_POLY_WINDING_ODD);
		vector < ofPolyline > lines = paths[i].getOutline();
		for (int j = 0; j < lines.size(); j++) {

			lines[j].setClosed(true);
			lines[j] = lines[j].getResampledBySpacing(3);
			lines[j] = lines[j].getSmoothed(mouseX * 0.3);

			for (int k = 0; k < lines[j].size(); k++) {
				lines[j][k].x +=  5 * sin(lines[j][k].y * 0.04 * 1256 + ofGetElapsedTimef());
			}

			ofSetColor(255);
			ofSetLineWidth(10);

			cout << mouseX << endl;


			lines[j].draw();


		}
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
