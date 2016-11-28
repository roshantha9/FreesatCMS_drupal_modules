<?php
// $Id$

function assetmanagement_views_data()  {
  // Basic table information.

  // ----------------------------------------------------------------
  // images table
  //  New group within Views called 'Images_content'
  //  The group will appear in the UI in the dropdown tha allows you
  //  to narrow down which fields and filters are available.

  $data = array();
  $data['images']['table']['group']  = t('ImagesContent');

  // Let Views know that our example table joins to the 'node'
  // base table. This means it will be available when listing
  // nodes and automatically make its fields appear.
 
 
  $data['images']['table']['join'] = array(
    
    'content_type_article' => array(
      'left_field' => 'nid',
      'field' => 'field_article_imgref_p1_nid',
    ),
  );

  // image
  $data['image']['nid'] = array(
    'title' => t('imageref_nid'),
    'help' => t('Image Ref NID'),
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

