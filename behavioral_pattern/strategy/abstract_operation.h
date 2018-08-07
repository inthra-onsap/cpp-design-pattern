#ifndef CPP_DESIGN_PATTERN_ABSTRACT_OPERATION_H
#define CPP_DESIGN_PATTERN_ABSTRACT_OPERATION_H

class AbstractOperation {
 public:
  virtual float processOperation(float num1, float num2) = 0;
};

#endif //CPP_DESIGN_PATTERN_ABSTRACT_OPERATION_H
