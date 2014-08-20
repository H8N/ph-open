/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.params.HttpProtocolParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpAbstractParamBean; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HttpVersion.hpp>
#include <org/apache/http/params/HttpAbstractParamBean.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class HttpProtocolParamBean;
	class HttpProtocolParamBean
		: public object<HttpProtocolParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit HttpProtocolParamBean(jobject jobj)
		: object<HttpProtocolParamBean>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const;


		HttpProtocolParamBean(local_ref< org::apache::http::params::HttpParams > const&);
		void setHttpElementCharset(local_ref< java::lang::String >  const&);
		void setContentCharset(local_ref< java::lang::String >  const&);
		void setVersion(local_ref< org::apache::http::HttpVersion >  const&);
		void setUserAgent(local_ref< java::lang::String >  const&);
		void setUseExpectContinue(jboolean);
	}; //class HttpProtocolParamBean

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::params::HttpProtocolParamBean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::params::HttpProtocolParamBean::operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const
{
	return local_ref<org::apache::http::params::HttpAbstractParamBean>(get_jobject());
}


org::apache::http::params::HttpProtocolParamBean::HttpProtocolParamBean(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::params::HttpProtocolParamBean>(
	call_new_object<
		org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_NAME(0),
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void org::apache::http::params::HttpProtocolParamBean::setHttpElementCharset(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_NAME(1),
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpProtocolParamBean::setContentCharset(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_NAME(2),
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpProtocolParamBean::setVersion(local_ref< org::apache::http::HttpVersion > const &a0)
{
	return call_method<
		org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_NAME(3),
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpProtocolParamBean::setUserAgent(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_NAME(4),
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpProtocolParamBean::setUseExpectContinue(jboolean a0)
{
	return call_method<
		org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_NAME(5),
		org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::params::HttpProtocolParamBean,"org/apache/http/params/HttpProtocolParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,1,"setHttpElementCharset","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,2,"setContentCharset","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,3,"setVersion","(Lorg/apache/http/HttpVersion;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,4,"setUserAgent","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,5,"setUseExpectContinue","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION