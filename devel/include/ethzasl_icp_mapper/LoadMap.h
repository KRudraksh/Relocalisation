// Generated by gencpp from file ethzasl_icp_mapper/LoadMap.msg
// DO NOT EDIT!


#ifndef ETHZASL_ICP_MAPPER_MESSAGE_LOADMAP_H
#define ETHZASL_ICP_MAPPER_MESSAGE_LOADMAP_H

#include <ros/service_traits.h>


#include <ethzasl_icp_mapper/LoadMapRequest.h>
#include <ethzasl_icp_mapper/LoadMapResponse.h>


namespace ethzasl_icp_mapper
{

struct LoadMap
{

typedef LoadMapRequest Request;
typedef LoadMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LoadMap
} // namespace ethzasl_icp_mapper


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ethzasl_icp_mapper::LoadMap > {
  static const char* value()
  {
    return "716e25f9d9dc76ceba197f93cbf05dc7";
  }

  static const char* value(const ::ethzasl_icp_mapper::LoadMap&) { return value(); }
};

template<>
struct DataType< ::ethzasl_icp_mapper::LoadMap > {
  static const char* value()
  {
    return "ethzasl_icp_mapper/LoadMap";
  }

  static const char* value(const ::ethzasl_icp_mapper::LoadMap&) { return value(); }
};


// service_traits::MD5Sum< ::ethzasl_icp_mapper::LoadMapRequest> should match
// service_traits::MD5Sum< ::ethzasl_icp_mapper::LoadMap >
template<>
struct MD5Sum< ::ethzasl_icp_mapper::LoadMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ethzasl_icp_mapper::LoadMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::LoadMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ethzasl_icp_mapper::LoadMapRequest> should match
// service_traits::DataType< ::ethzasl_icp_mapper::LoadMap >
template<>
struct DataType< ::ethzasl_icp_mapper::LoadMapRequest>
{
  static const char* value()
  {
    return DataType< ::ethzasl_icp_mapper::LoadMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::LoadMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ethzasl_icp_mapper::LoadMapResponse> should match
// service_traits::MD5Sum< ::ethzasl_icp_mapper::LoadMap >
template<>
struct MD5Sum< ::ethzasl_icp_mapper::LoadMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ethzasl_icp_mapper::LoadMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::LoadMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ethzasl_icp_mapper::LoadMapResponse> should match
// service_traits::DataType< ::ethzasl_icp_mapper::LoadMap >
template<>
struct DataType< ::ethzasl_icp_mapper::LoadMapResponse>
{
  static const char* value()
  {
    return DataType< ::ethzasl_icp_mapper::LoadMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::LoadMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ETHZASL_ICP_MAPPER_MESSAGE_LOADMAP_H