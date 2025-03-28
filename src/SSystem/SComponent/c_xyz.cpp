/**
 * c_xyz.cpp
 *
 */

#include "SSystem/SComponent/c_xyz.h"
#include "SSystem/SComponent/c_math.h"
#include "JSystem/JUtility/JUTAssert.h"

/* 80266AE4-80266B34 0050+00 s=0 e=103 z=300  None .text      __pl__4cXyzCFRC3Vec */
cXyz cXyz::operator+(const Vec& vec) const {
    Vec ret;
    PSVECAdd(this, &vec, &ret);
    return ret;
}

/* 80266B34-80266B84 0050+00 s=0 e=196 z=1082  None .text      __mi__4cXyzCFRC3Vec */
cXyz cXyz::operator-(const Vec& vec) const {
    Vec ret;
    PSVECSubtract(this, &vec, &ret);
    return ret;
}

/* 80266B84-80266BD0 004C+00 s=1 e=99 z=158  None .text      __ml__4cXyzCFf */
cXyz cXyz::operator*(f32 scale) const {
    Vec ret;
    PSVECScale(this, &ret, scale);
    return ret;
}

/* 80266BD0-80266C18 0048+00 s=0 e=7 z=0  None .text      __ml__4cXyzCFRC3Vec */
cXyz cXyz::operator*(const Vec& vec) const {
    cXyz ret;
    ret.x = this->x * vec.x;
    ret.y = this->y * vec.y;
    ret.z = this->z * vec.z;
    return ret;
}

/* 80266C18-80266C6C 0054+00 s=0 e=3 z=12  None .text      __dv__4cXyzCFf */
cXyz cXyz::operator/(f32 scale) const {
    Vec ret;
    PSVECScale(this, &ret, 1.0f / scale);
    return ret;
}

/* 80266C6C-80266CBC 0050+00 s=1 e=0 z=0  None .text      getCrossProduct__4cXyzCFRC3Vec */
cXyz cXyz::getCrossProduct(const Vec& vec) const {
    Vec ret;
    PSVECCrossProduct(this, &vec, &ret);
    return ret;
}

/* 80266CBC-80266CE4 0028+00 s=0 e=7 z=6  None .text      outprod__4cXyzCFRC3Vec */
cXyz cXyz::outprod(const Vec& vec) const {
    return this->getCrossProduct(vec);
}

/* 80266CE4-80266D30 004C+00 s=0 e=10 z=1  None .text      norm__4cXyzCFv */
cXyz cXyz::norm() const {
    Vec ret;
    JUT_CONFIRM(251, isNearZeroSquare() == 0);
    PSVECNormalize(this, &ret);
    return ret;
}

/* 80266D30-80266DC4 0094+00 s=1 e=4 z=0  None .text      normZP__4cXyzCFv */
cXyz cXyz::normZP() const {
    Vec vec;
    if (this->isNearZeroSquare() == false) {
        PSVECNormalize(this, &vec);
    } else {
        vec = cXyz::Zero;
    }
    return vec;
}

/* 80266DC4-80266EF4 0130+00 s=0 e=0 z=2  None .text      normZC__4cXyzCFv */
cXyz cXyz::normZC() const {
    Vec outVec;
    if (isNearZeroSquare() == 0) {
        PSVECNormalize(this, &outVec);
    } else {
        outVec = (*this * 1.25f * 1000000.0f).normZP();

        if (isNearZeroSquare(outVec)) {
            outVec.x = 0.0f;
            outVec.y = 0.0f;
            outVec.z = 1.0f;
            outVec = (Vec){0,0,1};
        }
    }

    return outVec;
}

/* 80266EF4-80266F48 0054+00 s=0 e=13 z=17  None .text      normalize__4cXyzFv */
cXyz cXyz::normalize() {
    JUT_ASSERT(285, isNearZeroSquare() == 0);
    PSVECNormalize(this, this);
    return *this;
}

/* 80266F48-80266FDC 0094+00 s=0 e=19 z=59  None .text      normalizeZP__4cXyzFv */
cXyz cXyz::normalizeZP() {
    if (this->isNearZeroSquare() == false) {
        PSVECNormalize(this, this);
    } else {
        *this = cXyz::Zero;
    }
    return *this;
}

/* 80266FDC-8026702C 0050+00 s=0 e=2 z=3  None .text      normalizeRS__4cXyzFv */
bool cXyz::normalizeRS() {
    if (this->isNearZeroSquare()) {
        return false;
    } else {
        PSVECNormalize(this, this);
        return true;
    }
}

/* 8026702C-8026706C 0040+00 s=0 e=5 z=9  None .text      __eq__4cXyzCFRC3Vec */
bool cXyz::operator==(const Vec& vec) const {
    return this->x == vec.x && this->y == vec.y && this->z == vec.z;
}

/* 8026706C-802670AC 0040+00 s=0 e=6 z=6  None .text      __ne__4cXyzCFRC3Vec */
bool cXyz::operator!=(const Vec& vec) const {
    return this->x != vec.x || this->y != vec.y || this->z != vec.z;
}

/* 802670AC-80267128 007C+00 s=0 e=4 z=7  None .text      isZero__4cXyzCFv */
bool cXyz::isZero() const {
    return fabsf(this->x) < 32.0f * FLT_EPSILON && fabsf(this->y) < 32.0f * FLT_EPSILON &&
           fabsf(this->z) < 32.0f * FLT_EPSILON;
}

/* 80267128-80267150 0028+00 s=0 e=81 z=85  None .text      atan2sX_Z__4cXyzCFv */
s16 cXyz::atan2sX_Z() const {
    return cM_atan2s(this->x, this->z);
}

/* 80267150-80267290 0140+00 s=0 e=21 z=33  None .text      atan2sY_XZ__4cXyzCFv */
s16 cXyz::atan2sY_XZ() const {
    return cM_atan2s(-this->y, absXZ());
}

const cXyz cXyz::Zero(0, 0, 0);
const cXyz cXyz::BaseX(1, 0, 0);
const cXyz cXyz::BaseY(0, 1, 0);
const cXyz cXyz::BaseZ(0, 0, 1);
const cXyz cXyz::BaseXY(1, 1, 0);
const cXyz cXyz::BaseXZ(1, 0, 1);
const cXyz cXyz::BaseYZ(0, 1, 1);
const cXyz cXyz::BaseXYZ(1, 1, 1);
