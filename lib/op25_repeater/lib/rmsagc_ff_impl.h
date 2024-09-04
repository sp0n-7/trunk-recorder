/* -*- c++ -*- */
/*
 * Copyright 2005,2013 Free Software Foundation, Inc.
 * Copyright 2020 Graham J.Norbury, gnorbury@bondcar.com
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_OP25_REPEATER_RMSAGC_FF_IMPL_H
#define INCLUDED_OP25_REPEATER_RMSAGC_FF_IMPL_H

#include <op25_repeater/rmsagc_ff.h>

namespace gr {
    namespace op25_repeater {

        /*!
         * \brief RMS average power
         * \ingroup math_blk
         */
        class rmsagc_ff_impl : public rmsagc_ff
        {
            private:
                double d_alpha, d_beta, d_avg, d_gain;

            public:
                rmsagc_ff_impl(double alpha  = 0.001, double k = 1.0);
                ~rmsagc_ff_impl();

                void set_alpha(double alpha);
                void set_k(double k);

                int work(int noutput_items,
                        gr_vector_const_void_star &input_items,
                        gr_vector_void_star &output_items);
        };

    } /* namespace op25_repeater */
} /* namespace gr */

#endif /* INCLUDED_OP25_REPEATER_RMS_FF_IMPL_H */
