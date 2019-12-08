/*
 * Copyright (C) 2019 Alexandros Theodotou <alex at zrythm dot org>

 * This file is part of libaudec

 * libaudec is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * libaudec is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public License
 * along with libaudec.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "helper.h"

#include "audec.h"

int main (
  int argc, const char* argv[])
{
  ad_assert (argc > 2);

  const char * filename = argv[1];
  int sample_rate = atoi (argv[2]);

  /* read info */
  AudecInfo nfo;
  AudecHandle * handle =
    audec_open (filename, &nfo);
  float * out_frames = NULL;
  ssize_t samples_read =
    audec_read (
      handle, &out_frames, sample_rate);
  ad_assert (samples_read > 0);

  audec_close (handle);

  return 0;
}
