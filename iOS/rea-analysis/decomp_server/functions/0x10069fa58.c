// rea decompile_all
// name: FUN_10069fa58
// address: 0x10069fa58
// body: available
// range: 0x10069fa58-0x1006a048f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a048c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069fa58(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  string *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  long *plVar7;
  string *psVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  string *this;
  void *local_970;
  undefined8 uStack_968;
  long local_960;
  undefined1 local_958 [24];
  undefined4 *local_940;
  char local_938;
  undefined1 auStack_930 [40];
  undefined1 local_908 [8];
  void *local_900;
  undefined8 uStack_8f8;
  long local_8f0;
  void *local_8e0;
  undefined8 uStack_8d8;
  long local_8d0;
  void *local_8c0;
  undefined8 uStack_8b8;
  long local_8b0;
  void *local_8a0;
  undefined8 uStack_898;
  long local_890;
  void *local_880;
  undefined8 uStack_878;
  long local_870;
  undefined *local_860;
  char local_858;
  char local_850 [256];
  void *local_750;
  undefined8 uStack_748;
  long local_740;
  void *local_738;
  char local_721;
  void *local_720;
  char local_709;
  void *local_708;
  char local_6f1;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  char local_270 [520];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  *param_1 = *param_2;
  this = (string *)(param_1 + 2);
  std::string::operator=(this,this);
  std::string::operator=(this,(string *)(param_1 + 8));
  puVar1 = param_2 + 0xe;
  std::string::operator=(this,(string *)(param_1 + 0xe));
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  psVar2 = (string *)(param_1 + 0x16);
  std::string::operator=(this,psVar2);
  param_1[0x1c] = param_2[0x1c];
  local_860 = &DAT_100b2c568;
  local_858 = '\0';
  FUN_100696f64(&local_860);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_100384eb8(&local_750,*(undefined8 *)psVar2);
      goto LAB_10069fb30;
    }
  }
  else if (*(char *)((long)param_1 + 0x6f) != '\0') {
    uStack_748 = *(undefined8 *)(param_1 + 0x18);
    local_750 = *(void **)psVar2;
    local_740 = *(long *)(param_1 + 0x1a);
LAB_10069fb30:
    FUN_1006991f8(&local_750,0);
    if (local_740 < 0) {
      operator_delete(local_750);
    }
    if (*(char *)((long)param_1 + 0x6f) < '\0') {
      FUN_100384eb8(&local_880,*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18));
    }
    else {
      uStack_878 = *(undefined8 *)(param_1 + 0x18);
      local_880 = *(void **)psVar2;
      local_870 = *(long *)(param_1 + 0x1a);
    }
    FUN_1006a1578(&local_750,FUN_1006a1648,0,param_1,&local_880);
    pvVar6 = operator_new(0x58);
    FUN_1006a4ee8(pvVar6,&local_750,0,0);
    plVar7 = *(long **)(param_1 + 0x19a);
    *(void **)(param_1 + 0x19a) = pvVar6;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (local_721 < '\0') {
      operator_delete(local_738);
    }
    if (local_870 < 0) {
      operator_delete(local_880);
    }
    FUN_10069651c(*(undefined8 *)(param_1 + 0x19a),120000);
    if (*(char *)((long)param_1 + 0x6f) < '\0') {
      FUN_100384eb8(&local_8a0,*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0x18));
    }
    else {
      uStack_898 = *(undefined8 *)(param_1 + 0x18);
      local_8a0 = *(void **)psVar2;
      local_890 = *(long *)(param_1 + 0x1a);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      FUN_100384eb8(&local_8c0,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
    }
    else {
      uStack_8b8 = *(undefined8 *)(this + 8);
      local_8c0 = *(void **)this;
      local_8b0 = *(long *)(this + 0x10);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      FUN_100384eb8(&local_8e0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
    }
    else {
      uStack_8d8 = *(undefined8 *)(param_1 + 10);
      local_8e0 = *(void **)(param_1 + 8);
      local_8d0 = *(long *)(param_1 + 0xc);
    }
    FUN_1006a1950(&local_750,FUN_1006a1a9c,0,param_1,&local_8a0,&local_8c0,&local_8e0);
    pvVar6 = operator_new(0x58);
    FUN_1006a548c(pvVar6,&local_750,0,0);
    plVar7 = *(long **)(param_1 + 0x19c);
    *(void **)(param_1 + 0x19c) = pvVar6;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (local_6f1 < '\0') {
      operator_delete(local_708);
    }
    if (local_709 < '\0') {
      operator_delete(local_720);
    }
    if (local_721 < '\0') {
      operator_delete(local_738);
    }
    if (local_8d0 < 0) {
      operator_delete(local_8e0);
    }
    if (local_8b0 < 0) {
      operator_delete(local_8c0);
    }
    if (local_890 < 0) {
      operator_delete(local_8a0);
    }
    FUN_10069651c(*(undefined8 *)(param_1 + 0x19c),180000);
    psVar8 = psVar2;
    if (*(char *)((long)param_1 + 0x6f) < '\0') {
      psVar8 = *(string **)psVar2;
    }
    FUN_100697d9c(psVar8);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    FUN_100384eb8(&local_900,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
  }
  else {
    uStack_8f8 = *(undefined8 *)(this + 8);
    local_900 = *(void **)this;
    local_8f0 = *(long *)(this + 0x10);
  }
  FUN_1006a1578(&local_750,FUN_1006a1648,0,param_1,&local_900);
  pvVar6 = operator_new(0x58);
  FUN_1006a4ee8(pvVar6,&local_750,0,0);
  plVar7 = *(long **)(param_1 + 0x19e);
  *(void **)(param_1 + 0x19e) = pvVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (local_721 < '\0') {
    operator_delete(local_738);
  }
  if (local_8f0 < 0) {
    operator_delete(local_900);
  }
  FUN_10069651c(*(undefined8 *)(param_1 + 0x19e),120000);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    FUN_100384eb8(&local_750,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
  }
  else {
    uStack_748 = *(undefined8 *)(this + 8);
    local_750 = *(void **)this;
    local_740 = *(long *)(this + 0x10);
  }
  FUN_1006991f8(&local_750,0);
  if (local_740 < 0) {
    operator_delete(local_750);
  }
  psVar8 = this;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    psVar8 = *(string **)this;
  }
  FUN_100697d9c(psVar8);
  FUN_1006972a0(&local_860);
  FUN_100695198(local_908,0);
  FUN_100695158(local_908);
  local_270[0x1f8] = '\0';
  local_270[0x1f9] = '\0';
  local_270[0x1fa] = '\0';
  local_270[0x1fb] = '\0';
  local_270[0x1fc] = '\0';
  local_270[0x1fd] = '\0';
  local_270[0x1fe] = '\0';
  local_270[0x1ff] = '\0';
  local_270[0x1f0] = '\0';
  local_270[0x1f1] = '\0';
  local_270[0x1f2] = '\0';
  local_270[499] = '\0';
  local_270[500] = '\0';
  local_270[0x1f5] = '\0';
  local_270[0x1f6] = '\0';
  local_270[0x1f7] = '\0';
  local_270[0x1e8] = '\0';
  local_270[0x1e9] = '\0';
  local_270[0x1ea] = '\0';
  local_270[0x1eb] = '\0';
  local_270[0x1ec] = '\0';
  local_270[0x1ed] = '\0';
  local_270[0x1ee] = '\0';
  local_270[0x1ef] = '\0';
  local_270[0x1e0] = '\0';
  local_270[0x1e1] = '\0';
  local_270[0x1e2] = '\0';
  local_270[0x1e3] = '\0';
  local_270[0x1e4] = '\0';
  local_270[0x1e5] = '\0';
  local_270[0x1e6] = '\0';
  local_270[0x1e7] = '\0';
  local_270[0x1d8] = '\0';
  local_270[0x1d9] = '\0';
  local_270[0x1da] = '\0';
  local_270[0x1db] = '\0';
  local_270[0x1dc] = '\0';
  local_270[0x1dd] = '\0';
  local_270[0x1de] = '\0';
  local_270[0x1df] = '\0';
  local_270[0x1d0] = '\0';
  local_270[0x1d1] = '\0';
  local_270[0x1d2] = '\0';
  local_270[0x1d3] = '\0';
  local_270[0x1d4] = '\0';
  local_270[0x1d5] = '\0';
  local_270[0x1d6] = '\0';
  local_270[0x1d7] = '\0';
  local_270[0x1c8] = '\0';
  local_270[0x1c9] = '\0';
  local_270[0x1ca] = '\0';
  local_270[0x1cb] = '\0';
  local_270[0x1cc] = '\0';
  local_270[0x1cd] = '\0';
  local_270[0x1ce] = '\0';
  local_270[0x1cf] = '\0';
  local_270[0x1c0] = '\0';
  local_270[0x1c1] = '\0';
  local_270[0x1c2] = '\0';
  local_270[0x1c3] = '\0';
  local_270[0x1c4] = '\0';
  local_270[0x1c5] = '\0';
  local_270[0x1c6] = '\0';
  local_270[0x1c7] = '\0';
  local_270[0x1b8] = '\0';
  local_270[0x1b9] = '\0';
  local_270[0x1ba] = '\0';
  local_270[0x1bb] = '\0';
  local_270[0x1bc] = '\0';
  local_270[0x1bd] = '\0';
  local_270[0x1be] = '\0';
  local_270[0x1bf] = '\0';
  local_270[0x1b0] = '\0';
  local_270[0x1b1] = '\0';
  local_270[0x1b2] = '\0';
  local_270[0x1b3] = '\0';
  local_270[0x1b4] = '\0';
  local_270[0x1b5] = '\0';
  local_270[0x1b6] = '\0';
  local_270[0x1b7] = '\0';
  local_270[0x1a8] = '\0';
  local_270[0x1a9] = '\0';
  local_270[0x1aa] = '\0';
  local_270[0x1ab] = '\0';
  local_270[0x1ac] = '\0';
  local_270[0x1ad] = '\0';
  local_270[0x1ae] = '\0';
  local_270[0x1af] = '\0';
  local_270[0x1a0] = '\0';
  local_270[0x1a1] = '\0';
  local_270[0x1a2] = '\0';
  local_270[0x1a3] = '\0';
  local_270[0x1a4] = '\0';
  local_270[0x1a5] = '\0';
  local_270[0x1a6] = '\0';
  local_270[0x1a7] = '\0';
  local_270[0x198] = '\0';
  local_270[0x199] = '\0';
  local_270[0x19a] = '\0';
  local_270[0x19b] = '\0';
  local_270[0x19c] = '\0';
  local_270[0x19d] = '\0';
  local_270[0x19e] = '\0';
  local_270[0x19f] = '\0';
  local_270[400] = '\0';
  local_270[0x191] = '\0';
  local_270[0x192] = '\0';
  local_270[0x193] = '\0';
  local_270[0x194] = '\0';
  local_270[0x195] = '\0';
  local_270[0x196] = '\0';
  local_270[0x197] = '\0';
  local_270[0x188] = '\0';
  local_270[0x189] = '\0';
  local_270[0x18a] = '\0';
  local_270[0x18b] = '\0';
  local_270[0x18c] = '\0';
  local_270[0x18d] = '\0';
  local_270[0x18e] = '\0';
  local_270[399] = '\0';
  local_270[0x180] = '\0';
  local_270[0x181] = '\0';
  local_270[0x182] = '\0';
  local_270[0x183] = '\0';
  local_270[0x184] = '\0';
  local_270[0x185] = '\0';
  local_270[0x186] = '\0';
  local_270[0x187] = '\0';
  local_270[0x178] = '\0';
  local_270[0x179] = '\0';
  local_270[0x17a] = '\0';
  local_270[0x17b] = '\0';
  local_270[0x17c] = '\0';
  local_270[0x17d] = '\0';
  local_270[0x17e] = '\0';
  local_270[0x17f] = '\0';
  local_270[0x170] = '\0';
  local_270[0x171] = '\0';
  local_270[0x172] = '\0';
  local_270[0x173] = '\0';
  local_270[0x174] = '\0';
  local_270[0x175] = '\0';
  local_270[0x176] = '\0';
  local_270[0x177] = '\0';
  local_270[0x168] = '\0';
  local_270[0x169] = '\0';
  local_270[0x16a] = '\0';
  local_270[0x16b] = '\0';
  local_270[0x16c] = '\0';
  local_270[0x16d] = '\0';
  local_270[0x16e] = '\0';
  local_270[0x16f] = '\0';
  local_270[0x160] = '\0';
  local_270[0x161] = '\0';
  local_270[0x162] = '\0';
  local_270[0x163] = '\0';
  local_270[0x164] = '\0';
  local_270[0x165] = '\0';
  local_270[0x166] = '\0';
  local_270[0x167] = '\0';
  local_270[0x158] = '\0';
  local_270[0x159] = '\0';
  local_270[0x15a] = '\0';
  local_270[0x15b] = '\0';
  local_270[0x15c] = '\0';
  local_270[0x15d] = '\0';
  local_270[0x15e] = '\0';
  local_270[0x15f] = '\0';
  local_270[0x150] = '\0';
  local_270[0x151] = '\0';
  local_270[0x152] = '\0';
  local_270[0x153] = '\0';
  local_270[0x154] = '\0';
  local_270[0x155] = '\0';
  local_270[0x156] = '\0';
  local_270[0x157] = '\0';
  local_270[0x148] = '\0';
  local_270[0x149] = '\0';
  local_270[0x14a] = '\0';
  local_270[0x14b] = '\0';
  local_270[0x14c] = '\0';
  local_270[0x14d] = '\0';
  local_270[0x14e] = '\0';
  local_270[0x14f] = '\0';
  local_270[0x140] = '\0';
  local_270[0x141] = '\0';
  local_270[0x142] = '\0';
  local_270[0x143] = '\0';
  local_270[0x144] = '\0';
  local_270[0x145] = '\0';
  local_270[0x146] = '\0';
  local_270[0x147] = '\0';
  local_270[0x138] = '\0';
  local_270[0x139] = '\0';
  local_270[0x13a] = '\0';
  local_270[0x13b] = '\0';
  local_270[0x13c] = '\0';
  local_270[0x13d] = '\0';
  local_270[0x13e] = '\0';
  local_270[0x13f] = '\0';
  local_270[0x130] = '\0';
  local_270[0x131] = '\0';
  local_270[0x132] = '\0';
  local_270[0x133] = '\0';
  local_270[0x134] = '\0';
  local_270[0x135] = '\0';
  local_270[0x136] = '\0';
  local_270[0x137] = '\0';
  local_270[0x128] = '\0';
  local_270[0x129] = '\0';
  local_270[0x12a] = '\0';
  local_270[299] = '\0';
  local_270[300] = '\0';
  local_270[0x12d] = '\0';
  local_270[0x12e] = '\0';
  local_270[0x12f] = '\0';
  local_270[0x120] = '\0';
  local_270[0x121] = '\0';
  local_270[0x122] = '\0';
  local_270[0x123] = '\0';
  local_270[0x124] = '\0';
  local_270[0x125] = '\0';
  local_270[0x126] = '\0';
  local_270[0x127] = '\0';
  local_270[0x118] = '\0';
  local_270[0x119] = '\0';
  local_270[0x11a] = '\0';
  local_270[0x11b] = '\0';
  local_270[0x11c] = '\0';
  local_270[0x11d] = '\0';
  local_270[0x11e] = '\0';
  local_270[0x11f] = '\0';
  local_270[0x110] = '\0';
  local_270[0x111] = '\0';
  local_270[0x112] = '\0';
  local_270[0x113] = '\0';
  local_270[0x114] = '\0';
  local_270[0x115] = '\0';
  local_270[0x116] = '\0';
  local_270[0x117] = '\0';
  local_270[0x108] = '\0';
  local_270[0x109] = '\0';
  local_270[0x10a] = '\0';
  local_270[0x10b] = '\0';
  local_270[0x10c] = '\0';
  local_270[0x10d] = '\0';
  local_270[0x10e] = '\0';
  local_270[0x10f] = '\0';
  local_270[0x100] = '\0';
  local_270[0x101] = '\0';
  local_270[0x102] = '\0';
  local_270[0x103] = '\0';
  local_270[0x104] = '\0';
  local_270[0x105] = '\0';
  local_270[0x106] = '\0';
  local_270[0x107] = '\0';
  local_270[0xf8] = '\0';
  local_270[0xf9] = '\0';
  local_270[0xfa] = '\0';
  local_270[0xfb] = '\0';
  local_270[0xfc] = '\0';
  local_270[0xfd] = '\0';
  local_270[0xfe] = '\0';
  local_270[0xff] = '\0';
  local_270[0xf0] = '\0';
  local_270[0xf1] = '\0';
  local_270[0xf2] = '\0';
  local_270[0xf3] = '\0';
  local_270[0xf4] = '\0';
  local_270[0xf5] = '\0';
  local_270[0xf6] = '\0';
  local_270[0xf7] = '\0';
  local_270[0xe8] = '\0';
  local_270[0xe9] = '\0';
  local_270[0xea] = '\0';
  local_270[0xeb] = '\0';
  local_270[0xec] = '\0';
  local_270[0xed] = '\0';
  local_270[0xee] = '\0';
  local_270[0xef] = '\0';
  local_270[0xe0] = '\0';
  local_270[0xe1] = '\0';
  local_270[0xe2] = '\0';
  local_270[0xe3] = '\0';
  local_270[0xe4] = '\0';
  local_270[0xe5] = '\0';
  local_270[0xe6] = '\0';
  local_270[0xe7] = '\0';
  local_270[0xd8] = '\0';
  local_270[0xd9] = '\0';
  local_270[0xda] = '\0';
  local_270[0xdb] = '\0';
  local_270[0xdc] = '\0';
  local_270[0xdd] = '\0';
  local_270[0xde] = '\0';
  local_270[0xdf] = '\0';
  local_270[0xd0] = '\0';
  local_270[0xd1] = '\0';
  local_270[0xd2] = '\0';
  local_270[0xd3] = '\0';
  local_270[0xd4] = '\0';
  local_270[0xd5] = '\0';
  local_270[0xd6] = '\0';
  local_270[0xd7] = '\0';
  local_270[200] = '\0';
  local_270[0xc9] = '\0';
  local_270[0xca] = '\0';
  local_270[0xcb] = '\0';
  local_270[0xcc] = '\0';
  local_270[0xcd] = '\0';
  local_270[0xce] = '\0';
  local_270[0xcf] = '\0';
  local_270[0xc0] = '\0';
  local_270[0xc1] = '\0';
  local_270[0xc2] = '\0';
  local_270[0xc3] = '\0';
  local_270[0xc4] = '\0';
  local_270[0xc5] = '\0';
  local_270[0xc6] = '\0';
  local_270[199] = '\0';
  local_270[0xb8] = '\0';
  local_270[0xb9] = '\0';
  local_270[0xba] = '\0';
  local_270[0xbb] = '\0';
  local_270[0xbc] = '\0';
  local_270[0xbd] = '\0';
  local_270[0xbe] = '\0';
  local_270[0xbf] = '\0';
  local_270[0xb0] = '\0';
  local_270[0xb1] = '\0';
  local_270[0xb2] = '\0';
  local_270[0xb3] = '\0';
  local_270[0xb4] = '\0';
  local_270[0xb5] = '\0';
  local_270[0xb6] = '\0';
  local_270[0xb7] = '\0';
  local_270[0xa8] = '\0';
  local_270[0xa9] = '\0';
  local_270[0xaa] = '\0';
  local_270[0xab] = '\0';
  local_270[0xac] = '\0';
  local_270[0xad] = '\0';
  local_270[0xae] = '\0';
  local_270[0xaf] = '\0';
  local_270[0xa0] = '\0';
  local_270[0xa1] = '\0';
  local_270[0xa2] = '\0';
  local_270[0xa3] = '\0';
  local_270[0xa4] = '\0';
  local_270[0xa5] = '\0';
  local_270[0xa6] = '\0';
  local_270[0xa7] = '\0';
  local_270[0x98] = '\0';
  local_270[0x99] = '\0';
  local_270[0x9a] = '\0';
  local_270[0x9b] = '\0';
  local_270[0x9c] = '\0';
  local_270[0x9d] = '\0';
  local_270[0x9e] = '\0';
  local_270[0x9f] = '\0';
  local_270[0x90] = '\0';
  local_270[0x91] = '\0';
  local_270[0x92] = '\0';
  local_270[0x93] = '\0';
  local_270[0x94] = '\0';
  local_270[0x95] = '\0';
  local_270[0x96] = '\0';
  local_270[0x97] = '\0';
  local_270[0x88] = '\0';
  local_270[0x89] = '\0';
  local_270[0x8a] = '\0';
  local_270[0x8b] = '\0';
  local_270[0x8c] = '\0';
  local_270[0x8d] = '\0';
  local_270[0x8e] = '\0';
  local_270[0x8f] = '\0';
  local_270[0x80] = '\0';
  local_270[0x81] = '\0';
  local_270[0x82] = '\0';
  local_270[0x83] = '\0';
  local_270[0x84] = '\0';
  local_270[0x85] = '\0';
  local_270[0x86] = '\0';
  local_270[0x87] = '\0';
  local_270[0x78] = '\0';
  local_270[0x79] = '\0';
  local_270[0x7a] = '\0';
  local_270[0x7b] = '\0';
  local_270[0x7c] = '\0';
  local_270[0x7d] = '\0';
  local_270[0x7e] = '\0';
  local_270[0x7f] = '\0';
  local_270[0x70] = '\0';
  local_270[0x71] = '\0';
  local_270[0x72] = '\0';
  local_270[0x73] = '\0';
  local_270[0x74] = '\0';
  local_270[0x75] = '\0';
  local_270[0x76] = '\0';
  local_270[0x77] = '\0';
  local_270[0x68] = '\0';
  local_270[0x69] = '\0';
  local_270[0x6a] = '\0';
  local_270[0x6b] = '\0';
  local_270[0x6c] = '\0';
  local_270[0x6d] = '\0';
  local_270[0x6e] = '\0';
  local_270[0x6f] = '\0';
  local_270[0x60] = '\0';
  local_270[0x61] = '\0';
  local_270[0x62] = '\0';
  local_270[99] = '\0';
  local_270[100] = '\0';
  local_270[0x65] = '\0';
  local_270[0x66] = '\0';
  local_270[0x67] = '\0';
  local_270[0x58] = '\0';
  local_270[0x59] = '\0';
  local_270[0x5a] = '\0';
  local_270[0x5b] = '\0';
  local_270[0x5c] = '\0';
  local_270[0x5d] = '\0';
  local_270[0x5e] = '\0';
  local_270[0x5f] = '\0';
  local_270[0x50] = '\0';
  local_270[0x51] = '\0';
  local_270[0x52] = '\0';
  local_270[0x53] = '\0';
  local_270[0x54] = '\0';
  local_270[0x55] = '\0';
  local_270[0x56] = '\0';
  local_270[0x57] = '\0';
  local_270[0x48] = '\0';
  local_270[0x49] = '\0';
  local_270[0x4a] = '\0';
  local_270[0x4b] = '\0';
  local_270[0x4c] = '\0';
  local_270[0x4d] = '\0';
  local_270[0x4e] = '\0';
  local_270[0x4f] = '\0';
  local_270[0x40] = '\0';
  local_270[0x41] = '\0';
  local_270[0x42] = '\0';
  local_270[0x43] = '\0';
  local_270[0x44] = '\0';
  local_270[0x45] = '\0';
  local_270[0x46] = '\0';
  local_270[0x47] = '\0';
  local_270[0x38] = '\0';
  local_270[0x39] = '\0';
  local_270[0x3a] = '\0';
  local_270[0x3b] = '\0';
  local_270[0x3c] = '\0';
  local_270[0x3d] = '\0';
  local_270[0x3e] = '\0';
  local_270[0x3f] = '\0';
  local_270[0x30] = '\0';
  local_270[0x31] = '\0';
  local_270[0x32] = '\0';
  local_270[0x33] = '\0';
  local_270[0x34] = '\0';
  local_270[0x35] = '\0';
  local_270[0x36] = '\0';
  local_270[0x37] = '\0';
  local_270[0x28] = '\0';
  local_270[0x29] = '\0';
  local_270[0x2a] = '\0';
  local_270[0x2b] = '\0';
  local_270[0x2c] = '\0';
  local_270[0x2d] = '\0';
  local_270[0x2e] = '\0';
  local_270[0x2f] = '\0';
  local_270[0x20] = '\0';
  local_270[0x21] = '\0';
  local_270[0x22] = '\0';
  local_270[0x23] = '\0';
  local_270[0x24] = '\0';
  local_270[0x25] = '\0';
  local_270[0x26] = '\0';
  local_270[0x27] = '\0';
  local_270[0x18] = '\0';
  local_270[0x19] = '\0';
  local_270[0x1a] = '\0';
  local_270[0x1b] = '\0';
  local_270[0x1c] = '\0';
  local_270[0x1d] = '\0';
  local_270[0x1e] = '\0';
  local_270[0x1f] = '\0';
  local_270[0x10] = '\0';
  local_270[0x11] = '\0';
  local_270[0x12] = '\0';
  local_270[0x13] = '\0';
  local_270[0x14] = '\0';
  local_270[0x15] = '\0';
  local_270[0x16] = '\0';
  local_270[0x17] = '\0';
  local_270[8] = '\0';
  local_270[9] = '\0';
  local_270[10] = '\0';
  local_270[0xb] = '\0';
  local_270[0xc] = '\0';
  local_270[0xd] = '\0';
  local_270[0xe] = '\0';
  local_270[0xf] = '\0';
  local_270[0] = '\0';
  local_270[1] = '\0';
  local_270[2] = '\0';
  local_270[3] = '\0';
  local_270[4] = '\0';
  local_270[5] = '\0';
  local_270[6] = '\0';
  local_270[7] = '\0';
  _snprintf(local_270,0x200,"%s/%s.mmap3");
  pcVar9 = local_270;
  FUN_100692600(pcVar9,0x25800,param_1 + 0x20);
  iVar5 = (int)param_1;
  if ((int)pcVar9 == 0) {
    puVar12 = operator_new__(0x25800);
    if (param_2[0x14] == 1) {
      pvVar6 = operator_new(0x50);
      puVar13 = *(undefined4 **)(param_2 + 0xe);
      if (-1 < *(char *)((long)param_2 + 0x4f)) {
        puVar13 = puVar1;
      }
      uVar3 = param_2[0x15];
      goto LAB_1006a003c;
    }
    pvVar6 = operator_new(0xb8);
    puVar13 = *(undefined4 **)(param_2 + 0xe);
    if (-1 < *(char *)((long)param_2 + 0x4f)) {
      puVar13 = puVar1;
    }
LAB_1006a0070:
    FUN_1006a8fb4(pvVar6,puVar12,0x25800,1,puVar13);
  }
  else {
    if (param_2[0x14] != 1) {
      pvVar6 = operator_new(0xb8);
      iVar4 = iVar5 + 0x88;
      FUN_10069edac();
      if (iVar4 == 1) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar12 = param_1 + 0x22;
        FUN_10069edc4(puVar12);
      }
      puVar13 = *(undefined4 **)(param_2 + 0xe);
      if (-1 < *(char *)((long)param_2 + 0x4f)) {
        puVar13 = puVar1;
      }
      goto LAB_1006a0070;
    }
    pvVar6 = operator_new(0x50);
    iVar4 = iVar5 + 0x88;
    FUN_10069edac();
    if (iVar4 == 1) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = param_1 + 0x22;
      FUN_10069edc4(puVar12);
    }
    puVar13 = *(undefined4 **)(param_2 + 0xe);
    if (-1 < *(char *)((long)param_2 + 0x4f)) {
      puVar13 = puVar1;
    }
    uVar3 = param_2[0x15];
LAB_1006a003c:
    thunk_FUN_1006a9190(pvVar6,puVar12,0x25800,1,puVar13,uVar3);
  }
  *(void **)(param_1 + 0x1e) = pvVar6;
  FUN_1006a88b8();
  FUN_100692ca0();
  if (pvVar6 == (void *)0x0) {
    if ((int)pcVar9 != 0) {
      iVar5 = iVar5 + 0x88;
      FUN_10069ed60();
      if (iVar5 != 0) {
        FUN_10069284c(param_1 + 0x20);
      }
    }
    goto LAB_1006a0440;
  }
  FUN_1006919e4(auStack_930,0x80);
  (**(code **)(**(long **)(param_1 + 0x1e) + 0x18))(*(long **)(param_1 + 0x1e),auStack_930);
  local_940 = param_1 + 0x52;
  local_938 = '\0';
  FUN_100696f64(&local_940);
  *(undefined1 *)((long)param_1 + 0x1b1) = 0;
  FUN_1006a0c40(param_1,*param_1);
  FUN_1006972a0(&local_940);
  uStack_278 = 0;
  local_280 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_338 = 0;
  local_340 = 0;
  uStack_348 = 0;
  local_350 = 0;
  uStack_358 = 0;
  local_360 = 0;
  uStack_368 = 0;
  local_370 = 0;
  uStack_378 = 0;
  local_380 = 0;
  uStack_388 = 0;
  local_390 = 0;
  uStack_398 = 0;
  local_3a0 = 0;
  uStack_3a8 = 0;
  local_3b0 = 0;
  uStack_3b8 = 0;
  local_3c0 = 0;
  uStack_3c8 = 0;
  local_3d0 = 0;
  uStack_3d8 = 0;
  local_3e0 = 0;
  uStack_3e8 = 0;
  local_3f0 = 0;
  uStack_3f8 = 0;
  local_400 = 0;
  uStack_408 = 0;
  local_410 = 0;
  uStack_418 = 0;
  local_420 = 0;
  uStack_428 = 0;
  local_430 = 0;
  uStack_438 = 0;
  local_440 = 0;
  uStack_448 = 0;
  local_450 = 0;
  uStack_458 = 0;
  local_460 = 0;
  uStack_468 = 0;
  local_470 = 0;
  FUN_1006a132c();
  puVar10 = auStack_930;
  FUN_100691fa4(puVar10,0);
  if (puVar10 != (undefined1 *)0x0) {
    FUN_1006a0890(param_1,"~~~~~ begin of mmap ~~~~~\n");
    puVar10 = auStack_930;
    FUN_100691fa4(puVar10,0);
    puVar11 = auStack_930;
    FUN_100691e98(puVar11);
    FUN_1006a0f38(param_1,puVar10,puVar11,0);
    FUN_1006a0890(param_1,"~~~~~ end of mmap ~~~~~%s\n");
  }
  FUN_100695198(&local_750,0);
  FUN_100695158();
  _bzero(&local_750,0x2d8);
  _snprintf((char *)&local_750,0x2d8,"^^^^^^^^^^Aug 19 2026^^^10:14:02^^^^^^^^^^%s");
  FUN_1006a05cc(param_1,0,&local_750);
  local_850[0xe8] = '\0';
  local_850[0xe9] = '\0';
  local_850[0xea] = '\0';
  local_850[0xeb] = '\0';
  local_850[0xec] = '\0';
  local_850[0xed] = '\0';
  local_850[0xee] = '\0';
  local_850[0xef] = '\0';
  local_850[0xe0] = '\0';
  local_850[0xe1] = '\0';
  local_850[0xe2] = '\0';
  local_850[0xe3] = '\0';
  local_850[0xe4] = '\0';
  local_850[0xe5] = '\0';
  local_850[0xe6] = '\0';
  local_850[0xe7] = '\0';
  local_850[0xf8] = '\0';
  local_850[0xf9] = '\0';
  local_850[0xfa] = '\0';
  local_850[0xfb] = '\0';
  local_850[0xfc] = '\0';
  local_850[0xfd] = '\0';
  local_850[0xfe] = '\0';
  local_850[0xff] = '\0';
  local_850[0xf0] = '\0';
  local_850[0xf1] = '\0';
  local_850[0xf2] = '\0';
  local_850[0xf3] = '\0';
  local_850[0xf4] = '\0';
  local_850[0xf5] = '\0';
  local_850[0xf6] = '\0';
  local_850[0xf7] = '\0';
  local_850[200] = '\0';
  local_850[0xc9] = '\0';
  local_850[0xca] = '\0';
  local_850[0xcb] = '\0';
  local_850[0xcc] = '\0';
  local_850[0xcd] = '\0';
  local_850[0xce] = '\0';
  local_850[0xcf] = '\0';
  local_850[0xc0] = '\0';
  local_850[0xc1] = '\0';
  local_850[0xc2] = '\0';
  local_850[0xc3] = '\0';
  local_850[0xc4] = '\0';
  local_850[0xc5] = '\0';
  local_850[0xc6] = '\0';
  local_850[199] = '\0';
  local_850[0xd8] = '\0';
  local_850[0xd9] = '\0';
  local_850[0xda] = '\0';
  local_850[0xdb] = '\0';
  local_850[0xdc] = '\0';
  local_850[0xdd] = '\0';
  local_850[0xde] = '\0';
  local_850[0xdf] = '\0';
  local_850[0xd0] = '\0';
  local_850[0xd1] = '\0';
  local_850[0xd2] = '\0';
  local_850[0xd3] = '\0';
  local_850[0xd4] = '\0';
  local_850[0xd5] = '\0';
  local_850[0xd6] = '\0';
  local_850[0xd7] = '\0';
  local_850[0xa8] = '\0';
  local_850[0xa9] = '\0';
  local_850[0xaa] = '\0';
  local_850[0xab] = '\0';
  local_850[0xac] = '\0';
  local_850[0xad] = '\0';
  local_850[0xae] = '\0';
  local_850[0xaf] = '\0';
  local_850[0xa0] = '\0';
  local_850[0xa1] = '\0';
  local_850[0xa2] = '\0';
  local_850[0xa3] = '\0';
  local_850[0xa4] = '\0';
  local_850[0xa5] = '\0';
  local_850[0xa6] = '\0';
  local_850[0xa7] = '\0';
  local_850[0xb8] = '\0';
  local_850[0xb9] = '\0';
  local_850[0xba] = '\0';
  local_850[0xbb] = '\0';
  local_850[0xbc] = '\0';
  local_850[0xbd] = '\0';
  local_850[0xbe] = '\0';
  local_850[0xbf] = '\0';
  local_850[0xb0] = '\0';
  local_850[0xb1] = '\0';
  local_850[0xb2] = '\0';
  local_850[0xb3] = '\0';
  local_850[0xb4] = '\0';
  local_850[0xb5] = '\0';
  local_850[0xb6] = '\0';
  local_850[0xb7] = '\0';
  local_850[0x88] = '\0';
  local_850[0x89] = '\0';
  local_850[0x8a] = '\0';
  local_850[0x8b] = '\0';
  local_850[0x8c] = '\0';
  local_850[0x8d] = '\0';
  local_850[0x8e] = '\0';
  local_850[0x8f] = '\0';
  local_850[0x80] = '\0';
  local_850[0x81] = '\0';
  local_850[0x82] = '\0';
  local_850[0x83] = '\0';
  local_850[0x84] = '\0';
  local_850[0x85] = '\0';
  local_850[0x86] = '\0';
  local_850[0x87] = '\0';
  local_850[0x98] = '\0';
  local_850[0x99] = '\0';
  local_850[0x9a] = '\0';
  local_850[0x9b] = '\0';
  local_850[0x9c] = '\0';
  local_850[0x9d] = '\0';
  local_850[0x9e] = '\0';
  local_850[0x9f] = '\0';
  local_850[0x90] = '\0';
  local_850[0x91] = '\0';
  local_850[0x92] = '\0';
  local_850[0x93] = '\0';
  local_850[0x94] = '\0';
  local_850[0x95] = '\0';
  local_850[0x96] = '\0';
  local_850[0x97] = '\0';
  local_850[0x68] = '\0';
  local_850[0x69] = '\0';
  local_850[0x6a] = '\0';
  local_850[0x6b] = '\0';
  local_850[0x6c] = '\0';
  local_850[0x6d] = '\0';
  local_850[0x6e] = '\0';
  local_850[0x6f] = '\0';
  local_850[0x60] = '\0';
  local_850[0x61] = '\0';
  local_850[0x62] = '\0';
  local_850[99] = '\0';
  local_850[100] = '\0';
  local_850[0x65] = '\0';
  local_850[0x66] = '\0';
  local_850[0x67] = '\0';
  local_850[0x78] = '\0';
  local_850[0x79] = '\0';
  local_850[0x7a] = '\0';
  local_850[0x7b] = '\0';
  local_850[0x7c] = '\0';
  local_850[0x7d] = '\0';
  local_850[0x7e] = '\0';
  local_850[0x7f] = '\0';
  local_850[0x70] = '\0';
  local_850[0x71] = '\0';
  local_850[0x72] = '\0';
  local_850[0x73] = '\0';
  local_850[0x74] = '\0';
  local_850[0x75] = '\0';
  local_850[0x76] = '\0';
  local_850[0x77] = '\0';
  local_850[0x48] = '\0';
  local_850[0x49] = '\0';
  local_850[0x4a] = '\0';
  local_850[0x4b] = '\0';
  local_850[0x4c] = '\0';
  local_850[0x4d] = '\0';
  local_850[0x4e] = '\0';
  local_850[0x4f] = '\0';
  local_850[0x40] = '\0';
  local_850[0x41] = '\0';
  local_850[0x42] = '\0';
  local_850[0x43] = '\0';
  local_850[0x44] = '\0';
  local_850[0x45] = '\0';
  local_850[0x46] = '\0';
  local_850[0x47] = '\0';
  local_850[0x58] = '\0';
  local_850[0x59] = '\0';
  local_850[0x5a] = '\0';
  local_850[0x5b] = '\0';
  local_850[0x5c] = '\0';
  local_850[0x5d] = '\0';
  local_850[0x5e] = '\0';
  local_850[0x5f] = '\0';
  local_850[0x50] = '\0';
  local_850[0x51] = '\0';
  local_850[0x52] = '\0';
  local_850[0x53] = '\0';
  local_850[0x54] = '\0';
  local_850[0x55] = '\0';
  local_850[0x56] = '\0';
  local_850[0x57] = '\0';
  local_850[0x28] = '\0';
  local_850[0x29] = '\0';
  local_850[0x2a] = '\0';
  local_850[0x2b] = '\0';
  local_850[0x2c] = '\0';
  local_850[0x2d] = '\0';
  local_850[0x2e] = '\0';
  local_850[0x2f] = '\0';
  local_850[0x20] = '\0';
  local_850[0x21] = '\0';
  local_850[0x22] = '\0';
  local_850[0x23] = '\0';
  local_850[0x24] = '\0';
  local_850[0x25] = '\0';
  local_850[0x26] = '\0';
  local_850[0x27] = '\0';
  local_850[0x38] = '\0';
  local_850[0x39] = '\0';
  local_850[0x3a] = '\0';
  local_850[0x3b] = '\0';
  local_850[0x3c] = '\0';
  local_850[0x3d] = '\0';
  local_850[0x3e] = '\0';
  local_850[0x3f] = '\0';
  local_850[0x30] = '\0';
  local_850[0x31] = '\0';
  local_850[0x32] = '\0';
  local_850[0x33] = '\0';
  local_850[0x34] = '\0';
  local_850[0x35] = '\0';
  local_850[0x36] = '\0';
  local_850[0x37] = '\0';
  local_850[8] = '\0';
  local_850[9] = '\0';
  local_850[10] = '\0';
  local_850[0xb] = '\0';
  local_850[0xc] = '\0';
  local_850[0xd] = '\0';
  local_850[0xe] = '\0';
  local_850[0xf] = '\0';
  local_850[0] = '\0';
  local_850[1] = '\0';
  local_850[2] = '\0';
  local_850[3] = '\0';
  local_850[4] = '\0';
  local_850[5] = '\0';
  local_850[6] = '\0';
  local_850[7] = '\0';
  local_850[0x18] = '\0';
  local_850[0x19] = '\0';
  local_850[0x1a] = '\0';
  local_850[0x1b] = '\0';
  local_850[0x1c] = '\0';
  local_850[0x1d] = '\0';
  local_850[0x1e] = '\0';
  local_850[0x1f] = '\0';
  local_850[0x10] = '\0';
  local_850[0x11] = '\0';
  local_850[0x12] = '\0';
  local_850[0x13] = '\0';
  local_850[0x14] = '\0';
  local_850[0x15] = '\0';
  local_850[0x16] = '\0';
  local_850[0x17] = '\0';
  _snprintf(local_850,0x100,"get mmap time: %llu");
  FUN_1006a05cc(param_1,0,local_850);
  FUN_1006a05cc(param_1,0,"MARS_URL: ");
  FUN_1006a05cc(param_1,0,"MARS_PATH: release/2024-t2.1");
  FUN_1006a05cc(param_1,0,"MARS_REVISION: 38eea3ee");
  FUN_1006a05cc(param_1,0,"MARS_BUILD_TIME: 2024-07-30 17:02:21");
  FUN_1006a05cc(param_1,0,"MARS_BUILD_JOB: ");
  _snprintf(local_850,0x100,"log appender mode:%d, use mmap:%d");
  FUN_1006a05cc(param_1,0,local_850);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_100384eb8(&local_970,*(undefined8 *)psVar2);
      goto LAB_1006a0354;
    }
  }
  else if (*(char *)((long)param_1 + 0x6f) != '\0') {
    uStack_968 = *(undefined8 *)(param_1 + 0x18);
    local_970 = *(void **)psVar2;
    local_960 = *(long *)(param_1 + 0x1a);
LAB_1006a0354:
    FUN_10069a8dc(local_958,&local_970,0);
    if (local_960 < 0) {
      operator_delete(local_970);
    }
    _snprintf(local_850,0x100,"cache dir space info, capacity:%ju free:%ju available:%ju");
    FUN_1006a05cc(param_1,0,local_850);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    FUN_100384eb8(&local_970,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
  }
  else {
    uStack_968 = *(undefined8 *)(this + 8);
    local_970 = *(void **)this;
    local_960 = *(long *)(this + 0x10);
  }
  FUN_10069a8dc(local_958,&local_970,0);
  if (local_960 < 0) {
    operator_delete(local_970);
  }
  _snprintf(local_850,0x100,"log dir space info, capacity:%ju free:%ju available:%ju");
  FUN_1006a05cc(param_1,0,local_850);
  if (local_938 == '\x01') {
    FUN_1006972a0(&local_940);
  }
  FUN_1006919f4(auStack_930);
LAB_1006a0440:
  if (local_858 == '\x01') {
    FUN_1006972a0(&local_860);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

