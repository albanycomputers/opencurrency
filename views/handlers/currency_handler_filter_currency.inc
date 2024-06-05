<?php

/**
 * @file
 *   Views filter handler.
 */

class opencurrency_handler_filter_currency extends views_handler_filter_in_operator {
  function get_value_options() {
    $this->value_options = opencurrency_get_list();
  }

  function query() {
    opencurrency_views_preload($this->view);
    return parent::query();
  }
}
