/* value.h
 *
 * Peter Janovsky
 */
#ifndef VALUE_H_INCLUDED
#define VALUE_H_INCLUDED

typedef struct dkvs_value_s dkvs_value_t;

struct dkvs_value_s {
    void *v;
}

dkvs_value_t *dkvs_alloc_value(void *v);
void dkvs_free_value(dkvs_value_t *value);

#endif /* !VALUE_H_INCLUDED */
