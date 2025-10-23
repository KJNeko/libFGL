//
// Created by kj16609 on 3/21/25.
//
#pragma once

#include <format>
#include <string>

namespace fgl::size
{

std::string toHuman( std::size_t size )
{
	constexpr std::size_t mod { 1024 };
	if ( size < mod ) return std::format( "{}B", size );
	if ( size < mod * mod ) return std::format( "{}KiB", static_cast< int >( size / mod ) );
	if ( size < mod * mod * mod ) return std::format( "{}MiB", static_cast< int >( size / ( mod * mod ) ) );
	if ( size < mod * mod * mod * mod ) return std::format( "{}GiB", static_cast< int >( size / ( mod * mod * mod ) ) );
	return std::format( "{}TiB", static_cast< int >( size / ( mod * mod * mod * mod ) ) );
}
} // namespace fgl::size