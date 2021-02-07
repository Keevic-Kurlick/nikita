#ifndef INTERFACE_OPENABLE_HPP
#define INTERFACE_OPENABLE_HPP

class iOpenable
{
public:
	virtual ~iOpenable() {}
	virtual void open() = 0;
	virtual void close() = 0;
};
#endif#pragma once
