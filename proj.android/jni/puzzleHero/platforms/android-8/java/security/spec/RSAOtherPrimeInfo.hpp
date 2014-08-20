/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.RSAOtherPrimeInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class RSAOtherPrimeInfo;
	class RSAOtherPrimeInfo
		: public object<RSAOtherPrimeInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit RSAOtherPrimeInfo(jobject jobj)
		: object<RSAOtherPrimeInfo>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		RSAOtherPrimeInfo(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&);
		local_ref< java::math::BigInteger > getCrtCoefficient();
		local_ref< java::math::BigInteger > getPrime();
		local_ref< java::math::BigInteger > getExponent();
	}; //class RSAOtherPrimeInfo

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_HPP_IMPL

namespace j2cpp {



java::security::spec::RSAOtherPrimeInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::spec::RSAOtherPrimeInfo::RSAOtherPrimeInfo(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2)
: object<java::security::spec::RSAOtherPrimeInfo>(
	call_new_object<
		java::security::spec::RSAOtherPrimeInfo::J2CPP_CLASS_NAME,
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_NAME(0),
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


local_ref< java::math::BigInteger > java::security::spec::RSAOtherPrimeInfo::getCrtCoefficient()
{
	return call_method<
		java::security::spec::RSAOtherPrimeInfo::J2CPP_CLASS_NAME,
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_NAME(1),
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAOtherPrimeInfo::getPrime()
{
	return call_method<
		java::security::spec::RSAOtherPrimeInfo::J2CPP_CLASS_NAME,
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_NAME(2),
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAOtherPrimeInfo::getExponent()
{
	return call_method<
		java::security::spec::RSAOtherPrimeInfo::J2CPP_CLASS_NAME,
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_NAME(3),
		java::security::spec::RSAOtherPrimeInfo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::RSAOtherPrimeInfo,"java/security/spec/RSAOtherPrimeInfo")
J2CPP_DEFINE_METHOD(java::security::spec::RSAOtherPrimeInfo,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::RSAOtherPrimeInfo,1,"getCrtCoefficient","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAOtherPrimeInfo,2,"getPrime","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAOtherPrimeInfo,3,"getExponent","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION