#pragma once
#include "IBase.h"

namespace sbx {

  class Base : public virtual IBase {
    public:
      virtual ~Base();
      virtual void BaseDo();
  };

} // namespace sbx

