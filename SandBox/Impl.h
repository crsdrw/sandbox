#pragma once

#pragma warning( disable : 4250 ) // warning C4250: inherits via dominance

#include "Base.h"
#include "ILeft.h"


namespace sbx {

  class Impl : public Base, public ILeft {
  public:
    virtual void BaseMake();
    virtual void LeftDo();
  };

}

