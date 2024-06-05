<?php

/**
 * @file
 *   Views argument handler.
 */

class opencurrency_handler_argument_currency extends views_handler_argument {
  function query() {
    opencurrency_views_preload($this->view);
    return parent::query();
  }

  /**
   * Get the title this argument will assign the view, given the argument.
   *
   * This usually needs to be overridden to provide a proper title.
   */
  function title() {
    $opencurrency_names = opencurrency_get_list();
    return $opencurrency_names[$this->argument];
  }
}
