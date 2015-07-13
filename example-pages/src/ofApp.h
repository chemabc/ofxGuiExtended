#pragma once

#include "ofMain.h"
#include "ofxGuiExtended.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void exit();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(ofMouseEventArgs &args);
    void mouseDragged(ofMouseEventArgs &args);
    void mousePressed(ofMouseEventArgs &args);
    void mouseReleased(ofMouseEventArgs &args);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

private:

    ofxGuiPage page1, page2;

    ofxPanelExtended panel1, panel2;
    ofxGuiGroupExtended rotary;
    ofxGuiMatrix matrix;

    ofParameter<bool> toggle_param;
    ofParameter<float> slider_param;
    ofParameter<bool> toggle1_param, toggle2_param, toggle3_param, toggle4_param;
    vector<ofParameter<bool>> matrix_params;
    ofParameterGroup g;

};
