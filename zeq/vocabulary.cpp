
/* Copyright (c) 2014, Human Brain Project
 *                     Daniel Nachbaur <daniel.nachbaur@epfl.ch>
 */

#include "vocabulary.h"
#include "detail/serialization.h"

namespace zeq
{
namespace vocabulary
{

Event serializeCamera( const std::vector< float >& matrix )
{
    return detail::serializeCamera( matrix );
}

std::vector< float > deserializeCamera( const Event& camera )
{
    return detail::deserializeCamera( camera );
}

}
}
