 %module Gaussian

 %include "std_vector.i"
 namespace std {
   %template(FloatVector) vector<float>;
 }

 %{
  #include "Gaussian.h"
 %}
 %include "Gaussian.h"
