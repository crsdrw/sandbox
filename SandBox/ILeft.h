#pragma once
#include "IBase.h"

namespace sbx {

  class ILeft : public virtual IBase {
    public:
      virtual void LeftDo() = 0;
  };

} // nanmespace sbx