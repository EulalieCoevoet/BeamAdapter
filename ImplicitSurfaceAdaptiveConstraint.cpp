//#include <sofa/component/constraint/ImplicitSurfaceAdaptiveConstraint.inl>
#include "ImplicitSurfaceAdaptiveConstraint.inl"

#include <sofa/defaulttype/Vec3Types.h>
#include <sofa/component/container/MechanicalObject.h>
#include <sofa/core/ObjectFactory.h>

namespace sofa
{

namespace component
{

namespace constraint
{

using namespace sofa::defaulttype;
using namespace sofa::helper;

SOFA_DECL_CLASS(ImplicitSurfaceAdaptiveConstraint)

int ImplicitSurfaceAdaptiveConstraintClass = core::RegisterObject("PROUT TODO-ImplicitSurfaceAdaptiveConstraint")
#ifndef SOFA_FLOAT
.add< ImplicitSurfaceAdaptiveConstraint<Rigid3dTypes> >()
#endif
#ifndef SOFA_DOUBLE
.add< ImplicitSurfaceAdaptiveConstraint<Rigid3fTypes> >()
#endif
;

#ifndef SOFA_FLOAT
template class ImplicitSurfaceAdaptiveConstraint<Rigid3dTypes>;
#endif
#ifndef SOFA_DOUBLE
template class ImplicitSurfaceAdaptiveConstraint<Rigid3fTypes>;
#endif

} // namespace constraint

} // namespace component

} // namespace sofa
