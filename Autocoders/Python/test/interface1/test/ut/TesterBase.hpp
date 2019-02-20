// ======================================================================
// \title  Test/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for Test component test harness base class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged. Any commercial use must be negotiated with the Office
// of Technology Transfer at the California Institute of Technology.
//
// This software may be subject to U.S. export control laws and
// regulations.  By accepting this document, the user agrees to comply
// with all U.S. export laws and regulations.  User has the
// responsibility to obtain export licenses, or other export authority
// as may be required before exporting such information to foreign
// countries or providing access to foreign persons.
// ======================================================================

#ifndef Test_TESTER_BASE_HPP
#define Test_TESTER_BASE_HPP

#include <Autocoders/Python/test/interface1/TestComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <stdio.h>
#include <Fw/Port/InputSerializePort.hpp>

namespace Cmd {

  //! \class TestTesterBase
  //! \brief Auto-generated base class for Test component test harness
  //!
  class TestTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object TestTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 //!< The instance number
      );

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object TestTesterBase
      //!
      TestTesterBase(
#if FW_OBJECT_NAMES == 1
          const char *const compName, //!< The component name
          const U32 maxHistorySize //!< The maximum size of each history
#else
          const U32 maxHistorySize //!< The maximum size of each history
#endif
      );

      //! Destroy object TestTesterBase
      //!
      virtual ~TestTesterBase(void);

  };

} // end namespace Cmd

#endif
