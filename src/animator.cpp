#include "../include/nanogui/animator.h"

NAMESPACE_BEGIN(nanogui)

Animator::Animator()
{
  
}

Animator::~Animator()
{
  
}

void Animator::setCurveType(EasingCurveType type)
{
  mCurve = type;
}

EasingCurveType Animator::getCurveType()
{
  return mCurve;
}

duration_t Animator::getDuration()
{
  return mDuration;
}

void Animator::setDuration(unsigned int duration)
{
  std::chrono::milliseconds d(duration);
  mDuration = std::chrono::duration_cast<duration_t>(d);
}

NAMESPACE_END(nanogui)
