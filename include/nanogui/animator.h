#pragma once

#include <chrono>

#include <nanogui/object.h>

NAMESPACE_BEGIN(nanogui)

typedef std::chrono::duration<float> duration_t;

enum class EasingCurveType
{
  Linear
};

class Animator : public Object 
{
public:

  Animator();
  ~Animator();
  
  void setCurveType(EasingCurveType type);
  EasingCurveType getCurveType();
  
  // milliseconds.
  void setDuration(unsigned int duration);
  duration_t getDuration();
  
private:
  
  duration_t mDuration;
  EasingCurveType mCurve;
};

class AnimatorInt : public Anomator
{
public:
  
  AnimatorInt();
  virtual ~AnimatorInt();
  
  void setStartValue(int value);
  void setEndValue(int value);
  
  int getStartValue();
  int getEndValue();

private:
  
  int mStartValue;
  int mEndValue;
};

NAMESPACE_END(nanogui)
