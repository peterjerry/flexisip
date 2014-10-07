//
//  subscription.hh
//  flexisip
//
//  Created by jeh on 18/06/14.
//  Copyright (c) 2014 Belledonne Communications. All rights reserved.
//

#ifndef flexisip_subscription_hh
#define flexisip_subscription_hh
#include <string>
#include "belle-sip/belle-sip.h"
#include "presentity-presenceinformation.hh"
using namespace std;

namespace flexisip {
	class Subscription {

	public:
		enum State {
			active, pending, terminated
		};
		Subscription(string eventName,unsigned int expires,belle_sip_dialog_t* aDialog,belle_sip_provider_t* prov);
		~Subscription();
		void setAcceptHeader(belle_sip_header_t* acceptHeader);
		void setId(string& id);
		void notify(belle_sip_header_content_type_t * content_type, string& body);
		static const char* stateToString(State aState);
		State getState() const;
		void setState(Subscription::State state);
		/*
		 * used to update expire value
		 */
		void setExpire(int expires);
	private:
		string mEventName;
		string mEventId;
		belle_sip_header_t* mAcceptHeader;
		string state;
		unsigned int mExpires;
		string mId;
		belle_sip_dialog_t* mDialog;
		State mState;
		time_t creationTime;
		belle_sip_provider_t* mProv;
	
	};
	
	
	
	/**
	 ** Presence subscription object host a subscription to a opresence entity. This object has the same live cycle has a subscription dialog
	 */
	class PresenceSubscription : public Subscription, public PresentityPresenceInformation::Listener {
	public:
		PresenceSubscription(unsigned int expires,const belle_sip_uri_t* presentity,belle_sip_dialog_t* aDialog,belle_sip_provider_t* aProv);
		~PresenceSubscription();
	
		
		
		const belle_sip_uri_t* getPresentityUri(void);
		/*
		 * This function is call every time Presentity information need to be notified to a UA
		 */
		void onInformationChanged(PresentityPresenceInformation& presenceInformation);
		void onExpired(PresentityPresenceInformation& presenceInformation);
		
	private:
		const belle_sip_uri_t* mPresentity;
		

	};
}


#endif
