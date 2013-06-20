//------------------------------------------------------------------------------
/*
    Copyright (c) 2011-2013, OpenCoin, Inc.
*/
//==============================================================================

/** Include this to get the @ref ripple_basics module.

    @file ripple_basics.h
    @ingroup ripple_basics
*/

/** Basic classes.

    This module provides utility classes and types used in the Ripple system.

    @defgroup ripple_basics
*/

#ifndef RIPPLE_BASICS_H
#define RIPPLE_BASICS_H

#include <ctime>
#include <limits>
#include <list>
#include <sstream>
#include <string>

// UInt256
#include <algorithm>
#include <cassert>
#include <climits>
#include <cstdio>
#include <cstring>
#include <functional>
#include <string>
#include <vector>

#include <boost/version.hpp>
#if BOOST_VERSION < 104700
#error Boost 1.47 or later is required
#endif

#include <boost/thread/recursive_mutex.hpp>
#include <boost/filesystem.hpp> // VFALCO TODO try to eliminate thie dependency
#include <boost/unordered_map.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/foreach.hpp>
#include <boost/thread/recursive_mutex.hpp>
#include <boost/unordered_map.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/ref.hpp>
#include <boost/make_shared.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

// ByteOrder
#ifdef WIN32
// (nothing)
#elif __APPLE__
# include <libkern/OSByteOrder.h>
#elif defined(__FreeBSD__) || defined(__NetBSD__)
# include <sys/endian.h>
#elif defined(__OpenBSD__)
# include <sys/types.h>
#endif

// StringUtilities
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>

// UInt256
#include <boost/functional/hash.hpp>

// ripple_PlatformMacros.h
#include <boost/bind.hpp>
#include <boost/function.hpp>

// VFALCO TODO remove this dependency!!!
#include <openssl/dh.h> // for DiffieHellmanUtil
#include <openssl/ripemd.h> // For HashUtilities
#include <openssl/sha.h> // For HashUtilities

#include "BeastConfig.h"
#include "modules/beast_core/beast_core.h"
#include "modules/beast_basics/beast_basics.h"

#include "../ripple_json/ripple_json.h"

#include "utility/ripple_IntegerTypes.h" // must come first
#include "utility/ripple_Log.h" // Needed by others

#include "types/ripple_BasicTypes.h"
#include "utility/ripple_ByteOrder.h"
#include "utility/ripple_CountedObject.h"
#include "utility/ripple_DiffieHellmanUtil.h"
#include "utility/ripple_PlatformMacros.h"
#include "utility/ripple_RandomNumbers.h"
#include "utility/ripple_ScopedLock.h"
#include "utility/ripple_StringUtilities.h"
#include "utility/ripple_Sustain.h"
#include "utility/ripple_ThreadName.h"
#include "utility/ripple_Time.h"
#include "utility/ripple_UptimeTimer.h"

#include "types/ripple_UInt256.h"
#include "utility/ripple_HashUtilities.h" // requires UInt256
#include "types/ripple_HashMaps.h"

#include "containers/ripple_KeyCache.h"
#include "containers/ripple_RangeSet.h"
#include "containers/ripple_SecureAllocator.h"
#include "containers/ripple_TaggedCache.h"

#endif
