/* key.h
 *
 * Peter Janovsky
 */
#ifndef KEY_H_INCLUDED
#define KEY_H_INCLUDED

typedef struct dkvs_key_s dkvs_key_t;

struct dkvs_key_s {
    char *k;
}

typedef struct dkvs_tup_s dkvs_tup_t;
struct dkvs_tup_s {
    char *k;
    void *v;
}

dkvs_key_s *dkvs_alloc_key(char *k);
void dkvs_free_key(dkvs_key_t *key);

#endif /* !KEY_H_INCLUDED */
