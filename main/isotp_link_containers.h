#define NUM_ISOTP_LINK_CONTAINERS 4

typedef struct IsoTpLinkContainer {
    IsoTpLink link;
    SemaphoreHandle_t wait_for_isotp_data_sem;
    uint8_t *recv_buf;
    uint8_t *send_buf;
    uint8_t *payload_buf;
} IsoTpLinkContainer;

static IsoTpLinkContainer isotp_link_containers[NUM_ISOTP_LINK_CONTAINERS];
