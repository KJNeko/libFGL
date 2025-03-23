//
// Created by kj16609 on 3/21/25.
//
#pragma once

#include <cmath>
#include <cstdint>
#include <format>
#include <string>

namespace fgl::size
{

std::string toHuman( std::size_t size )
{
	constexpr std::size_t mod { 1024 };
	if ( size < mod ) return std::format( "{}B", size );
	if ( size < std::pow( mod, 2 ) ) return std::format( "{}KiB", static_cast< int >( size / mod ) );
	if ( size < std::pow( mod, 3 ) ) return std::format( "{}MiB", static_cast< int >( size / std::pow( mod, 2 ) ) );
	if ( size < std::pow( mod, 4 ) ) return std::format( "{}GiB", static_cast< int >( size / std::pow( mod, 3 ) ) );
	return std::format( "{}TiB", static_cast< int >( size / std::pow( mod, 4 ) ) );
}
} // namespace fgl::size