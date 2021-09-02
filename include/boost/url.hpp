//
// Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/CPPAlliance/url
//

#ifndef BOOST_URL_HPP
#define BOOST_URL_HPP

#include <boost/url/error.hpp>
#include <boost/url/host_type.hpp>
#include <boost/url/scheme.hpp>
#include <boost/url/static_pool.hpp>
#include <boost/url/string.hpp>
#include <boost/url/url.hpp>
#include <boost/url/url_view.hpp>
#include <boost/url/urls.hpp>

#include <boost/url/bnf/algorithm.hpp>
#include <boost/url/bnf/char_set.hpp>
#include <boost/url/bnf/element.hpp>
#include <boost/url/bnf/literal.hpp>
#include <boost/url/bnf/range.hpp>
#include <boost/url/bnf/repeat.hpp>
#include <boost/url/bnf/sequence.hpp>
#include <boost/url/bnf/type_traits.hpp>

#include <boost/url/rfc/char_sets.hpp>
#include <boost/url/rfc/hexdig.hpp>
#include <boost/url/rfc/ipv4_address.hpp>
#include <boost/url/rfc/ipv6_address.hpp>
#include <boost/url/rfc/origin_form.hpp>
#include <boost/url/rfc/path_abempty.hpp>
#include <boost/url/rfc/path_absolute.hpp>
#include <boost/url/rfc/path_absolute.hpp>
#include <boost/url/rfc/path_noscheme.hpp>
#include <boost/url/rfc/path_rootless.hpp>
#include <boost/url/rfc/pct_encoded.hpp>
#include <boost/url/rfc/pct_encoding.hpp>
#include <boost/url/rfc/scheme.hpp>
#include <boost/url/rfc/segment.hpp>
#include <boost/url/rfc/userinfo.hpp>

#endif
