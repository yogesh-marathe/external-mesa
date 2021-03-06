/**************************************************************************
 *
 * Copyright 2012 Marek Olšák <maraeo@gmail.com>
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS AND/OR THEIR SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 **************************************************************************/

#ifndef U_HELPERS_H
#define U_HELPERS_H

#include "pipe/p_state.h"
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

void util_set_vertex_buffers_mask(struct pipe_vertex_buffer *dst,
                                  uint32_t *enabled_buffers,
                                  const struct pipe_vertex_buffer *src,
                                  unsigned start_slot, unsigned count);

void util_set_vertex_buffers_count(struct pipe_vertex_buffer *dst,
                                   unsigned *dst_count,
                                   const struct pipe_vertex_buffer *src,
                                   unsigned start_slot, unsigned count);

void util_set_index_buffer(struct pipe_index_buffer *dst,
                           const struct pipe_index_buffer *src);

bool util_save_and_upload_index_buffer(struct pipe_context *pipe,
                                       const struct pipe_draw_info *info,
                                       const struct pipe_index_buffer *ib,
                                       struct pipe_index_buffer *out_saved);

struct pipe_query *
util_begin_pipestat_query(struct pipe_context *ctx);

void
util_end_pipestat_query(struct pipe_context *ctx, struct pipe_query *q,
                        FILE *f);

#ifdef __cplusplus
}
#endif

#endif
