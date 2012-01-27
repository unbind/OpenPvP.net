#pragma once

#include "amf/variant.h"

namespace riotgames {
	namespace platform {
		namespace gameclient {
			namespace domain {
				class AbstractDomainObject : public amf::Object {
				public:
					AbstractDomainObject(){
						setName("com.riotgames.platform.gameclient.domain.AbstractDomainObject");
						
						set("futureData", new amf::Null());
						set("dataVersion", new amf::Integer(0));
					}

					amf::Variant* futureData(){
						return get("futureData");
					}

					int32 dataVersion(){
						return get("dataVersion")->toInt();
					}

					void setFutureData(amf::Variant* value){
						set("futureData", value);
					}

					void setDataVersion(int value){
						set("dataVersion", amf::object_creator_t(value).mValue);
					}
				};
			};
		};
	};
};