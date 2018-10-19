dkvs_key_t *
dkvs_alloc_key(char *k)
{
    dkvs_key_t *key;
    key = malloc(size(dkvs_key_t));
    key->k = k;
    return key;
}

void
dkvs_free_key(dkvs_key_t *key)
{
    free(key);
}
