<?php
// $Id$

function channelmapper_views_data()  {
  // Basic table information.

  // ----------------------------------------------------------------
  // tblchannelmap table
  //  New group within Views called 'ChannelMapper'
  //  The group will appear in the UI in the dropdown tha allows you
  //  to narrow down which fields and filters are available.

  $data = array();
  $data['tblchannelmap']['table']['group']  = t('ChannelMapper');

  // Let Views know that our example table joins to the 'node'
  // base table. This means it will be available when listing
  // nodes and automatically make its fields appear.
 
 
  $data['tblchannelmap']['table']['join'] = array(
    
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nodeid',
    ),
  );

  // channelid
  $data['tblchannelmap']['channelid'] = array(
    'title' => t('ChannelID'),
    'help' => t('ID of Channel'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  /*
  // Color	
  	
  $data['node_example']['color'] = array(
    'title' => t('Color'),
    'help' => t('Color of item.'),

    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
      'handler' => 'views_handler_sort',
     ),
  );

	*/
  
  return $data;
}

