#include "Warpsystem.hh"

//---------------------------------QuantumReactor------------------------/

WarpSystem::QuantumReactor::QuantumReactor() {
  _stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{ }

void		WarpSystem::QuantumReactor::setStability(bool stability) {
  _stability = stability; }

bool		WarpSystem::QuantumReactor::getStability() {
  return _stability; }

bool		WarpSystem::QuantumReactor::isStable() {
  return getStability(); }

//---------------------------------Core---------------------------/

WarpSystem::Core::Core(QuantumReactor* coreReactor) {
  _coreReactor = coreReactor;
}

WarpSystem::Core::~Core()
{ }

bool		WarpSystem::Core::getStability() {
  if (_coreReactor)
    return _coreReactor->getStability();
  return false;
}

void		WarpSystem::Core::setStability(bool stability) {
  if (_coreReactor)
    _coreReactor->setStability(stability);
}

WarpSystem::QuantumReactor	*WarpSystem::Core::getQuantumReactor() {
  return _coreReactor; }

WarpSystem::QuantumReactor	*WarpSystem::Core::checkReactor() {
  return getQuantumReactor(); }

bool		WarpSystem::Core::isStable() {
  return getStability(); }
