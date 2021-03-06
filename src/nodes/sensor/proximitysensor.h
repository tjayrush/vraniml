#ifndef __PROXIMITYSENSOR_H3D
#define __PROXIMITYSENSOR_H3D
//-------------------------------------------------------------------------
// Copyright (c) 1997-1998 Great Hill Corporation
// All Rights Reserved.
//-------------------------------------------------------------------------
// WARNING: THIS FILE WAS CREATED AUTOMATICALLY
//-------------------------------------------------------------------------
#include "Sensor.h"

/*----------------------------------------------------------------------
CLASS
	vrProximitySensor

	This class corresponds to the ProximitySensor node in VRML.  
	<A href="../spec/part1/nodesRef.html#ProximitySensor">Further information</a> 
	about this class is available in any VRML related documentation.

DESCRIPTION
	<ul>This node corresponds to the ProximitySensor node as defined in the VRML97 
	specification.  Like all Node Classes this class is better described in the 
	<A href="../spec/index.html">VRML97 Specification</a>.  In particular, at this 
	<A href="../spec/part1/nodesRef.html#ProximitySensor">link</a>.</ul>

NOTES
	<ul>
	<li>All node classes share certain aspects which are described <a href="../nodespec.htm">here</a>.</li>
	</ul>

EXAMPLE CODE
	<pre>
	// None.
	</pre>

MEMBERS
----------------------------------------------------------------------*/
class LIBInterface vrProximitySensor : public vrSensor
{
protected:
	//<doc>------------------------------------------------------------
	//<dd>Corresponds to the 'center' exposedField.
	//
	// [default] origin
	//
	SFVec3f             	m_Center;

	//<doc>------------------------------------------------------------
	//<dd>Corresponds to the 'size' exposedField.
	//
	// [default] origin
	//
	SFVec3f             	m_Size;

	//<doc>------------------------------------------------------------
	//<dd>Corresponds to the 'position' eventOut.
	//
	// [default] origin
	//
	SFVec3f             	m_Position;

	//<doc>------------------------------------------------------------
	//<dd>Corresponds to the 'orientation' eventOut.
	//
	// [default] defRotation
	//
	SFRotation          	m_Orientation;

	//<doc>------------------------------------------------------------
	//<dd>Corresponds to the 'enterTime' eventOut.
	//
	// [default] 0.0
	//
	SFTime              	m_EnterTime;

	//<doc>------------------------------------------------------------
	//<dd>Corresponds to the 'exitTime' eventOut.
	//
	// [default] 0.0
	//
	SFTime              	m_ExitTime;


public:
	//<doc>------------------------------------------------------------
	// <dd>Default constructor.
	//
	vrProximitySensor(void);

	//<doc>------------------------------------------------------------
	// <dd>Copy constructor.
	//
	vrProximitySensor(const vrProximitySensor& v);

	//<doc>------------------------------------------------------------
	// <dd>Destructor.
	//
	virtual ~vrProximitySensor(void);

	//<doc>------------------------------------------------------------
	// <dd>Equals operator.
	//
	vrProximitySensor& operator=(const vrProximitySensor& v);

	//<doc>------------------------------------------------------------
	// <dd>Returns an exact copy of the given node.
	//
	virtual SFNode Clone(void) const;


	//<doc>------------------------------------------------------------
	// <dd>Set the value of the m_Center member.
	//
	// [in] center: The center value.
	//
	void SetCenter(const SFVec3f& center);

	//<doc>------------------------------------------------------------
	// <dd>Set the value of the m_Size member.
	//
	// [in] size: The size value.
	//
	void SetSize(const SFVec3f& size);

	//<doc>------------------------------------------------------------
	// <dd>Return the value of the m_Center member.
	//
	SFVec3f GetCenter(void) const;

	//<doc>------------------------------------------------------------
	// <dd>Return the value of the m_Size member.
	//
	SFVec3f GetSize(void) const;


	//<doc>------------------------------------------------------------
	// <dd>Set the value of the m_Position member.
	//
	// [in] position: The position value.
	//
	void SetPosition(const SFVec3f& position);

	//<doc>------------------------------------------------------------
	// <dd>Set the value of the m_Orientation member.
	//
	// [in] orientation: The orientation value.
	//
	void SetOrientation(const SFRotation& orientation);

	//<doc>------------------------------------------------------------
	// <dd>Set the value of the m_EnterTime member.
	//
	// [in] entertime: The entertime value.
	//
	void SetEnterTime(SFTime entertime);

	//<doc>------------------------------------------------------------
	// <dd>Set the value of the m_ExitTime member.
	//
	// [in] exittime: The exittime value.
	//
	void SetExitTime(SFTime exittime);

	//<doc>------------------------------------------------------------
	// <dd>Return the value of the m_Position member.
	//
	SFVec3f GetPosition(void) const;

	//<doc>------------------------------------------------------------
	// <dd>Return the value of the m_Orientation member.
	//
	SFRotation GetOrientation(void) const;

	//<doc>------------------------------------------------------------
	// <dd>Return the value of the m_EnterTime member.
	//
	SFTime GetEnterTime(void) const;

	//<doc>------------------------------------------------------------
	// <dd>Return the value of the m_ExitTime member.
	//
	SFTime GetExitTime(void) const;


	//<nodoc>------------------------------------------------------------
	// <dd>Set the value of a field given the field's name and a value.
	// <dd>Note: Error checking is done on 'fieldName' but cannot be done on 'val',
	// <dd>      so make sure you send the correct type of data to this method.
	//
	// [in] fieldName: The name of the field to set (as specified in the VRML97 specification).
	// [in] val: Void pointer to a field of the type corresponding to fieldName.
	//
	virtual SFBool SetFieldValue(const SFString& fieldName, void *val);


	//<doc>------------------------------------------------------------
	// <dd>Respond to a traversal by an arbitrary traverser.  Note: Normally, nodes just call t->Traverse(this)
	// <dd>to have the traverser handle the traversal.  you may override this method in your derived class to
	// <dd>handle traversals of node types.
	//
	// [in] trav: The vrTraverser requesting the traversal.
	//
	virtual void Traverse(vrTraverser *trav) const;

	//<doc>------------------------------------------------------------
	// <dd>Receive an event during an event cascade or directly from caller.
	//
	// [in] event: The vrEvent to be processed.
	//
	virtual void ReceiveEventIn(vrEvent *event);

	//<doc>------------------------------------------------------------
	// <dd>Returns TRUE if the node (or a particular field) is in it's default state.
	//
	// [in] fieldName: The field to check for default value.  NULL implies check all fields of this node.
	// [out] field: If non-NULL the value of the field will be returned in field.
	//
	virtual SFBool IsDefault(const SFString& fieldName=nullString, vrField *field=NULL) const;

	//<doc>------------------------------------------------------------
	// <dd>Declare that this node may be runtime typed and dynamically created. [ DECLARE_NODE ]
	//
	DECLARE_NODE(vrProximitySensor);

};

//----------------------------------------------------------------------
// exposedField sets and gets inlines
inline void vrProximitySensor::SetCenter(const SFVec3f& center)
{
	m_Center = center;
}

inline void vrProximitySensor::SetSize(const SFVec3f& size)
{
	m_Size = size;
}

inline SFVec3f vrProximitySensor::GetCenter(void) const
{
	return m_Center;
}

inline SFVec3f vrProximitySensor::GetSize(void) const
{
	return m_Size;
}

// eventOut sets and gets inlines
inline void vrProximitySensor::SetPosition(const SFVec3f& position)
{
	m_Position = position;
}

inline void vrProximitySensor::SetOrientation(const SFRotation& orientation)
{
	m_Orientation = orientation;
}

inline void vrProximitySensor::SetEnterTime(SFTime entertime)
{
	m_EnterTime = entertime;
}

inline void vrProximitySensor::SetExitTime(SFTime exittime)
{
	m_ExitTime = exittime;
}

inline SFVec3f vrProximitySensor::GetPosition(void) const
{
	return m_Position;
}

inline SFRotation vrProximitySensor::GetOrientation(void) const
{
	return m_Orientation;
}

inline SFTime vrProximitySensor::GetEnterTime(void) const
{
	return m_EnterTime;
}

inline SFTime vrProximitySensor::GetExitTime(void) const
{
	return m_ExitTime;
}

inline void vrProximitySensor::Traverse(vrTraverser *t) const
{
	t->Traverse(this);
}
#endif

