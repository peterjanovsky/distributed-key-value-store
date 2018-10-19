dkvs_value_t *
dkvs_alloc_value(void *v)
{
    dkvs_value_t *value;
    value = malloc(sizeof(dkvs_value_t));
    value->v = v;
    return value;
}

void
dkvs_free_value(dkvs_value_t *value)
{
    free(value);
}
