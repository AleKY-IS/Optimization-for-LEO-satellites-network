//
// Generated file, do not edit! Created by nedtool 5.4 from node/Packet.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __PACKET_M_H
#define __PACKET_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



class Packet;
/**
 * Class generated from <tt>node/Packet.msg:15</tt> by nedtool.
 * <pre>
 * //
 * // Represents a packet in the network.
 * //
 * packet Packet
 * {
 *     int srcAddr \@packetData;
 *     int destAddr \@packetData;
 *     int hopCount \@packetData;
 *     int hasInitTopo \@packetData;
 *     int packetType \@packetData;
 *     omnetpp::cTopology *TopologyVar \@packetData;
 *     int TopologyID \@packetData;
 *     int gateIDList[] \@packetData;
 *     int packetList[] \@packetData;
 * }
 * </pre>
 */
class Packet : public ::omnetpp::cPacket
{
  protected:
    int srcAddr = 0;
    int destAddr = 0;
    int hopCount = 0;
    int hasInitTopo = 0;
    int packetType = 0;
    omnetpp::cTopology * TopologyVar = nullptr;
    int TopologyID = 0;
    int *gateIDList = nullptr;
    size_t gateIDList_arraysize = 0;
    int *packetList = nullptr;
    size_t packetList_arraysize = 0;

  private:
    void copy(const Packet& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Packet&);

  public:
    Packet(const char *name=nullptr, short kind=0);
    Packet(const Packet& other);
    virtual ~Packet();
    Packet& operator=(const Packet& other);
    virtual Packet *dup() const override {return new Packet(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSrcAddr() const;
    virtual void setSrcAddr(int srcAddr);
    virtual int getDestAddr() const;
    virtual void setDestAddr(int destAddr);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
    virtual int getHasInitTopo() const;
    virtual void setHasInitTopo(int hasInitTopo);
    virtual int getPacketType() const;
    virtual void setPacketType(int packetType);
    virtual const omnetpp::cTopology * getTopologyVar() const;
    virtual omnetpp::cTopology * getTopologyVarForUpdate() { return const_cast<omnetpp::cTopology *>(const_cast<Packet*>(this)->getTopologyVar());}
    virtual void setTopologyVar(omnetpp::cTopology * TopologyVar);
    virtual int getTopologyID() const;
    virtual void setTopologyID(int TopologyID);
    virtual void setGateIDListArraySize(size_t size);
    virtual size_t getGateIDListArraySize() const;
    virtual int getGateIDList(size_t k) const;
    virtual void setGateIDList(size_t k, int gateIDList);
    virtual void insertGateIDList(int gateIDList);
    virtual void insertGateIDList(size_t k, int gateIDList);
    virtual void eraseGateIDList(size_t k);
    virtual void setPacketListArraySize(size_t size);
    virtual size_t getPacketListArraySize() const;
    virtual int getPacketList(size_t k) const;
    virtual void setPacketList(size_t k, int packetList);
    virtual void insertPacketList(int packetList);
    virtual void insertPacketList(size_t k, int packetList);
    virtual void erasePacketList(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Packet& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Packet& obj) {obj.parsimUnpack(b);}

#endif // ifndef __PACKET_M_H
