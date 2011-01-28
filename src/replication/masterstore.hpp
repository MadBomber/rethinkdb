#ifndef __REPLICATION_MASTERSTORE_HPP__
#define __REPLICATION_MASTERSTORE_HPP__

#include "store.hpp"

namespace replication {

class masterstore_t {

    void get_cas(store_key_t *key, castime_t castime);

    void set(store_key_t *key, data_provider_t *data, mcflags_t flags, exptime_t exptime, castime_t castime);
    void add(store_key_t *key, data_provider_t *data, mcflags_t flags, exptime_t exptime, castime_t castime);
    void replace(store_key_t *key, data_provider_t *data, mcflags_t flags, exptime_t exptime, castime_t castime);
    void cas(store_key_t *key, data_provider_t *data, mcflags_t flags, exptime_t exptime, cas_t unique, castime_t castime);
    void incr(store_key_t *key, unsigned long long amount, castime_t castime);
    void decr(store_key_t *key, unsigned long long amount, castime_t castime);
    void append(store_key_t *key, data_provider_t *data, castime_t castime);
    void prepend(store_key_t *key, data_provider_t *data, castime_t castime);
    void delete_key(store_key_t *key);
};





}  // namespace replication

#endif  // __REPLICATION_MASTERSTORE_HPP__
