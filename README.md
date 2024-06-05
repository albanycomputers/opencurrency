Open Currency
=============

This module provides visitors to your web site with currency conversion rates.

It also provides a callable API for currency conversion that other modules can
use.

It relies on https://openexchangerates.org for getting the currency exchange
data. You will need to register for an API key, there is a free account which
offers 1000 api calls per month.

Features:
---------

This module provides several options that customize its look and feel:

- An overview section on the top of the page can contain any text you want

- Users can enter an amount, and that amount will calculated in the target
  currency.

- Provides an input format filter that converts currency tokens like:
  [currency:from:to:value:decimals] to a currency exchange rate.
  The 'decimals' parameter is optional.
  Example: [currency:EUR:USD:100:2].

- Provides a link to a detailed history and chart page on Yahoo Finance.

- All currency conversion operations are logged to the watchdog (optional).

- Provides a callable API for other modules to do currency exchange
  calculations. See currency.api.php for details.


## Credits / Inspiration:
-------------------------
Author
------
Khalid Baheyeldin (http://baheyeldin.com/khalid and http://2bits.com)

Forked from currency moduled ported to Backdrop by
Andy Shillingford (https://github.com/docwilmot)

Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules

- Allow access to the module under admin/access.
   You can enable it for authenticated and/or anonymous users, depending on
   your web site needs.

- Configure the module under admin/config/regional/currency

- Use the form at path '/currency'

## Sponsorship:
 - [Albany Computer Services] (https://www.albany-computers.co.uk)
 - [Albany Web Design] (https://www.albanywebdesign.co.uk)
 - [Albany Hosting] (https://www.albany-hosting.co.uk)

## Current Maintainer(s):
- [Steve Moorhouse (albanycomputers)] (https://github.com/albanycomputers)