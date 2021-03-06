/* UPA context.
 */

#ifndef UPA_HH_
#define UPA_HH_

#include <memory>

/* Boost noncopyable base class */
#include <boost/utility.hpp>

#include "config.hh"

namespace chainy
{

	class upa_t :
		boost::noncopyable
	{
	public:
		upa_t (const config_t& config);
		~upa_t();

		bool Initialize();
		bool VerifyVersion();

	private:
		const config_t& config_;		
	};

} /* namespace chainy */

#endif /* UPA_HH_ */

/* eof */
