// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from go2_stair_interfaces:msg/Go2SafetyState.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__TRAITS_HPP_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "go2_stair_interfaces/msg/detail/go2_safety_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace go2_stair_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Go2SafetyState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
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

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: ax
  {
    out << "ax: ";
    rosidl_generator_traits::value_to_yaml(msg.ax, out);
    out << ", ";
  }

  // member: ay
  {
    out << "ay: ";
    rosidl_generator_traits::value_to_yaml(msg.ay, out);
    out << ", ";
  }

  // member: az
  {
    out << "az: ";
    rosidl_generator_traits::value_to_yaml(msg.az, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: body_height
  {
    out << "body_height: ";
    rosidl_generator_traits::value_to_yaml(msg.body_height, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: gait_type
  {
    out << "gait_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_type, out);
    out << ", ";
  }

  // member: foot_raise_height
  {
    out << "foot_raise_height: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_raise_height, out);
    out << ", ";
  }

  // member: sport_error_code
  {
    out << "sport_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.sport_error_code, out);
    out << ", ";
  }

  // member: foot_force
  {
    if (msg.foot_force.size() == 0) {
      out << "foot_force: []";
    } else {
      out << "foot_force: [";
      size_t pending_items = msg.foot_force.size();
      for (auto item : msg.foot_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: foot_position_body
  {
    if (msg.foot_position_body.size() == 0) {
      out << "foot_position_body: []";
    } else {
      out << "foot_position_body: [";
      size_t pending_items = msg.foot_position_body.size();
      for (auto item : msg.foot_position_body) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: foot_speed_body
  {
    if (msg.foot_speed_body.size() == 0) {
      out << "foot_speed_body: []";
    } else {
      out << "foot_speed_body: [";
      size_t pending_items = msg.foot_speed_body.size();
      for (auto item : msg.foot_speed_body) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_position
  {
    if (msg.joint_position.size() == 0) {
      out << "joint_position: []";
    } else {
      out << "joint_position: [";
      size_t pending_items = msg.joint_position.size();
      for (auto item : msg.joint_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_velocity
  {
    if (msg.joint_velocity.size() == 0) {
      out << "joint_velocity: []";
    } else {
      out << "joint_velocity: [";
      size_t pending_items = msg.joint_velocity.size();
      for (auto item : msg.joint_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_tau_est
  {
    if (msg.joint_tau_est.size() == 0) {
      out << "joint_tau_est: []";
    } else {
      out << "joint_tau_est: [";
      size_t pending_items = msg.joint_tau_est.size();
      for (auto item : msg.joint_tau_est) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: battery_soc
  {
    out << "battery_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_soc, out);
    out << ", ";
  }

  // member: power_v
  {
    out << "power_v: ";
    rosidl_generator_traits::value_to_yaml(msg.power_v, out);
    out << ", ";
  }

  // member: power_a
  {
    out << "power_a: ";
    rosidl_generator_traits::value_to_yaml(msg.power_a, out);
    out << ", ";
  }

  // member: sport_received
  {
    out << "sport_received: ";
    rosidl_generator_traits::value_to_yaml(msg.sport_received, out);
    out << ", ";
  }

  // member: lowstate_received
  {
    out << "lowstate_received: ";
    rosidl_generator_traits::value_to_yaml(msg.lowstate_received, out);
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
  const Go2SafetyState & msg,
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

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
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

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax: ";
    rosidl_generator_traits::value_to_yaml(msg.ax, out);
    out << "\n";
  }

  // member: ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay: ";
    rosidl_generator_traits::value_to_yaml(msg.ay, out);
    out << "\n";
  }

  // member: az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az: ";
    rosidl_generator_traits::value_to_yaml(msg.az, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: body_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_height: ";
    rosidl_generator_traits::value_to_yaml(msg.body_height, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: gait_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_type, out);
    out << "\n";
  }

  // member: foot_raise_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_raise_height: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_raise_height, out);
    out << "\n";
  }

  // member: sport_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sport_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.sport_error_code, out);
    out << "\n";
  }

  // member: foot_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_force.size() == 0) {
      out << "foot_force: []\n";
    } else {
      out << "foot_force:\n";
      for (auto item : msg.foot_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: foot_position_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_position_body.size() == 0) {
      out << "foot_position_body: []\n";
    } else {
      out << "foot_position_body:\n";
      for (auto item : msg.foot_position_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: foot_speed_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_speed_body.size() == 0) {
      out << "foot_speed_body: []\n";
    } else {
      out << "foot_speed_body:\n";
      for (auto item : msg.foot_speed_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_position.size() == 0) {
      out << "joint_position: []\n";
    } else {
      out << "joint_position:\n";
      for (auto item : msg.joint_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocity.size() == 0) {
      out << "joint_velocity: []\n";
    } else {
      out << "joint_velocity:\n";
      for (auto item : msg.joint_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_tau_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_tau_est.size() == 0) {
      out << "joint_tau_est: []\n";
    } else {
      out << "joint_tau_est:\n";
      for (auto item : msg.joint_tau_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: battery_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_soc, out);
    out << "\n";
  }

  // member: power_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_v: ";
    rosidl_generator_traits::value_to_yaml(msg.power_v, out);
    out << "\n";
  }

  // member: power_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_a: ";
    rosidl_generator_traits::value_to_yaml(msg.power_a, out);
    out << "\n";
  }

  // member: sport_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sport_received: ";
    rosidl_generator_traits::value_to_yaml(msg.sport_received, out);
    out << "\n";
  }

  // member: lowstate_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lowstate_received: ";
    rosidl_generator_traits::value_to_yaml(msg.lowstate_received, out);
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

inline std::string to_yaml(const Go2SafetyState & msg, bool use_flow_style = false)
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
  const go2_stair_interfaces::msg::Go2SafetyState & msg,
  std::ostream & out, size_t indentation = 0)
{
  go2_stair_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use go2_stair_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const go2_stair_interfaces::msg::Go2SafetyState & msg)
{
  return go2_stair_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<go2_stair_interfaces::msg::Go2SafetyState>()
{
  return "go2_stair_interfaces::msg::Go2SafetyState";
}

template<>
inline const char * name<go2_stair_interfaces::msg::Go2SafetyState>()
{
  return "go2_stair_interfaces/msg/Go2SafetyState";
}

template<>
struct has_fixed_size<go2_stair_interfaces::msg::Go2SafetyState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<go2_stair_interfaces::msg::Go2SafetyState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<go2_stair_interfaces::msg::Go2SafetyState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__TRAITS_HPP_
