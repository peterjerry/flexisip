/*
	Flexisip, a flexible SIP proxy server with media capabilities.
    Copyright (C) 2010  Belledonne Communications SARL.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SNMP_AGENT_H_
#define SNMP_AGENT_H_
#include <thread>
class GenericManager;
class Agent;

class SnmpAgent {
public:
	SnmpAgent(Agent& agent,GenericManager& cm);
	virtual ~SnmpAgent(){mThread.detach();};

private:
	class SnmpAgentTask {
	public:
		SnmpAgentTask(Agent& agent, GenericManager& cm);
		~SnmpAgentTask();
		void operator()() ;
	private:
		bool mKeepRunning;
		 GenericManager& mConfigmanager;
		 Agent& mAgent;
	};


	SnmpAgentTask mTask;
	std::thread mThread;
};

#endif /* SNMP_AGENT_H_ */