# Copyright (C) 2019 Alexandros Theodotou <alex at zrythm dot org>
#
# This file is part of libaudec
#
# libaudec is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# libaudec is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with libaudec.  If not, see <https://www.gnu.org/licenses/>.

e = executable (
  'test_exe', 'test.c',
  include_directories: inc,
  link_with: audec,
  )
test (
  'wav_test', e,
  args: [
    join_paths (
      meson.current_source_dir(), 'test.wav'),
    '48000',
    ])
if (get_option ('enable_ffmpeg'))
test (
  'mp3_test', e,
  args: [
    join_paths (
      meson.current_source_dir(), 'test.mp3'),
    '48000',
    ])
endif