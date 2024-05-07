/**
  ******************************************************************************
  * @file    nlp_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun May  5 04:59:41 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "nlp_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_nlp_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_nlp_weights_array_u64[259] = {
  0x3efff3113dcf47cdU, 0xbe24d49dbea38026U, 0xbe82a8babec524eeU, 0xbe9585963ea24a4eU,
  0xbeaabd7d3ea4932eU, 0xbe8661493e698de1U, 0xbdc9e63e3e323468U, 0xbe94d1ebbe82d9f4U,
  0xbdded035be871263U, 0xbee0aeb83ea9e3afU, 0xbe4624cb3e4544cbU, 0xbed04892bd0e6052U,
  0xbea0b0713e80a1e1U, 0x3e683408bee26e77U, 0x3daf116ebed074c5U, 0xbea6313e3e8ad840U,
  0xbef687cf3e25e0e7U, 0x3db10fd7beec849fU, 0xbec3bf133e1c72cbU, 0x3e2712193eaad8a4U,
  0xbeae69893c9c666fU, 0xbde2c8a73ec16681U, 0x3e73b2773db223dcU, 0xbddd8e583e5397c1U,
  0x3d80968f3e893626U, 0xbebbd95b3e643130U, 0xbea9c97b3e568ca5U, 0x3e7daababeb5d4adU,
  0x3d7c3d2e3d7f37cbU, 0x3dcebe433ee82adcU, 0xbec02fffbefa40b6U, 0x3e9479b5be71372fU,
  0xbe7f2364bf00622dU, 0x3e87f9913e2b6f84U, 0x3e3144d33d83e5afU, 0x3e785619bb503121U,
  0xbe2d018cbe0b18c5U, 0x3ead77113ea03042U, 0xbe684aaabd2ab224U, 0x3eefe53c3eafcae7U,
  0x3d2e0c793e46c49fU, 0xbce6ba183cdfc90bU, 0x3e1b9d503eadc82aU, 0x3eb3c13dbdeb20b6U,
  0x3e48d9933e0125caU, 0x3eaaf2d3bc4ffb70U, 0xbebd7bc8be7a86ecU, 0x3e589bb1bec9f580U,
  0xbebad7dd3e9f8b70U, 0xbd315a383e268067U, 0x3d3227023e7499daU, 0x3e95bbe13ea11aeaU,
  0x3d6b7b6b3e9fb48bU, 0xbe41f2ddbec4e420U, 0xbe97acafbea7783dU, 0x3d08db54be801828U,
  0x3e5fb3993ed8d122U, 0xbe66b05abdb95795U, 0xbdedbd683e1c7a75U, 0x3e2e4f023dc30040U,
  0xbdbc09ecbe2a6b23U, 0xbec0a22b3cee5083U, 0xbecfd73fbe253668U, 0x3e14780abe478368U,
  0xbe99dd0cbe992b23U, 0x3d86b556bdb756b6U, 0xbe68c8443eca1dddU, 0x3d41f4073de5ba49U,
  0x3eec562d3ec6a3adU, 0xbe69220f3ce18750U, 0x3e8c47ccbeaccb6dU, 0x3e49b4273eb80964U,
  0x3eb73886bee1b3a5U, 0x3e9ea185bed6a96aU, 0x3de4b6593c85e67dU, 0xbeb6b8513eb262f5U,
  0x3e07feb83cb53492U, 0xbe9450c0be66c25dU, 0x3eb39628bda7dbdfU, 0x3d24a03ebe63fce4U,
  0xbde4f3cfbea433a0U, 0x3d4966ca3e2c6d0cU, 0x3e9cdf523ec6cb80U, 0xbd3e2c7e3e55d78aU,
  0xbe5306ca3ea11b6cU, 0x3eafda253e5dfe6aU, 0xbe32a3a7bd844851U, 0xbdc103953e62ddc3U,
  0x3e857781bc865fe9U, 0xbecebe573e7e2402U, 0xbd6ad760baf82085U, 0xbd3f34653e98e4e9U,
  0xbdafd32dbedd437bU, 0x3d60dd4a3e889622U, 0xbebf5169bdce5579U, 0xbe141fb13e4b3397U,
  0xbe13fde93e8fffffU, 0xbe9c9862be987934U, 0x3ec12a663ec2f9a2U, 0x3db9bb433ebbdc53U,
  0xbded79363dc38354U, 0xbd8d413ebd862420U, 0x3d752033bd2a2346U, 0x3da9fa0ebd61b1ecU,
  0xbd9ad2ca3c17f72cU, 0x3db1ab53bdbaca65U, 0x3e6fde733d10f066U, 0xbd3115ffbcf4ea58U,
  0xbd32723cbd04949cU, 0x3d9f014ebd7bec36U, 0x3db20ae2bdcdac17U, 0xbe3c5e383e9df0c8U,
  0xbde50a8a3e2598e9U, 0x3d99658c3eaa9094U, 0x3e32fcc83d96a03fU, 0x3e849da3be583728U,
  0x3e9b3cc03ecfd15eU, 0x3e9539f03eb923d7U, 0x3ec3868a3c55945aU, 0xbdb4b559be91cae5U,
  0x3db0e5823e13bb53U, 0x3db52923bee31a45U, 0x3cbf43e73e67e35eU, 0xbe80a58e3e8e7648U,
  0xbe9917b93e1e5e14U, 0x3e07f6fdbe9f786fU, 0x3e5f9467be1b779bU, 0xbd6e42883cb25d42U,
  0xbeb50d1b3ec7d051U, 0xbe105981be82d9fcU, 0x3dbe6707be6d5e09U, 0x3e5293f73e3e59e4U,
  0xbda5d31f3e6a2a15U, 0xbee711a9be4fb090U, 0x3d245bbbbc756cb1U, 0x3eb906873ea24f18U,
  0xbf1734f9beaf5a76U, 0xbde8abafbed7d285U, 0x3eba6f213e15f225U, 0xbedb20dc3eabf892U,
  0xbe29bb11be624d80U, 0xbdff74c93eac40d3U, 0xbedde4d63eb10289U, 0xbe8e3532be7b0171U,
  0xbea16d083e8522f8U, 0xbdcbf8d0bd963e2fU, 0xbce56eecbd936bd1U, 0xbdd36fda3e9fb3a2U,
  0xbeb2932cbd6cebf1U, 0x3e6fe1fd3e4da037U, 0xbe1c6e493d938734U, 0xbda182f53ee06ca3U,
  0xbe078cc7be3ef408U, 0x3e83765e3e42f8f2U, 0x3dd209383e40a841U, 0x3f1515febe14da22U,
  0x3e3d7e0c3e0f0c50U, 0x3e58641d3e6fda00U, 0x3ec08a513ed4a41aU, 0x3ea532523d61ee17U,
  0x3d4d9034bd027f09U, 0x3e92fec5be5ed3a1U, 0xbed0161cbe75fb42U, 0xbedd74afbe908fccU,
  0x3eb2e3b13d926a79U, 0x3e3f9603bec10cf3U, 0xbec9f233be4911a4U, 0xbcf886c73e478d34U,
  0x3ea5528d3ec59c3fU, 0x3d76098b3eb88452U, 0xbecdf48b3e1008adU, 0x3ebd7e7b3dbc5f88U,
  0xbdd4f76b3d8e89f0U, 0xbed4efa2be8ce1a3U, 0x3e9736a73d03c965U, 0xbdc0ced7be7a056aU,
  0xbe6ab4a93cb6f720U, 0xbe2b3ae9becbeb1dU, 0xbe63e1043ebedaa5U, 0xbd6d52ae3ed313cdU,
  0xbe96a845bd6b3c65U, 0x3e39be60bd355428U, 0x3de1dcda3d7b523dU, 0xbcda95293cc6aa04U,
  0x3e1301a5bed9bd7eU, 0xbde3c6c53e97ce4aU, 0x3dd695543d025ce0U, 0xbe3da1183e9359dbU,
  0xbedcd2d1be9a96ebU, 0xbebb09203da5523fU, 0x3ddef9c63e9c9e67U, 0x3ee6198e3e272534U,
  0xbe68d1983e0545cbU, 0xbd1af06ebe88febaU, 0xbe56ed3abe7136d0U, 0x3e2445783ecd1b30U,
  0x3e15ad3b3ddb4bc7U, 0x3ed3bbee3dfdcb18U, 0xbeaca71f3e9bdf40U, 0x3ec7f9d13e87941bU,
  0xbca1106e3ee6dfc0U, 0x3e87d8583e355756U, 0xbc9839423e5185dcU, 0x3ee9293f3dce4221U,
  0x3e5e6a6b3e5af3c7U, 0x3f0090babe5a73b7U, 0x3e2cb5513e862808U, 0xbdfabf23bea8fc64U,
  0x3ebc6d593ea81292U, 0x3ec4f876be354933U, 0xbd59c57ebcd83d5dU, 0xbc8042c6bda77081U,
  0xbd88acd13e0dcbfeU, 0xbdb18140bcd40543U, 0x3d846a503d9ac82aU, 0x3ef5d549be9845f3U,
  0x3eb2b9e1beefbdb5U, 0x3ee81d993e282df7U, 0x3e854251bec5dcc3U, 0xbeee139dbd7ff39bU,
  0xbf04423b3ea57275U, 0xbf0118dcbe523154U, 0xbdb630c1bec231dcU, 0x3dde8b69bf05cbc8U,
  0xbf23dcb33e33eeddU, 0x3e1e2aaabf1657a0U, 0xbe01b001bcd7ac65U, 0x3f0b09803ea1a239U,
  0x3e90bbba3f0a0c21U, 0xbdcf24cebe2fea35U, 0x3ec00d2c3f0d3d37U, 0x3e82f9663ea1c949U,
  0x3d9c92c4be52b445U, 0x3f083776bf0b28cbU, 0xbf2143f0bf243d1eU, 0xbf1559823eac0be6U,
  0x3d412a593e8401d0U, 0x3ed2f7cebf1bbdb9U, 0xbf0167e5bddb6409U, 0x3d870bcabd7700fdU,
  0x3f15cfb5bf21512cU, 0xbe9c8d90bee10d90U, 0x3ec4026fbeb3ec46U, 0x3e2f0a253e81a86aU,
  0xbf0201c53ee1b6c0U, 0xbe0203a9bd626f3aU, 0xbd86878ebdee0075U, 0xbe0805dfbe366ce0U,
  0xbe9dbadbbec34622U, 0xbe3e7e5b3ee2b40aU, 0x3ecb47f8beee26c0U, 0x3e4454743e1a3667U,
  0xbf4429e4bf36af03U, 0xbec4dc49bf0736ebU, 0x3e5858f43d827543U, 0x3f3bbbab3eae0607U,
  0xbf343e3cbde3d827U, 0x3c0fede0beb50cbaU, 0x3e7ab14bU,
};


ai_handle g_nlp_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_nlp_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

