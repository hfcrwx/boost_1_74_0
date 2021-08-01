//
// timer.cpp
// ~~~~~~~~~
//
// Copyright (c) 2003-2020 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <iostream>
#include <boost/asio.hpp>

int main()
{
  boost::asio::io_context io;

  boost::asio::steady_timer t(io, boost::asio::chrono::seconds(5));
  // the call to steady_timer::wait() will not return until the timer has expired, 5 seconds after it was created (i.e. not from when the wait starts).
  t.wait(); 

  std::cout << "Hello, world!" << std::endl;

  return 0;
}
