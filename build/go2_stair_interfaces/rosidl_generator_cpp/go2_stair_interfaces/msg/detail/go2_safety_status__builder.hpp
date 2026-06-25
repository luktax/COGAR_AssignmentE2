// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__BUILDER_HPP_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "go2_stair_interfaces/msg/detail/go2_safety_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace go2_stair_interfaces
{

namespace msg
{

namespace builder
{

class Init_Go2SafetyStatus_lowstate_age_s
{
public:
  explicit Init_Go2SafetyStatus_lowstate_age_s(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  ::go2_stair_interfaces::msg::Go2SafetyStatus lowstate_age_s(::go2_stair_interfaces::msg::Go2SafetyStatus::_lowstate_age_s_type arg)
  {
    msg_.lowstate_age_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_sport_age_s
{
public:
  explicit Init_Go2SafetyStatus_sport_age_s(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_lowstate_age_s sport_age_s(::go2_stair_interfaces::msg::Go2SafetyStatus::_sport_age_s_type arg)
  {
    msg_.sport_age_s = std::move(arg);
    return Init_Go2SafetyStatus_lowstate_age_s(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_contact_stop
{
public:
  explicit Init_Go2SafetyStatus_contact_stop(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_sport_age_s contact_stop(::go2_stair_interfaces::msg::Go2SafetyStatus::_contact_stop_type arg)
  {
    msg_.contact_stop = std::move(arg);
    return Init_Go2SafetyStatus_sport_age_s(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_contact_warning
{
public:
  explicit Init_Go2SafetyStatus_contact_warning(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_contact_stop contact_warning(::go2_stair_interfaces::msg::Go2SafetyStatus::_contact_warning_type arg)
  {
    msg_.contact_warning = std::move(arg);
    return Init_Go2SafetyStatus_contact_stop(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_rate_stop
{
public:
  explicit Init_Go2SafetyStatus_rate_stop(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_contact_warning rate_stop(::go2_stair_interfaces::msg::Go2SafetyStatus::_rate_stop_type arg)
  {
    msg_.rate_stop = std::move(arg);
    return Init_Go2SafetyStatus_contact_warning(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_rate_warning
{
public:
  explicit Init_Go2SafetyStatus_rate_warning(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_rate_stop rate_warning(::go2_stair_interfaces::msg::Go2SafetyStatus::_rate_warning_type arg)
  {
    msg_.rate_warning = std::move(arg);
    return Init_Go2SafetyStatus_rate_stop(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_attitude_stop
{
public:
  explicit Init_Go2SafetyStatus_attitude_stop(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_rate_warning attitude_stop(::go2_stair_interfaces::msg::Go2SafetyStatus::_attitude_stop_type arg)
  {
    msg_.attitude_stop = std::move(arg);
    return Init_Go2SafetyStatus_rate_warning(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_attitude_warning
{
public:
  explicit Init_Go2SafetyStatus_attitude_warning(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_attitude_stop attitude_warning(::go2_stair_interfaces::msg::Go2SafetyStatus::_attitude_warning_type arg)
  {
    msg_.attitude_warning = std::move(arg);
    return Init_Go2SafetyStatus_attitude_stop(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_state_timeout
{
public:
  explicit Init_Go2SafetyStatus_state_timeout(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_attitude_warning state_timeout(::go2_stair_interfaces::msg::Go2SafetyStatus::_state_timeout_type arg)
  {
    msg_.state_timeout = std::move(arg);
    return Init_Go2SafetyStatus_attitude_warning(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_foot_contact
{
public:
  explicit Init_Go2SafetyStatus_foot_contact(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_state_timeout foot_contact(::go2_stair_interfaces::msg::Go2SafetyStatus::_foot_contact_type arg)
  {
    msg_.foot_contact = std::move(arg);
    return Init_Go2SafetyStatus_state_timeout(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_contact_count
{
public:
  explicit Init_Go2SafetyStatus_contact_count(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_foot_contact contact_count(::go2_stair_interfaces::msg::Go2SafetyStatus::_contact_count_type arg)
  {
    msg_.contact_count = std::move(arg);
    return Init_Go2SafetyStatus_foot_contact(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_pitch_rate
{
public:
  explicit Init_Go2SafetyStatus_pitch_rate(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_contact_count pitch_rate(::go2_stair_interfaces::msg::Go2SafetyStatus::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_Go2SafetyStatus_contact_count(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_roll_rate
{
public:
  explicit Init_Go2SafetyStatus_roll_rate(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_pitch_rate roll_rate(::go2_stair_interfaces::msg::Go2SafetyStatus::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_Go2SafetyStatus_pitch_rate(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_pitch_error
{
public:
  explicit Init_Go2SafetyStatus_pitch_error(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_roll_rate pitch_error(::go2_stair_interfaces::msg::Go2SafetyStatus::_pitch_error_type arg)
  {
    msg_.pitch_error = std::move(arg);
    return Init_Go2SafetyStatus_roll_rate(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_roll_error
{
public:
  explicit Init_Go2SafetyStatus_roll_error(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_pitch_error roll_error(::go2_stair_interfaces::msg::Go2SafetyStatus::_roll_error_type arg)
  {
    msg_.roll_error = std::move(arg);
    return Init_Go2SafetyStatus_pitch_error(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_reason
{
public:
  explicit Init_Go2SafetyStatus_reason(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_roll_error reason(::go2_stair_interfaces::msg::Go2SafetyStatus::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_Go2SafetyStatus_roll_error(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_status
{
public:
  explicit Init_Go2SafetyStatus_status(::go2_stair_interfaces::msg::Go2SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_Go2SafetyStatus_reason status(::go2_stair_interfaces::msg::Go2SafetyStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Go2SafetyStatus_reason(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

class Init_Go2SafetyStatus_header
{
public:
  Init_Go2SafetyStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Go2SafetyStatus_status header(::go2_stair_interfaces::msg::Go2SafetyStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Go2SafetyStatus_status(msg_);
  }

private:
  ::go2_stair_interfaces::msg::Go2SafetyStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::go2_stair_interfaces::msg::Go2SafetyStatus>()
{
  return go2_stair_interfaces::msg::builder::Init_Go2SafetyStatus_header();
}

}  // namespace go2_stair_interfaces

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__BUILDER_HPP_
