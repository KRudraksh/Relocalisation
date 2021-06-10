// Generated by gencpp from file ethzasl_icp_mapper/GetBoundedMap.msg
// DO NOT EDIT!


#ifndef ETHZASL_ICP_MAPPER_MESSAGE_GETBOUNDEDMAP_H
#define ETHZASL_ICP_MAPPER_MESSAGE_GETBOUNDEDMAP_H

#include <ros/service_traits.h>


#include <ethzasl_icp_mapper/GetBoundedMapRequest.h>
#include <ethzasl_icp_mapper/GetBoundedMapResponse.h>


namespace ethzasl_icp_mapper
{

struct GetBoundedMap
{

typedef GetBoundedMapRequest Request;
typedef GetBoundedMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetBoundedMap
} // namespace ethzasl_icp_mapper


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ethzasl_icp_mapper::GetBoundedMap > {
  static const char* value()
  {
    return "b0e234493a48c4bf1205e62b5652f4e1";
  }

  static const char* value(const ::ethzasl_icp_mapper::GetBoundedMap&) { return value(); }
};

template<>
struct DataType< ::ethzasl_icp_mapper::GetBoundedMap > {
  static const char* value()
  {
    return "ethzasl_icp_mapper/GetBoundedMap";
  }

  static const char* value(const ::ethzasl_icp_mapper::GetBoundedMap&) { return value(); }
};


// service_traits::MD5Sum< ::ethzasl_icp_mapper::GetBoundedMapRequest> should match
// service_traits::MD5Sum< ::ethzasl_icp_mapper::GetBoundedMap >
template<>
struct MD5Sum< ::ethzasl_icp_mapper::GetBoundedMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ethzasl_icp_mapper::GetBoundedMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::GetBoundedMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ethzasl_icp_mapper::GetBoundedMapRequest> should match
// service_traits::DataType< ::ethzasl_icp_mapper::GetBoundedMap >
template<>
struct DataType< ::ethzasl_icp_mapper::GetBoundedMapRequest>
{
  static const char* value()
  {
    return DataType< ::ethzasl_icp_mapper::GetBoundedMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::GetBoundedMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ethzasl_icp_mapper::GetBoundedMapResponse> should match
// service_traits::MD5Sum< ::ethzasl_icp_mapper::GetBoundedMap >
template<>
struct MD5Sum< ::ethzasl_icp_mapper::GetBoundedMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ethzasl_icp_mapper::GetBoundedMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::GetBoundedMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ethzasl_icp_mapper::GetBoundedMapResponse> should match
// service_traits::DataType< ::ethzasl_icp_mapper::GetBoundedMap >
template<>
struct DataType< ::ethzasl_icp_mapper::GetBoundedMapResponse>
{
  static const char* value()
  {
    return DataType< ::ethzasl_icp_mapper::GetBoundedMap >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::GetBoundedMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ETHZASL_ICP_MAPPER_MESSAGE_GETBOUNDEDMAP_H
