// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__TRAITS_HPP_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "go2_stair_interfaces/msg/detail/go2_safety_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace go2_stair_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Go2SafetyStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << ", ";
  }

  // member: roll_error
  {
    out << "roll_error: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_error, out);
    out << ", ";
  }

  // member: pitch_error
  {
    out << "pitch_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_error, out);
    out << ", ";
  }

  // member: roll_rate
  {
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << ", ";
  }

  // member: pitch_rate
  {
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << ", ";
  }

  // member: contact_count
  {
    out << "contact_count: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_count, out);
    out << ", ";
  }

  // member: foot_contact
  {
    if (msg.foot_contact.size() == 0) {
      out << "foot_contact: []";
    } else {
      out << "foot_contact: [";
      size_t pending_items = msg.foot_contact.size();
      for (auto item : msg.foot_contact) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state_timeout
  {
    out << "state_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.state_timeout, out);
    out << ", ";
  }

  // member: attitude_warning
  {
    out << "attitude_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_warning, out);
    out << ", ";
  }

  // member: attitude_stop
  {
    out << "attitude_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_stop, out);
    out << ", ";
  }

  // member: rate_warning
  {
    out << "rate_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.rate_warning, out);
    out << ", ";
  }

  // member: rate_stop
  {
    out << "rate_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.rate_stop, out);
    out << ", ";
  }

  // member: contact_warning
  {
    out << "contact_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_warning, out);
    out << ", ";
  }

  // member: contact_stop
  {
    out << "contact_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_stop, out);
    out << ", ";
  }

  // member: sport_age_s
  {
    out << "sport_age_s: ";
    rosidl_generator_traits::value_to_yaml(msg.sport_age_s, out);
    out << ", ";
  }

  // member: lowstate_age_s
  {
    out << "lowstate_age_s: ";
    rosidl_generator_traits::value_to_yaml(msg.lowstate_age_s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Go2SafetyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }

  // member: roll_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_error: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_error, out);
    out << "\n";
  }

  // member: pitch_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_error, out);
    out << "\n";
  }

  // member: roll_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << "\n";
  }

  // member: pitch_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << "\n";
  }

  // member: contact_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_count: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_count, out);
    out << "\n";
  }

  // member: foot_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_contact.size() == 0) {
      out << "foot_contact: []\n";
    } else {
      out << "foot_contact:\n";
      for (auto item : msg.foot_contact) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.state_timeout, out);
    out << "\n";
  }

  // member: attitude_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_warning, out);
    out << "\n";
  }

  // member: attitude_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_stop, out);
    out << "\n";
  }

  // member: rate_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.rate_warning, out);
    out << "\n";
  }

  // member: rate_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.rate_stop, out);
    out << "\n";
  }

  // member: contact_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_warning, out);
    out << "\n";
  }

  // member: contact_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_stop, out);
    out << "\n";
  }

  // member: sport_age_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sport_age_s: ";
    rosidl_generator_traits::value_to_yaml(msg.sport_age_s, out);
    out << "\n";
  }

  // member: lowstate_age_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lowstate_age_s: ";
    rosidl_generator_traits::value_to_yaml(msg.lowstate_age_s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Go2SafetyStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace go2_stair_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use go2_stair_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const go2_stair_interfaces::msg::Go2SafetyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  go2_stair_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use go2_stair_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const go2_stair_interfaces::msg::Go2SafetyStatus & msg)
{
  return go2_stair_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<go2_stair_interfaces::msg::Go2SafetyStatus>()
{
  return "go2_stair_interfaces::msg::Go2SafetyStatus";
}

template<>
inline const char * name<go2_stair_interfaces::msg::Go2SafetyStatus>()
{
  return "go2_stair_interfaces/msg/Go2SafetyStatus";
}

template<>
struct has_fixed_size<go2_stair_interfaces::msg::Go2SafetyStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<go2_stair_interfaces::msg::Go2SafetyStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<go2_stair_interfaces::msg::Go2SafetyStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__TRAITS_HPP_
