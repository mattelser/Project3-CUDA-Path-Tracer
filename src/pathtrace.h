#pragma once

#include <vector>
#include "scene.h"

void pathtraceInit(Scene *scene);
void pathtraceFree();
int pathtrace(uchar4 *pbo, int frame, int iteration);
void showGBuffer(uchar4 *pbo, bool GbufferIsNorm);
void showImage(uchar4 *pbo, int iter);
void showDenoise(uchar4 *pbo, int iter);

