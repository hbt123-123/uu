// rea decompile_all
// name: FUN_1000859e8
// address: 0x1000859e8
// body: available
// range: 0x1000859e8-0x1000887af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000859e8(long param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,double *param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,long param_12,
                  long param_13,undefined8 *param_14,ulong param_15)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  char *pcVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ID IVar9;
  ID IVar10;
  undefined *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  double *pdVar15;
  double *pdVar16;
  double **ppdVar17;
  undefined *puVar18;
  void *pvVar19;
  undefined *puVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  long extraout_x8;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  long lVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ID extraout_x12_04;
  ulong uVar28;
  long *plVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 *puVar32;
  char *pcVar33;
  ulong uVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  long alStack_a80 [8];
  uint auStack_a40 [4];
  long local_a30 [3];
  long local_a18;
  char *local_a10;
  ID IStack_a08;
  ulong local_a00;
  char *local_9f8;
  code *local_9f0;
  ulong local_9e8;
  ulong local_9e0;
  long local_9d8;
  long local_9d0;
  undefined4 local_9c4;
  char *local_9c0;
  undefined *local_9b8;
  ID local_9b0;
  undefined *local_9a8;
  undefined8 local_9a0;
  code *local_998;
  undefined8 *local_990;
  code *local_988;
  undefined8 local_980;
  long local_978;
  code *local_970;
  long local_968;
  long local_960;
  long local_958;
  long local_950;
  ID local_948;
  char *local_940;
  char *local_938;
  char *local_930;
  undefined8 local_928;
  undefined8 local_920;
  double *local_918;
  long local_910;
  undefined8 local_908;
  ulong local_900;
  undefined8 uStack_8f8;
  long local_8f0;
  undefined1 auStack_8e8 [24];
  double *local_8d0;
  ID IStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  double local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  double *local_798;
  ID IStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  double *local_700;
  ID IStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  double local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  double *local_5c0;
  ID IStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  double *local_500;
  ID IStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 local_440;
  double *local_430;
  ID IStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 local_370;
  double *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  ulong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  double adStack_258 [9];
  double *local_210;
  ID IStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  ID IStack_148;
  code *local_140;
  undefined *local_138;
  code *local_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  
  local_900 = CONCAT44(local_900._4_4_,param_4);
  pcVar4 = (char *)0x0;
  local_928 = param_8;
  local_920 = param_6;
  local_918 = param_7;
  local_908 = param_5;
  local_8f0 = param_3;
  __s8Dispatch0A4TimeVMa();
  local_940 = *(char **)(pcVar4 + -8);
  local_930 = pcVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_940 + 0x40));
  IVar9 = (long)local_a30 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_948 = IVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar4 = (char *)(IVar9 - extraout_x12);
  lVar5 = 0;
  local_938 = pcVar4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_958 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar26 = (long)pcVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_950 = lVar26;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar26 = lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pcVar6 = (code *)0x0;
  local_960 = lVar26;
  __s10Foundation4UUIDVMa();
  lVar37 = *(long *)(pcVar6 + -8);
  lVar35 = *(long *)(lVar37 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar26 = lVar26 - (lVar35 + 0xfU & 0xfffffffffffffff0);
  local_910 = lVar26;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar26 = lVar26 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar31 = (lVar26 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar32 = (undefined8 *)(lVar31 - extraout_x12_03);
  _swift_beginAccess(param_1 + 0x10,auStack_270,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  if (param_1 == 0) {
    FUN_100401b14();
    FUN_1003fb48c(FUN_1000887b0,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                  0x800000010087e8d0,0xc6,0);
    return;
  }
  local_978 = lVar26 - extraout_x12_01;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                     auStack_288,0,0);
  local_970 = *(code **)(lVar37 + 0x10);
  pcVar22 = pcVar6;
  (*local_970)(puVar32,param_1 + lVar5);
  puVar7 = puVar32;
  local_980 = param_2;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar32,param_2);
  local_988 = *(code **)(lVar37 + 8);
  puVar8 = puVar32;
  pcVar21 = pcVar6;
  local_990 = puVar32;
  (*local_988)(puVar32,pcVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000887dc,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                  0x800000010087e8d0,0xca,0);
  }
  else {
    local_968 = param_1;
    if (DAT_100a73b60 != -1) {
      puVar8 = &DAT_100a73b60;
      pcVar21 = FUN_1000efc4c;
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar5 = DAT_100b360a8;
    lVar27 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if (((((lVar27 != 0) &&
          (lVar27 = *(long *)(lVar27 + _TtC14UURemoteServer18StreamerDispatcher::
                                       currentConnectSession), lVar27 != 0)) &&
         (lVar27 == local_8f0)) &&
        (((*(byte *)(local_968 + 0x14) & 1) == 0 && (*(int *)(local_968 + 0x10) == (int)local_900)))
        ) && (FUN_1000255e4(), pcVar22 != (code *)0x0)) {
      puVar7 = puVar8;
      local_998 = pcVar6;
      FUN_10044e04c();
      pcVar6 = local_998;
      local_9a0 = CONCAT44(local_9a0._4_4_,(int)puVar7);
      FUN_10008f148(puVar8,pcVar21,pcVar22);
      if ((int)local_9a0 == (int)local_900) {
        local_a30[1] = lVar5;
        local_a00 = param_15;
        local_9d0 = param_13;
        local_9d8 = param_12;
        local_9c4 = param_10;
        local_9a0 = param_9;
        IVar9 = local_900 & 0xffffffff;
        FUN_10001a914();
        IVar10 = _objc_msgSend(IVar9,"frameQuality");
        pdVar15 = local_918;
        uVar30 = local_980;
        if ((IVar10 == 0) &&
           (plVar29 = (long *)(local_968 +
                              _TtC14UURemoteServer19SecondScreenManager::reportedAutoFrameQuality),
           (*(byte *)((long)plVar29 + 9) & 1) == 0)) {
          if ((*(byte *)(plVar29 + 1) & 1) == 0) {
            uVar23 = 0;
          }
          else {
            uVar23 = *(undefined8 *)(&DAT_10080b148 + *plVar29 * 8);
          }
          _objc_msgSend(IVar9,"setAutoStartupQuality:",uVar23);
        }
        puVar11 = &DAT_100999b60;
        _swift_allocObject(&DAT_100999b60,0x18,7);
        _swift_weakInit(puVar11 + 0x10,local_968);
        pcVar21 = local_970;
        (*local_970)(lVar31,uVar30,pcVar6);
        (*pcVar21)(local_978,lVar31,pcVar6);
        local_9e8 = (ulong)*(byte *)(lVar37 + 0x50);
        uVar28 = local_9e8 + 0x18 & (local_9e8 ^ 0xffffffffffffffff);
        local_a30[0] = uVar28 + lVar35;
        local_9b0 = local_a30[0] + 7U & 0xfffffffffffffff8;
        local_a10 = (char *)(local_9b0 + 8);
        local_9f8 = (char *)(local_9b0 + 0x50);
        local_9b8 = (undefined *)(local_9b0 + 0x60);
        lVar5 = local_9b0 + 0x68;
        uVar34 = local_9b0 + 0x78;
        pcVar4 = "";
        IStack_a08 = IVar9;
        local_9e0 = uVar28;
        _swift_allocObject(&DAT_100999bd8,uVar34 | 4,local_9e8 | 7);
        pcVar6 = local_998;
        *(undefined **)(pcVar4 + 0x10) = puVar11;
        local_9f0 = *(code **)(lVar37 + 0x20);
        local_9a8 = puVar11;
        (*local_9f0)(pcVar4 + uVar28,lVar31,local_998);
        IVar9 = local_9b0;
        uVar2 = local_9c4;
        *(long *)(pcVar4 + local_9b0) = local_8f0;
        pdVar16 = (double *)(pcVar4 + (long)local_a10);
        *(char *)(pdVar16 + 8) = *(char *)(pdVar15 + 8);
        dVar40 = pdVar15[4];
        dVar39 = pdVar15[7];
        dVar38 = pdVar15[6];
        pdVar16[5] = pdVar15[5];
        pdVar16[4] = dVar40;
        pdVar16[7] = dVar39;
        pdVar16[6] = dVar38;
        dVar38 = *pdVar15;
        dVar40 = pdVar15[3];
        dVar39 = pdVar15[2];
        pdVar16[1] = pdVar15[1];
        *pdVar16 = dVar38;
        pdVar16[3] = dVar40;
        pdVar16[2] = dVar39;
        *(undefined8 *)(pcVar4 + (long)local_9f8) = local_928;
        *(undefined8 *)(pcVar4 + (long)local_9f8 + 8) = local_9a0;
        *(undefined4 *)(pcVar4 + (long)local_9b8) = local_9c4;
        *(undefined8 *)(pcVar4 + lVar5) = local_908;
        *(undefined8 *)(pcVar4 + lVar5 + 8) = local_920;
        *(int *)(pcVar4 + uVar34) = (int)local_900;
        puVar11 = &DAT_100999b60;
        _swift_allocObject(&DAT_100999b60,0x18,7);
        _swift_weakInit(puVar11 + 0x10,local_968);
        pcVar21 = local_970;
        (*local_970)(lVar26,local_980,pcVar6);
        (*pcVar21)(local_910,lVar26,pcVar6);
        uVar28 = IVar9 + 0xf & 0xfffffffffffffff8;
        local_a30[2] = uVar28 + 0x10;
        local_a10 = (char *)(uVar28 + 0x58);
        local_a18 = uVar28 + 0x70;
        pcVar12 = "";
        _swift_allocObject(&DAT_100999c00,uVar28 + 0x80,local_9e8 | 7);
        *(undefined **)(pcVar12 + 0x10) = puVar11;
        local_9b8 = puVar11;
        (*local_9f0)(pcVar12 + local_9e0,lVar26,local_998);
        lVar26 = local_8f0;
        uVar30 = local_9a0;
        lVar5 = local_9d0;
        IVar9 = IStack_a08;
        *(long *)(pcVar12 + local_9b0) = local_8f0;
        *(code **)(pcVar12 + uVar28) = FUN_100091200;
        *(char **)(pcVar12 + uVar28 + 8) = pcVar4;
        pdVar16 = (double *)(pcVar12 + local_a30[2]);
        *(char *)(pdVar16 + 8) = *(char *)(pdVar15 + 8);
        dVar40 = pdVar15[4];
        dVar39 = pdVar15[7];
        dVar38 = pdVar15[6];
        pdVar16[5] = pdVar15[5];
        pdVar16[4] = dVar40;
        pdVar16[7] = dVar39;
        pdVar16[6] = dVar38;
        dVar38 = *pdVar15;
        dVar40 = pdVar15[3];
        dVar39 = pdVar15[2];
        pdVar16[1] = pdVar15[1];
        *pdVar16 = dVar38;
        pdVar16[3] = dVar40;
        pdVar16[2] = dVar39;
        *(ID *)(pcVar12 + (long)local_a10) = IStack_a08;
        *(long *)(pcVar12 + uVar28 + 0x60) = local_9d8;
        *(long *)((long)(pcVar12 + uVar28 + 0x60) + 8) = local_9d0;
        *(undefined4 *)(pcVar12 + local_a18) = uVar2;
        *(ulong *)(pcVar12 + uVar28 + 0x78) = local_a00;
        local_9f8 = pcVar12;
        local_9c0 = pcVar4;
        if (*(byte *)(pdVar15 + 8) == 2) {
          pcVar13 = (char *)0x0;
          FUN_100401b14();
          _swift_bridgeObjectRetain_n(local_9a0,2);
          _swift_unknownObjectRetain_n(local_908,2);
          puVar18 = local_9a8;
          local_8f0 = lVar26;
          _swift_retain(local_9a8);
          puVar11 = local_9b8;
          _swift_retain(local_9b8);
          _swift_bridgeObjectRetain(lVar5);
          pcVar12 = local_9c0;
          _swift_retain(local_9c0);
          FUN_1003fb45c(FUN_100089138,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                        0x800000010087e8d0,0x11f,0);
          _swift_beginAccess(puVar11 + 0x10,adStack_258,0,0);
          pcVar4 = puVar11 + 0x10;
          _swift_weakLoadStrong();
          lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
          if (pcVar4 == (char *)0x0) {
            FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,0x800000010087e740,
                          0xd000000000000049,0x800000010087e8d0,0x101,0);
            _swift_release(puVar18);
            _swift_release(pcVar12);
            _swift_release(local_9f8);
            lVar5 = local_978;
            uVar30 = local_9a0;
            pcVar6 = local_988;
            uVar23 = local_908;
            puVar11 = local_9b8;
          }
          else {
            local_938 = "reportedAutoFrameQuality";
            local_948 = IVar9;
            local_930 = pcVar13;
            _swift_beginAccess(pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                        secondScreenGeneration,auStack_2a0,0,0);
            puVar8 = local_990;
            pcVar6 = local_998;
            local_940 = pcVar4;
            (*local_970)(local_990,pcVar4 + lVar5,local_998);
            puVar7 = puVar8;
            __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar8,local_910);
            (*local_988)(puVar8,pcVar6);
            pcVar4 = local_938;
            if (((((ulong)puVar7 & 1) == 0) ||
                (lVar5 = *(long *)(*(long *)(local_a30[1] + 0x28) +
                                  _TtC14UURemoteServer15StreamerManager::dispatcher), lVar5 == 0))
               || ((lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::
                                              currentConnectSession), lVar5 == 0 ||
                   (lVar5 != local_8f0)))) {
              FUN_1003fb48c(FUN_10008910c,0,0xd00000000000009f,(ulong)local_938 | 0x8000000000000000
                            ,0xd000000000000049,0x800000010087e8d0,0x106,0);
              puVar11 = local_9a8;
              _swift_beginAccess(local_9a8 + 0x10,&local_150,0,0);
              pcVar13 = puVar11 + 0x10;
              _swift_weakLoadStrong();
              lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
              if (pcVar13 == (char *)0x0) {
                FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,
                              (ulong)pcVar4 | 0x8000000000000000,0xd000000000000049,
                              0x800000010087e8d0,0xdc,0);
                pcVar33 = local_9f8;
                pcVar13 = local_940;
                pcVar4 = pcVar12;
                puVar11 = local_9b8;
              }
              else {
                _swift_beginAccess(pcVar13 + _TtC14UURemoteServer19SecondScreenManager::
                                             secondScreenGeneration,&local_430,0,0);
                puVar8 = local_990;
                pcVar6 = local_998;
                (*local_970)(local_990,pcVar13 + lVar5,local_998);
                puVar7 = puVar8;
                __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar8,local_978);
                (*local_988)(puVar8,pcVar6);
                pcVar4 = local_9f8;
                if (((ulong)puVar7 & 1) == 0) {
                  FUN_1003fb48c(FUN_100088d6c,0,0xd00000000000009f,
                                (ulong)local_938 | 0x8000000000000000,0xd000000000000049,
                                0x800000010087e8d0,0xe0,0);
                  _swift_release(pcVar12);
                  pcVar33 = local_940;
                  pcVar4 = local_9f8;
                  puVar11 = local_9b8;
                }
                else {
                  pcVar33 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID;
                  pcVar33[0] = '\0';
                  pcVar33[1] = '\0';
                  pcVar33[2] = '\0';
                  pcVar33[3] = '\0';
                  pcVar33[4] = '\x01';
                  lVar5 = *(long *)(*(long *)(local_a30[1] + 0x28) +
                                   _TtC14UURemoteServer15StreamerManager::dispatcher);
                  if (((lVar5 == 0) ||
                      (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::
                                                 currentConnectSession), lVar5 == 0)) ||
                     (lVar5 != local_8f0)) {
                    FUN_1003fb48c(FUN_100088d98,0,0xd00000000000009f,
                                  (ulong)local_938 | 0x8000000000000000,0xd000000000000049,
                                  0x800000010087e8d0,0xe5,0);
                    puVar11 = local_9b8;
                    pcVar33 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::
                                        settingsCompletion;
                    pcVar6 = *(code **)pcVar33;
                    uVar30 = *(undefined8 *)(pcVar33 + 8);
                    pcVar33[0] = '\0';
                    pcVar33[1] = '\0';
                    pcVar33[2] = '\0';
                    pcVar33[3] = '\0';
                    pcVar33[4] = '\0';
                    pcVar33[5] = '\0';
                    pcVar33[6] = '\0';
                    pcVar33[7] = '\0';
                    pcVar33[8] = '\0';
                    pcVar33[9] = '\0';
                    pcVar33[10] = '\0';
                    pcVar33[0xb] = '\0';
                    pcVar33[0xc] = '\0';
                    pcVar33[0xd] = '\0';
                    pcVar33[0xe] = '\0';
                    pcVar33[0xf] = '\0';
                    if (pcVar6 == (code *)0x0) {
                      _swift_release(pcVar12);
                      pcVar33 = local_940;
                    }
                    else {
                      _swift_retain(uVar30);
                      (*pcVar6)(0xffffffff);
                      _swift_release(pcVar13);
                      FUN_10007ed2c(pcVar6,uVar30);
                      FUN_10007ed2c(pcVar6,uVar30);
                      pcVar33 = pcVar4;
                      pcVar13 = local_940;
                      pcVar4 = pcVar12;
                    }
                  }
                  else {
                    (*(code *)PTR____chkstk_darwin_100995498)();
                    uVar30 = local_9a0;
                    puVar32[-8] = local_928;
                    puVar32[-7] = uVar30;
                    uVar2 = local_9c4;
                    *(undefined4 *)(puVar32 + -6) = local_9c4;
                    uVar30 = local_908;
                    pdVar15 = local_918;
                    puVar32[-5] = local_918;
                    puVar32[-4] = uVar30;
                    puVar32[-3] = local_920;
                    *(int *)(puVar32 + -2) = (int)local_900;
                    *(undefined4 *)((long)puVar32 + -0xc) = 0xffffffff;
                    FUN_1003fb45c(thunk_FUN_1000916ac,puVar32 + -10,0xd00000000000009f,
                                  (ulong)local_938 | 0x8000000000000000,0xd000000000000049,
                                  0x800000010087e8d0,0xed,0);
                    puVar11 = local_9b8;
                    lVar5 = _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth;
                    if (SCARRY8(*(long *)(pcVar13 +
                                         _TtC14UURemoteServer19SecondScreenManager::
                                         settingsSyncCoalescingDepth),1)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x10008879c);
                      (*pcVar6)();
                    }
                    *(long *)(pcVar13 +
                             _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth)
                         = *(long *)(pcVar13 +
                                    _TtC14UURemoteServer19SecondScreenManager::
                                    settingsSyncCoalescingDepth) + 1;
                    FUN_1000837f8(uVar2,1);
                    if (0 < *(int *)(pdVar15 + 2)) {
                      FUN_1000162bc(uVar2,0);
                    }
                    lVar26 = *(long *)(pcVar13 + lVar5) + -1;
                    if (SBORROW8(*(long *)(pcVar13 + lVar5),1)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000887a0);
                      (*pcVar6)();
                    }
                    *(long *)(pcVar13 + lVar5) = lVar26;
                    if (lVar26 == 0) {
                      pcVar4 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::
                                         coalescedSyncRequest;
                      bVar3 = pcVar4[4];
                      if (bVar3 != 2) {
                        pcVar4[0] = '\0';
                        pcVar4[1] = '\0';
                        pcVar4[2] = '\0';
                        pcVar4[3] = '\0';
                        pcVar4[4] = '\x02';
                        FUN_10008a544((ulong)CONCAT14(bVar3,*(undefined4 *)pcVar4),bVar3 & 1);
                      }
                    }
                    (*(code *)PTR____chkstk_darwin_100995498)();
                    *(undefined4 *)(puVar32 + -2) = 0xffffffff;
                    FUN_1003fb48c(FUN_100091434,puVar32 + -4,0xd00000000000009f,
                                  (ulong)local_938 | 0x8000000000000000,0xd000000000000049,
                                  0x800000010087e8d0,0xfb,0);
                    pcVar4 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion
                    ;
                    pcVar6 = *(code **)pcVar4;
                    uVar30 = *(undefined8 *)(pcVar4 + 8);
                    pcVar4[0] = '\0';
                    pcVar4[1] = '\0';
                    pcVar4[2] = '\0';
                    pcVar4[3] = '\0';
                    pcVar4[4] = '\0';
                    pcVar4[5] = '\0';
                    pcVar4[6] = '\0';
                    pcVar4[7] = '\0';
                    pcVar4[8] = '\0';
                    pcVar4[9] = '\0';
                    pcVar4[10] = '\0';
                    pcVar4[0xb] = '\0';
                    pcVar4[0xc] = '\0';
                    pcVar4[0xd] = '\0';
                    pcVar4[0xe] = '\0';
                    pcVar4[0xf] = '\0';
                    if (pcVar6 == (code *)0x0) {
                      _swift_release(pcVar12);
                      pcVar33 = local_940;
                      pcVar4 = local_9f8;
                    }
                    else {
                      _swift_retain(uVar30);
                      (*pcVar6)(0xffffffff);
                      _swift_release(pcVar13);
                      FUN_10007ed2c(pcVar6,uVar30);
                      FUN_10007ed2c(pcVar6,uVar30);
                      pcVar33 = local_9f8;
                      pcVar13 = local_940;
                      pcVar4 = pcVar12;
                    }
                  }
                }
              }
              lVar5 = local_978;
              pcVar6 = local_988;
              uVar30 = local_9a0;
              puVar18 = local_9a8;
              _swift_release(pcVar4);
              _swift_release(pcVar33);
              _swift_release(pcVar13);
              _swift_release(puVar18);
              uVar23 = local_908;
            }
            else {
              pcVar4 = local_940 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID;
              pcVar4[0] = '\0';
              pcVar4[1] = '\0';
              pcVar4[2] = '\0';
              pcVar4[3] = '\0';
              pcVar4[4] = '\x01';
              FUN_1000c7b64();
              uVar30 = puVar8[3];
              uVar23 = puVar8[4];
              uVar36 = puVar8[5];
              FUN_10008f174(uVar30,uVar23,uVar36);
              _swift_release(puVar8);
              lVar5 = local_9d8;
              FUN_1001a11bc(local_9d8,local_9d0);
              plVar29 = *(long **)(lVar5 + 0x30);
              pcVar6 = *(code **)(*plVar29 + 0xb0);
              _swift_retain(plVar29);
              (*pcVar6)(&local_150);
              _swift_release(plVar29);
              _swift_release(lVar5);
              pdVar16 = local_918;
              IVar9 = local_948;
              uVar24 = uVar30;
              FUN_10008fc38();
              FUN_10009143c(uVar30,uVar23,uVar36);
              FUN_100091474(&local_830);
              uStack_858 = uStack_7b8;
              local_860 = uStack_7c0;
              uStack_848 = uStack_7a8;
              uStack_850 = local_7b0;
              local_840 = local_7a0;
              uStack_8a8 = uStack_808;
              local_8b0 = local_810;
              uStack_898 = uStack_7f8;
              uStack_8a0 = uStack_800;
              uStack_888 = uStack_7e8;
              local_890 = local_7f0;
              uStack_878 = uStack_7d8;
              local_880 = uStack_7e0;
              uStack_868 = uStack_7c8;
              local_870 = local_7d0;
              IStack_8c8 = uStack_828;
              local_8d0 = (double *)local_830;
              uStack_8b8 = uStack_818;
              uStack_8c0 = uStack_820;
              local_798 = pdVar16;
              IStack_790 = IVar9;
              local_788 = uVar24;
              FUN_100091498(&local_798);
              uStack_698 = uStack_730;
              local_6a0 = local_738;
              uStack_688 = uStack_720;
              uStack_690 = local_728;
              uStack_678 = uStack_710;
              local_680 = local_718;
              local_670 = local_708;
              uStack_6d8 = uStack_770;
              local_6e0 = local_778;
              uStack_6c8 = uStack_760;
              uStack_6d0 = local_768;
              uStack_6b8 = uStack_750;
              local_6c0 = local_758;
              uStack_6a8 = uStack_740;
              uStack_6b0 = local_748;
              IStack_6f8 = IStack_790;
              local_700 = local_798;
              uStack_6e8 = uStack_780;
              uStack_6f0 = local_788;
              FUN_100008290(&local_700);
              uStack_5f8 = uStack_868;
              local_600 = local_870;
              uStack_5e8 = uStack_858;
              uStack_5f0 = local_860;
              uStack_5d8 = uStack_848;
              local_5e0 = uStack_850;
              local_5d0 = local_840;
              uStack_638 = uStack_8a8;
              local_640 = local_8b0;
              uStack_628 = uStack_898;
              uStack_630 = uStack_8a0;
              uStack_618 = uStack_888;
              local_620 = local_890;
              uStack_608 = uStack_878;
              uStack_610 = local_880;
              uStack_658 = IStack_8c8;
              local_660 = (double)local_8d0;
              uStack_648 = uStack_8b8;
              uStack_650 = uStack_8c0;
              FUN_100008184(pdVar16,IVar9);
              _swift_retain(uVar24);
              puVar11 = &DAT_100a75b90;
              puVar18 = &DAT_100809c10;
              pdVar15 = &local_660;
              FUN_100040bb4();
              uStack_858 = uStack_688;
              local_860 = uStack_690;
              uStack_848 = uStack_678;
              uStack_850 = local_680;
              local_840 = local_670;
              uStack_8a8 = uStack_6d8;
              local_8b0 = local_6e0;
              uStack_898 = uStack_6c8;
              uStack_8a0 = uStack_6d0;
              uStack_888 = uStack_6b8;
              local_890 = local_6c0;
              uStack_878 = uStack_6a8;
              local_880 = uStack_6b0;
              uStack_868 = uStack_698;
              local_870 = local_6a0;
              IStack_8c8 = IStack_6f8;
              local_8d0 = local_700;
              uStack_8b8 = uStack_6e8;
              uStack_8c0 = uStack_6f0;
              FUN_10047466c();
              uStack_558 = uStack_868;
              local_560 = local_870;
              uStack_548 = uStack_858;
              uStack_550 = local_860;
              uStack_538 = uStack_848;
              local_540 = uStack_850;
              uStack_598 = uStack_8a8;
              local_5a0 = local_8b0;
              uStack_588 = uStack_898;
              uStack_590 = uStack_8a0;
              uStack_578 = uStack_888;
              local_580 = local_890;
              uStack_568 = uStack_878;
              uStack_570 = local_880;
              IStack_5b8 = IStack_8c8;
              local_5c0 = local_8d0;
              uStack_5a8 = uStack_8b8;
              uStack_5b0 = uStack_8c0;
              uStack_8f8 = 0xc000000000000000;
              local_900 = 0;
              uStack_520 = 0xc000000000000000;
              local_528 = 0;
              local_530 = local_840;
              local_518 = 0;
              local_510 = 0;
              local_508 = 0xf000000000000000;
              uStack_4b8 = uStack_888;
              local_4c0 = local_890;
              uStack_4a8 = uStack_878;
              uStack_4b0 = local_880;
              uStack_498 = uStack_868;
              local_4a0 = local_870;
              uStack_488 = uStack_858;
              uStack_490 = local_860;
              IStack_4f8 = IStack_8c8;
              local_500 = local_8d0;
              uStack_4e8 = uStack_8b8;
              uStack_4f0 = uStack_8c0;
              uStack_4d8 = uStack_8a8;
              local_4e0 = local_8b0;
              uStack_4c8 = uStack_898;
              uStack_4d0 = uStack_8a0;
              uStack_478 = uStack_848;
              local_480 = uStack_850;
              uStack_468 = 0;
              uStack_470 = local_840;
              uStack_458 = 0;
              local_460 = 0xc000000000000000;
              uStack_448 = 0xf000000000000000;
              uStack_450 = 0;
              local_360 = pdVar15;
              puStack_358 = puVar11;
              local_350 = puVar18;
              FUN_1000914b0(&local_500);
              uStack_388 = uStack_458;
              local_390 = local_460;
              uStack_378 = uStack_448;
              uStack_380 = uStack_450;
              local_370 = local_440;
              uStack_3c8 = uStack_498;
              local_3d0 = local_4a0;
              uStack_3b8 = uStack_488;
              uStack_3c0 = uStack_490;
              uStack_3a8 = uStack_478;
              local_3b0 = local_480;
              uStack_398 = uStack_468;
              uStack_3a0 = uStack_470;
              uStack_408 = uStack_4d8;
              local_410 = local_4e0;
              uStack_3f8 = uStack_4c8;
              uStack_400 = uStack_4d0;
              uStack_3e8 = uStack_4b8;
              local_3f0 = local_4c0;
              uStack_3d8 = uStack_4a8;
              uStack_3e0 = uStack_4b0;
              IStack_428 = IStack_4f8;
              local_430 = local_500;
              uStack_418 = uStack_4e8;
              uStack_420 = uStack_4f0;
              FUN_100008290(&local_430);
              uStack_a8 = uStack_388;
              local_b0 = local_390;
              uStack_98 = uStack_378;
              uStack_a0 = uStack_380;
              local_90 = local_370;
              uStack_e8 = uStack_3c8;
              local_f0 = local_3d0;
              uStack_d8 = uStack_3b8;
              uStack_e0 = uStack_3c0;
              uStack_c8 = uStack_3a8;
              local_d0 = local_3b0;
              uStack_b8 = uStack_398;
              uStack_c0 = uStack_3a0;
              puStack_128 = (undefined *)uStack_408;
              local_130 = (code *)local_410;
              uStack_118 = uStack_3f8;
              uStack_120 = uStack_400;
              uStack_108 = uStack_3e8;
              local_110 = local_3f0;
              uStack_f8 = uStack_3d8;
              uStack_100 = uStack_3e0;
              IStack_148 = IStack_428;
              local_150 = local_430;
              local_138 = (undefined *)uStack_418;
              local_140 = (code *)uStack_420;
              FUN_1000408d0(&local_5c0,&local_210);
              ppdVar17 = &local_150;
              FUN_100467dcc(ppdVar17);
              FUN_1000c7f78();
              uStack_1a8 = uStack_868;
              local_1b0 = local_870;
              uStack_198 = uStack_858;
              uStack_1a0 = local_860;
              uStack_188 = uStack_848;
              local_190 = uStack_850;
              uStack_1e8 = uStack_8a8;
              local_1f0 = local_8b0;
              uStack_1d8 = uStack_898;
              uStack_1e0 = uStack_8a0;
              uStack_1c8 = uStack_888;
              local_1d0 = local_890;
              uStack_1b8 = uStack_878;
              uStack_1c0 = local_880;
              IStack_208 = IStack_8c8;
              local_210 = local_8d0;
              uStack_1f8 = uStack_8b8;
              uStack_200 = uStack_8c0;
              uStack_170 = uStack_8f8;
              local_178 = local_900;
              local_180 = local_840;
              local_168 = 0;
              local_160 = 0;
              local_158 = 0xf000000000000000;
              puVar11 = &DAT_100999c28;
              _swift_allocObject(&DAT_100999c28,0x24,7);
              *(code **)(puVar11 + 0x10) = FUN_100091200;
              *(char **)(puVar11 + 0x18) = local_9c0;
              *(undefined4 *)(puVar11 + 0x20) = 0;
              _swift_retain();
              FUN_1002009d0(local_9c4,&local_210,pdVar16,IVar9,uVar24,thunk_FUN_1000916e0,puVar11);
              FUN_100006cdc(pdVar16,IVar9);
              _swift_release(local_940);
              _swift_release(ppdVar17);
              _swift_release(puVar11);
              _swift_release(uVar24);
              puVar11 = local_350;
              FUN_100006cdc(local_360,puStack_358);
              _swift_release(puVar11);
              uVar23 = local_908;
              puVar11 = local_9b8;
              uStack_2f8 = uStack_868;
              local_300 = local_870;
              uStack_2e8 = uStack_858;
              uStack_2f0 = local_860;
              uStack_2d8 = uStack_848;
              local_2e0 = uStack_850;
              uStack_338 = uStack_8a8;
              local_340 = local_8b0;
              uStack_328 = uStack_898;
              uStack_330 = uStack_8a0;
              uStack_318 = uStack_888;
              local_320 = local_890;
              uStack_308 = uStack_878;
              uStack_310 = local_880;
              puStack_358 = (undefined *)IStack_8c8;
              local_360 = local_8d0;
              uStack_348 = uStack_8b8;
              local_350 = (undefined *)uStack_8c0;
              uStack_2c0 = uStack_8f8;
              local_2c8 = local_900;
              local_2d0 = local_840;
              local_2b8 = 0;
              local_2b0 = 0;
              local_2a8 = 0xf000000000000000;
              FUN_1000914e4(&local_360);
              _swift_release(local_9a8);
              _swift_release(local_9c0);
              _swift_release(local_9f8);
              lVar5 = local_978;
              uVar30 = local_9a0;
              pcVar6 = local_988;
            }
          }
          pcVar21 = local_998;
          (*pcVar6)(lVar5,local_998);
          _swift_release(local_968);
          _swift_release(puVar11);
          _swift_unknownObjectRelease(uVar23);
          _swift_bridgeObjectRelease(uVar30);
        }
        else {
          uVar25 = 0x5a;
          if ((*(byte *)(pdVar15 + 8) & 1) == 0) {
            uVar25 = 0;
          }
          uVar2 = *(undefined4 *)(param_14 + 1);
          _swift_bridgeObjectRetain_n(local_9a0,2);
          _swift_unknownObjectRetain_n(local_908,2);
          local_8f0 = lVar26;
          _swift_retain(local_9a8);
          puVar11 = local_9b8;
          _swift_retain(local_9b8);
          _swift_bridgeObjectRetain(lVar5);
          local_9b0 = IVar9;
          _swift_retain(local_9c0);
          local_a00 = CONCAT44(local_a00._4_4_,uVar2);
          _CGDisplayRotation(uVar2);
          FUN_100401b14(0);
          if (dVar38 == (double)uVar25) {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(uint *)(puVar32 + -2) = uVar25;
            FUN_1003fb45c(FUN_100091530,puVar32 + -4,0xd00000000000009f,0x800000010087e740,
                          0xd000000000000049,0x800000010087e8d0,0x125,0);
            _swift_beginAccess(puVar11 + 0x10,adStack_258,0,0);
            pcVar4 = puVar11 + 0x10;
            _swift_weakLoadStrong();
            lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
            if (pcVar4 == (char *)0x0) {
              FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,0x800000010087e740,
                            0xd000000000000049,0x800000010087e8d0,0x101,0);
              _swift_release(local_9a8);
              _swift_release(local_9c0);
              _swift_release(local_9f8);
              uVar23 = local_908;
              pcVar6 = local_998;
              pcVar21 = local_988;
            }
            else {
              _swift_beginAccess(pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                          secondScreenGeneration,auStack_2a0,0,0);
              puVar8 = local_990;
              pcVar6 = local_998;
              (*local_970)(local_990,pcVar4 + lVar5,local_998);
              puVar7 = puVar8;
              __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar8,local_910);
              puVar14 = puVar8;
              (*local_988)(puVar8,pcVar6);
              puVar11 = local_9a8;
              local_930 = pcVar4;
              if ((((((ulong)puVar7 & 1) == 0) ||
                   (lVar5 = *(long *)(*(long *)(local_a30[1] + 0x28) +
                                     _TtC14UURemoteServer15StreamerManager::dispatcher), lVar5 == 0)
                   ) || (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::
                                                   currentConnectSession), lVar5 == 0)) ||
                 (lVar5 != local_8f0)) {
                FUN_1003fb48c(FUN_10008910c,0,0xd00000000000009f,0x800000010087e740,
                              0xd000000000000049,0x800000010087e8d0,0x106,0);
                _swift_beginAccess(puVar11 + 0x10,&local_150,0,0);
                pcVar4 = puVar11 + 0x10;
                _swift_weakLoadStrong();
                lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
                if (pcVar4 == (char *)0x0) {
                  FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,0x800000010087e740,
                                0xd000000000000049,0x800000010087e8d0,0xdc,0);
                  pcVar4 = local_930;
                  pcVar13 = local_9f8;
                  pcVar12 = local_9c0;
                }
                else {
                  _swift_beginAccess(pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                              secondScreenGeneration,&local_430,0,0);
                  pcVar6 = local_998;
                  (*local_970)(puVar8,pcVar4 + lVar5,local_998);
                  puVar7 = puVar8;
                  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar8,local_978);
                  (*local_988)(puVar8,pcVar6);
                  puVar11 = local_9a8;
                  pcVar33 = local_9c0;
                  pcVar12 = local_9f8;
                  if (((ulong)puVar7 & 1) == 0) {
                    FUN_1003fb48c(FUN_100088d6c,0,0xd00000000000009f,0x800000010087e740,
                                  0xd000000000000049,0x800000010087e8d0,0xe0,0);
                    _swift_release(pcVar33);
                    pcVar13 = local_930;
                    puVar11 = local_9a8;
                    pcVar12 = local_9f8;
                  }
                  else {
                    pcVar13 = pcVar4 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID;
                    pcVar13[0] = '\0';
                    pcVar13[1] = '\0';
                    pcVar13[2] = '\0';
                    pcVar13[3] = '\0';
                    pcVar13[4] = '\x01';
                    lVar5 = *(long *)(*(long *)(local_a30[1] + 0x28) +
                                     _TtC14UURemoteServer15StreamerManager::dispatcher);
                    if (((lVar5 == 0) ||
                        (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::
                                                   currentConnectSession), lVar5 == 0)) ||
                       (lVar5 != local_8f0)) {
                      FUN_1003fb48c(FUN_100088d98,0,0xd00000000000009f,0x800000010087e740,
                                    0xd000000000000049,0x800000010087e8d0,0xe5,0);
                      pcVar13 = pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                         settingsCompletion;
                      pcVar6 = *(code **)pcVar13;
                      uVar23 = *(undefined8 *)(pcVar13 + 8);
                      pcVar13[0] = '\0';
                      pcVar13[1] = '\0';
                      pcVar13[2] = '\0';
                      pcVar13[3] = '\0';
                      pcVar13[4] = '\0';
                      pcVar13[5] = '\0';
                      pcVar13[6] = '\0';
                      pcVar13[7] = '\0';
                      pcVar13[8] = '\0';
                      pcVar13[9] = '\0';
                      pcVar13[10] = '\0';
                      pcVar13[0xb] = '\0';
                      pcVar13[0xc] = '\0';
                      pcVar13[0xd] = '\0';
                      pcVar13[0xe] = '\0';
                      pcVar13[0xf] = '\0';
                      if (pcVar6 == (code *)0x0) {
                        _swift_release(pcVar33);
                        pcVar13 = local_930;
                      }
                      else {
                        _swift_retain(uVar23);
                        (*pcVar6)(0xffffffff);
                        _swift_release(pcVar4);
                        FUN_10007ed2c(pcVar6,uVar23);
                        FUN_10007ed2c(pcVar6,uVar23);
                        pcVar4 = local_930;
                        pcVar13 = pcVar12;
                        pcVar12 = pcVar33;
                      }
                    }
                    else {
                      (*(code *)PTR____chkstk_darwin_100995498)();
                      puVar32[-8] = local_928;
                      puVar32[-7] = uVar30;
                      uVar2 = local_9c4;
                      *(undefined4 *)(puVar32 + -6) = local_9c4;
                      uVar23 = local_908;
                      uVar30 = local_920;
                      puVar32[-5] = local_918;
                      puVar32[-4] = uVar23;
                      puVar32[-3] = uVar30;
                      *(int *)(puVar32 + -2) = (int)local_900;
                      *(undefined4 *)((long)puVar32 + -0xc) = 0xffffffff;
                      FUN_1003fb45c(thunk_FUN_1000916ac,puVar32 + -10,0xd00000000000009f,
                                    0x800000010087e740,0xd000000000000049,0x800000010087e8d0,0xed,0)
                      ;
                      lVar5 = _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth
                      ;
                      if (SCARRY8(*(long *)(pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                                     settingsSyncCoalescingDepth),1)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000887a4);
                        (*pcVar6)();
                      }
                      *(long *)(pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                         settingsSyncCoalescingDepth) =
                           *(long *)(pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                              settingsSyncCoalescingDepth) + 1;
                      FUN_1000837f8(uVar2,1);
                      FUN_1000162bc(uVar2,0);
                      uVar30 = local_9a0;
                      puVar11 = local_9a8;
                      lVar26 = *(long *)(pcVar4 + lVar5) + -1;
                      if (SBORROW8(*(long *)(pcVar4 + lVar5),1)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000887a8);
                        (*pcVar6)();
                      }
                      *(long *)(pcVar4 + lVar5) = lVar26;
                      if (lVar26 == 0) {
                        pcVar12 = pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                           coalescedSyncRequest;
                        bVar3 = pcVar12[4];
                        if (bVar3 != 2) {
                          pcVar12[0] = '\0';
                          pcVar12[1] = '\0';
                          pcVar12[2] = '\0';
                          pcVar12[3] = '\0';
                          pcVar12[4] = '\x02';
                          FUN_10008a544((ulong)CONCAT14(bVar3,*(undefined4 *)pcVar12),bVar3 & 1);
                        }
                      }
                      (*(code *)PTR____chkstk_darwin_100995498)();
                      *(undefined4 *)(puVar32 + -2) = 0xffffffff;
                      FUN_1003fb48c(thunk_FUN_100091434,puVar32 + -4,0xd00000000000009f,
                                    0x800000010087e740,0xd000000000000049,0x800000010087e8d0,0xfb,0)
                      ;
                      pcVar12 = pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                         settingsCompletion;
                      pcVar6 = *(code **)pcVar12;
                      uVar23 = *(undefined8 *)(pcVar12 + 8);
                      pcVar12[0] = '\0';
                      pcVar12[1] = '\0';
                      pcVar12[2] = '\0';
                      pcVar12[3] = '\0';
                      pcVar12[4] = '\0';
                      pcVar12[5] = '\0';
                      pcVar12[6] = '\0';
                      pcVar12[7] = '\0';
                      pcVar12[8] = '\0';
                      pcVar12[9] = '\0';
                      pcVar12[10] = '\0';
                      pcVar12[0xb] = '\0';
                      pcVar12[0xc] = '\0';
                      pcVar12[0xd] = '\0';
                      pcVar12[0xe] = '\0';
                      pcVar12[0xf] = '\0';
                      if (pcVar6 == (code *)0x0) {
                        _swift_release(pcVar33);
                        pcVar13 = local_930;
                        pcVar12 = local_9f8;
                      }
                      else {
                        _swift_retain(uVar23);
                        (*pcVar6)(0xffffffff);
                        _swift_release(pcVar4);
                        FUN_10007ed2c(pcVar6,uVar23);
                        FUN_10007ed2c(pcVar6,uVar23);
                        pcVar4 = local_930;
                        pcVar13 = local_9f8;
                        pcVar12 = pcVar33;
                      }
                    }
                  }
                }
                uVar23 = local_908;
                pcVar21 = local_988;
                pcVar6 = local_998;
                _swift_release(pcVar12);
                _swift_release(pcVar13);
                _swift_release(pcVar4);
                _swift_release(puVar11);
                puVar11 = local_9b8;
              }
              else {
                pcVar4 = pcVar4 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID;
                pcVar4[0] = '\0';
                pcVar4[1] = '\0';
                pcVar4[2] = '\0';
                pcVar4[3] = '\0';
                pcVar4[4] = '\x01';
                FUN_1000c7b64();
                uVar30 = puVar14[3];
                uVar23 = puVar14[4];
                uVar36 = puVar14[5];
                FUN_10008f174(uVar30,uVar23,uVar36);
                _swift_release(puVar14);
                lVar5 = local_9d8;
                FUN_1001a11bc(local_9d8,local_9d0);
                plVar29 = *(long **)(lVar5 + 0x30);
                pcVar6 = *(code **)(*plVar29 + 0xb0);
                _swift_retain(plVar29);
                (*pcVar6)(&local_150);
                _swift_release(plVar29);
                _swift_release(lVar5);
                pdVar16 = local_918;
                IVar9 = local_9b0;
                uVar24 = uVar30;
                FUN_10008fc38();
                FUN_10009143c(uVar30,uVar23,uVar36);
                FUN_100091474(&local_830);
                uStack_858 = uStack_7b8;
                local_860 = uStack_7c0;
                uStack_848 = uStack_7a8;
                uStack_850 = local_7b0;
                local_840 = local_7a0;
                uStack_8a8 = uStack_808;
                local_8b0 = local_810;
                uStack_898 = uStack_7f8;
                uStack_8a0 = uStack_800;
                uStack_888 = uStack_7e8;
                local_890 = local_7f0;
                uStack_878 = uStack_7d8;
                local_880 = uStack_7e0;
                uStack_868 = uStack_7c8;
                local_870 = local_7d0;
                IStack_8c8 = uStack_828;
                local_8d0 = (double *)local_830;
                uStack_8b8 = uStack_818;
                uStack_8c0 = uStack_820;
                local_798 = pdVar16;
                IStack_790 = IVar9;
                local_788 = uVar24;
                FUN_100091498(&local_798);
                uStack_698 = uStack_730;
                local_6a0 = local_738;
                uStack_688 = uStack_720;
                uStack_690 = local_728;
                uStack_678 = uStack_710;
                local_680 = local_718;
                local_670 = local_708;
                uStack_6d8 = uStack_770;
                local_6e0 = local_778;
                uStack_6c8 = uStack_760;
                uStack_6d0 = local_768;
                uStack_6b8 = uStack_750;
                local_6c0 = local_758;
                uStack_6a8 = uStack_740;
                uStack_6b0 = local_748;
                IStack_6f8 = IStack_790;
                local_700 = local_798;
                uStack_6e8 = uStack_780;
                uStack_6f0 = local_788;
                FUN_100008290(&local_700);
                uStack_5f8 = uStack_868;
                local_600 = local_870;
                uStack_5e8 = uStack_858;
                uStack_5f0 = local_860;
                uStack_5d8 = uStack_848;
                local_5e0 = uStack_850;
                local_5d0 = local_840;
                uStack_638 = uStack_8a8;
                local_640 = local_8b0;
                uStack_628 = uStack_898;
                uStack_630 = uStack_8a0;
                uStack_618 = uStack_888;
                local_620 = local_890;
                uStack_608 = uStack_878;
                uStack_610 = local_880;
                uStack_658 = IStack_8c8;
                local_660 = (double)local_8d0;
                uStack_648 = uStack_8b8;
                uStack_650 = uStack_8c0;
                FUN_100008184(pdVar16,IVar9);
                _swift_retain(uVar24);
                puVar11 = &DAT_100a75b90;
                puVar18 = &DAT_100809c10;
                pdVar15 = &local_660;
                FUN_100040bb4();
                uStack_858 = uStack_688;
                local_860 = uStack_690;
                uStack_848 = uStack_678;
                uStack_850 = local_680;
                local_840 = local_670;
                uStack_8a8 = uStack_6d8;
                local_8b0 = local_6e0;
                uStack_898 = uStack_6c8;
                uStack_8a0 = uStack_6d0;
                uStack_888 = uStack_6b8;
                local_890 = local_6c0;
                uStack_878 = uStack_6a8;
                local_880 = uStack_6b0;
                uStack_868 = uStack_698;
                local_870 = local_6a0;
                IStack_8c8 = IStack_6f8;
                local_8d0 = local_700;
                uStack_8b8 = uStack_6e8;
                uStack_8c0 = uStack_6f0;
                FUN_10047466c();
                uStack_558 = uStack_868;
                local_560 = local_870;
                uStack_548 = uStack_858;
                uStack_550 = local_860;
                uStack_538 = uStack_848;
                local_540 = uStack_850;
                uStack_598 = uStack_8a8;
                local_5a0 = local_8b0;
                uStack_588 = uStack_898;
                uStack_590 = uStack_8a0;
                uStack_578 = uStack_888;
                local_580 = local_890;
                uStack_568 = uStack_878;
                uStack_570 = local_880;
                IStack_5b8 = IStack_8c8;
                local_5c0 = local_8d0;
                uStack_5a8 = uStack_8b8;
                uStack_5b0 = uStack_8c0;
                uStack_8f8 = 0xc000000000000000;
                local_900 = 0;
                uStack_520 = 0xc000000000000000;
                local_528 = 0;
                local_530 = local_840;
                local_518 = 0;
                local_510 = 0;
                local_508 = 0xf000000000000000;
                uStack_4b8 = uStack_888;
                local_4c0 = local_890;
                uStack_4a8 = uStack_878;
                uStack_4b0 = local_880;
                uStack_498 = uStack_868;
                local_4a0 = local_870;
                uStack_488 = uStack_858;
                uStack_490 = local_860;
                IStack_4f8 = IStack_8c8;
                local_500 = local_8d0;
                uStack_4e8 = uStack_8b8;
                uStack_4f0 = uStack_8c0;
                uStack_4d8 = uStack_8a8;
                local_4e0 = local_8b0;
                uStack_4c8 = uStack_898;
                uStack_4d0 = uStack_8a0;
                uStack_478 = uStack_848;
                local_480 = uStack_850;
                uStack_468 = 0;
                uStack_470 = local_840;
                uStack_458 = 0;
                local_460 = 0xc000000000000000;
                uStack_448 = 0xf000000000000000;
                uStack_450 = 0;
                local_360 = pdVar15;
                puStack_358 = puVar11;
                local_350 = puVar18;
                FUN_1000914b0(&local_500);
                uStack_388 = uStack_458;
                local_390 = local_460;
                uStack_378 = uStack_448;
                uStack_380 = uStack_450;
                local_370 = local_440;
                uStack_3c8 = uStack_498;
                local_3d0 = local_4a0;
                uStack_3b8 = uStack_488;
                uStack_3c0 = uStack_490;
                uStack_3a8 = uStack_478;
                local_3b0 = local_480;
                uStack_398 = uStack_468;
                uStack_3a0 = uStack_470;
                uStack_408 = uStack_4d8;
                local_410 = local_4e0;
                uStack_3f8 = uStack_4c8;
                uStack_400 = uStack_4d0;
                uStack_3e8 = uStack_4b8;
                local_3f0 = local_4c0;
                uStack_3d8 = uStack_4a8;
                uStack_3e0 = uStack_4b0;
                IStack_428 = IStack_4f8;
                local_430 = local_500;
                uStack_418 = uStack_4e8;
                uStack_420 = uStack_4f0;
                FUN_100008290(&local_430);
                uStack_a8 = uStack_388;
                local_b0 = local_390;
                uStack_98 = uStack_378;
                uStack_a0 = uStack_380;
                local_90 = local_370;
                uStack_e8 = uStack_3c8;
                local_f0 = local_3d0;
                uStack_d8 = uStack_3b8;
                uStack_e0 = uStack_3c0;
                uStack_c8 = uStack_3a8;
                local_d0 = local_3b0;
                uStack_b8 = uStack_398;
                uStack_c0 = uStack_3a0;
                puStack_128 = (undefined *)uStack_408;
                local_130 = (code *)local_410;
                uStack_118 = uStack_3f8;
                uStack_120 = uStack_400;
                uStack_108 = uStack_3e8;
                local_110 = local_3f0;
                uStack_f8 = uStack_3d8;
                uStack_100 = uStack_3e0;
                IStack_148 = IStack_428;
                local_150 = local_430;
                local_138 = (undefined *)uStack_418;
                local_140 = (code *)uStack_420;
                FUN_1000408d0(&local_5c0,&local_210);
                ppdVar17 = &local_150;
                FUN_100467dcc();
                FUN_1000c7f78();
                uStack_1a8 = uStack_868;
                local_1b0 = local_870;
                uStack_198 = uStack_858;
                uStack_1a0 = local_860;
                uStack_188 = uStack_848;
                local_190 = uStack_850;
                uStack_1e8 = uStack_8a8;
                local_1f0 = local_8b0;
                uStack_1d8 = uStack_898;
                uStack_1e0 = uStack_8a0;
                uStack_1c8 = uStack_888;
                local_1d0 = local_890;
                uStack_1b8 = uStack_878;
                uStack_1c0 = local_880;
                IStack_208 = IStack_8c8;
                local_210 = local_8d0;
                uStack_1f8 = uStack_8b8;
                uStack_200 = uStack_8c0;
                uStack_170 = uStack_8f8;
                local_178 = local_900;
                local_180 = local_840;
                local_168 = 0;
                local_160 = 0;
                local_158 = 0xf000000000000000;
                puVar11 = &DAT_100999cc8;
                _swift_allocObject(&DAT_100999cc8,0x24,7);
                pcVar4 = local_9c0;
                *(code **)(puVar11 + 0x10) = FUN_100091200;
                *(char **)(puVar11 + 0x18) = local_9c0;
                *(undefined4 *)(puVar11 + 0x20) = 0;
                _swift_retain(local_9c0);
                FUN_1002009d0(local_9c4,&local_210,pdVar16,IVar9,uVar24,thunk_FUN_1000916e0,puVar11)
                ;
                FUN_100006cdc(pdVar16,IVar9);
                _swift_release(local_930);
                _swift_release(ppdVar17);
                _swift_release(puVar11);
                _swift_release(uVar24);
                puVar11 = local_350;
                FUN_100006cdc(local_360,puStack_358);
                _swift_release(puVar11);
                uVar30 = local_9a0;
                uStack_2f8 = uStack_868;
                local_300 = local_870;
                uStack_2e8 = uStack_858;
                uStack_2f0 = local_860;
                uStack_2d8 = uStack_848;
                local_2e0 = uStack_850;
                uStack_338 = uStack_8a8;
                local_340 = local_8b0;
                uStack_328 = uStack_898;
                uStack_330 = uStack_8a0;
                uStack_318 = uStack_888;
                local_320 = local_890;
                uStack_308 = uStack_878;
                uStack_310 = local_880;
                puStack_358 = (undefined *)IStack_8c8;
                local_360 = local_8d0;
                uStack_348 = uStack_8b8;
                local_350 = (undefined *)uStack_8c0;
                uStack_2c0 = uStack_8f8;
                local_2c8 = local_900;
                local_2d0 = local_840;
                local_2b8 = 0;
                local_2b0 = 0;
                local_2a8 = 0xf000000000000000;
                FUN_1000914e4(&local_360);
                _swift_release(local_9a8);
                _swift_release(pcVar4);
                _swift_release(local_9f8);
                uVar23 = local_908;
                pcVar6 = local_998;
                pcVar21 = local_988;
                puVar11 = local_9b8;
              }
            }
            (*pcVar21)(local_978,pcVar6);
            _swift_release(local_968);
            _swift_release(puVar11);
            _swift_unknownObjectRelease(uVar23);
            _swift_bridgeObjectRelease(uVar30);
            (*pcVar21)(local_910,pcVar6);
            return;
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
          uVar28 = local_900;
          uVar2 = (int)local_900;
          *(int *)(puVar32 + -2) = (int)local_900;
          *(uint *)((long)puVar32 + -0xc) = uVar25;
          local_a10 = "reportedAutoFrameQuality";
          IStack_a08 = extraout_x12_04;
          FUN_1003fb48c(FUN_100091518,puVar32 + -4,0xd00000000000009f,0x800000010087e740,
                        0xd000000000000049,0x800000010087e8d0,0x129,0);
          lVar5 = local_968;
          puVar1 = (undefined4 *)
                   (local_968 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID);
          *puVar1 = uVar2;
          *(undefined1 *)(puVar1 + 1) = 0;
          local_150 = (double *)((ulong)local_150 & 0xffffffffffffff00);
          FUN_100021f40(local_9c4,uVar28 & 0xffffffff,0);
          uVar30 = *(undefined8 *)(lVar5 + 0x30);
          uVar23 = *param_14;
          _swift_unknownObjectRetain(uVar30);
          local_a18 = CONCAT44(local_a18._4_4_,uVar25);
          FUN_10004afbc(uVar25,uVar23,local_a00 & 0xffffffff);
          _swift_unknownObjectRelease(uVar30);
          pcVar6 = local_998;
          if (uVar25 == 0) {
            (*local_988)(local_910,local_998);
            _swift_release(puVar11);
            puVar11 = &DAT_100999b60;
            _swift_allocObject(&DAT_100999b60,0x18,7);
            _swift_weakInit(puVar11 + 0x10,lVar5);
            puVar32 = local_990;
            (*local_970)(local_990,local_980,pcVar6);
            uVar28 = local_a30[0] + 3U & 0xfffffffffffffffc;
            uVar34 = uVar28 + 0xf & 0xfffffffffffffff8;
            puVar18 = &DAT_100999c78;
            _swift_allocObject(&DAT_100999c78,uVar34 + 0x18,local_9e8 | 7);
            *(undefined **)(puVar18 + 0x10) = puVar11;
            (*local_9f0)(puVar18 + local_9e0,puVar32,pcVar6);
            pcVar4 = local_9f8;
            *(undefined4 *)(puVar18 + uVar28) = (undefined4)local_a00;
            *(undefined4 *)(puVar18 + uVar28 + 4) = (undefined4)local_a18;
            *(code **)(puVar18 + uVar34) = FUN_100091384;
            *(char **)((long)(puVar18 + uVar34) + 8) = local_9f8;
            *(undefined8 *)(puVar18 + uVar34 + 0x10) = 0x32;
            local_130 = thunk_FUN_1000915e4;
            local_150 = (double *)PTR___NSConcreteStackBlock_100995490;
            IStack_148 = 0x42000000;
            local_140 = FUN_1000acdb4;
            local_138 = &DAT_100999c90;
            puStack_128 = puVar18;
            pvVar19 = __Block_copy(&local_150);
            _swift_retain(puVar11);
            _swift_retain(pcVar4);
            lVar26 = local_960;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_960);
            local_430 = (double *)PTR___swiftEmptyArrayStorage_100995ea0;
            puVar32 = &DAT_100a75a90;
            FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
            puVar18 = &DAT_100a75a98;
            FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
            puVar20 = puVar18;
            FUN_10004eec4();
            lVar5 = local_950;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_950,&local_430,puVar18,puVar20,local_958,puVar32);
            __s8Dispatch0A8WorkItemCMa();
            _swift_allocObject();
            __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc
                      (lVar26,lVar5,pvVar19);
            puVar18 = puStack_128;
            _swift_release(puVar11);
            _swift_release(puVar18);
            lVar5 = local_968;
            uVar30 = *(undefined8 *)
                      (local_968 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem);
            *(long *)(local_968 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem) =
                 lVar26;
            _swift_retain(lVar26);
            _swift_release(uVar30);
            FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
            __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
            IVar9 = local_948;
            __s8Dispatch0A4TimeV3nowACyFZ(local_948);
            pcVar12 = local_938;
            __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_938,0x3fb999999999999a,IVar9);
            pcVar13 = local_930;
            pcVar6 = *(code **)(local_940 + 8);
            (*pcVar6)(IVar9,local_930);
            __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
                      (pcVar12,lVar26);
            _swift_release(local_9a8);
            _swift_release(local_9c0);
            _swift_release(pcVar4);
            _swift_release(lVar26);
            _swift_release(lVar5);
            (*local_988)(local_978,local_998);
            _swift_unknownObjectRelease(local_908);
            _swift_bridgeObjectRelease(local_9a0);
            (*pcVar6)(pcVar12,pcVar13);
            return;
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_940 = (char *)CONCAT44(local_940._4_4_,uVar25);
          *(uint *)(puVar32 + -2) = uVar25;
          pcVar12 = local_a10;
          FUN_1003fb4ec(FUN_100091520,puVar32 + -4,0xd00000000000009f,
                        (ulong)local_a10 | 0x8000000000000000,0xd000000000000049,0x800000010087e8d0,
                        0x12f,0);
          _swift_beginAccess(puVar11 + 0x10,auStack_2a0,0,0);
          pcVar4 = puVar11 + 0x10;
          _swift_weakLoadStrong();
          uVar30 = local_9a0;
          lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
          if (pcVar4 == (char *)0x0) {
            FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,
                          (ulong)pcVar12 | 0x8000000000000000,0xd000000000000049,0x800000010087e8d0,
                          0x101,0);
            _swift_release(local_9a8);
            _swift_release(local_9c0);
            _swift_release(local_9f8);
            uVar23 = local_908;
            pcVar6 = local_988;
          }
          else {
            local_930 = s___10087e8a0 + 0x30;
            _swift_beginAccess(pcVar4 + _TtC14UURemoteServer19SecondScreenManager::
                                        secondScreenGeneration,auStack_8e8,0,0);
            puVar8 = local_990;
            pcVar6 = local_998;
            local_938 = pcVar4;
            (*local_970)(local_990,pcVar4 + lVar5,local_998);
            puVar7 = puVar8;
            __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar8,local_910);
            (*local_988)(puVar8,pcVar6);
            pcVar4 = local_930;
            puVar11 = local_9a8;
            if (((((ulong)puVar7 & 1) == 0) ||
                (lVar5 = *(long *)(*(long *)(local_a30[1] + 0x28) +
                                  _TtC14UURemoteServer15StreamerManager::dispatcher), lVar5 == 0))
               || ((lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::
                                              currentConnectSession), lVar5 == 0 ||
                   (lVar5 != local_8f0)))) {
              FUN_1003fb48c(FUN_10008910c,0,0xd00000000000009f,(ulong)pcVar12 | 0x8000000000000000,
                            0xd000000000000049,(ulong)local_930 | 0x8000000000000000,0x106,0);
              _swift_beginAccess(puVar11 + 0x10,&local_150,0,0);
              pcVar13 = puVar11 + 0x10;
              _swift_weakLoadStrong();
              lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
              if (pcVar13 == (char *)0x0) {
                FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,
                              (ulong)pcVar12 | 0x8000000000000000,0xd000000000000049,
                              (ulong)pcVar4 | 0x8000000000000000,0xdc,0);
                pcVar12 = local_9c0;
                pcVar13 = local_938;
                pcVar6 = local_988;
                pcVar4 = local_9f8;
              }
              else {
                _swift_beginAccess(pcVar13 + _TtC14UURemoteServer19SecondScreenManager::
                                             secondScreenGeneration,&local_430,0,0);
                puVar8 = local_990;
                pcVar21 = local_998;
                (*local_970)(local_990,pcVar13 + lVar5,local_998);
                puVar7 = puVar8;
                __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar8,local_978);
                pcVar6 = local_988;
                (*local_988)(puVar8,pcVar21);
                pcVar4 = local_9f8;
                if (((ulong)puVar7 & 1) == 0) {
                  FUN_1003fb48c(FUN_100088d6c,0,0xd00000000000009f,
                                (ulong)pcVar12 | 0x8000000000000000,0xd000000000000049,
                                (ulong)local_930 | 0x8000000000000000,0xe0,0);
                  _swift_release(local_9c0);
                  pcVar12 = local_9f8;
                  pcVar4 = local_938;
                }
                else {
                  pcVar33 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID;
                  pcVar33[0] = '\0';
                  pcVar33[1] = '\0';
                  pcVar33[2] = '\0';
                  pcVar33[3] = '\0';
                  pcVar33[4] = '\x01';
                  lVar5 = *(long *)(*(long *)(local_a30[1] + 0x28) +
                                   _TtC14UURemoteServer15StreamerManager::dispatcher);
                  if (((lVar5 == 0) ||
                      (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::
                                                 currentConnectSession), lVar5 == 0)) ||
                     (lVar5 != local_8f0)) {
                    FUN_1003fb48c(FUN_100088d98,0,0xd00000000000009f,
                                  (ulong)pcVar12 | 0x8000000000000000,0xd000000000000049,
                                  (ulong)local_930 | 0x8000000000000000,0xe5,0);
                    pcVar12 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::
                                        settingsCompletion;
                    pcVar6 = *(code **)pcVar12;
                    uVar23 = *(undefined8 *)(pcVar12 + 8);
                    pcVar12[0] = '\0';
                    pcVar12[1] = '\0';
                    pcVar12[2] = '\0';
                    pcVar12[3] = '\0';
                    pcVar12[4] = '\0';
                    pcVar12[5] = '\0';
                    pcVar12[6] = '\0';
                    pcVar12[7] = '\0';
                    pcVar12[8] = '\0';
                    pcVar12[9] = '\0';
                    pcVar12[10] = '\0';
                    pcVar12[0xb] = '\0';
                    pcVar12[0xc] = '\0';
                    pcVar12[0xd] = '\0';
                    pcVar12[0xe] = '\0';
                    pcVar12[0xf] = '\0';
                    if (pcVar6 == (code *)0x0) {
                      _swift_release(local_9c0);
                      pcVar12 = pcVar4;
                      pcVar6 = local_988;
                      pcVar4 = local_938;
                    }
                    else {
                      _swift_retain(uVar23);
                      (*pcVar6)(0xffffffff);
                      _swift_release(pcVar13);
                      FUN_10007ed2c(pcVar6,uVar23);
                      FUN_10007ed2c(pcVar6,uVar23);
                      pcVar12 = local_9c0;
                      pcVar13 = local_938;
                      pcVar6 = local_988;
                    }
                  }
                  else {
                    (*(code *)PTR____chkstk_darwin_100995498)();
                    puVar32[-8] = local_928;
                    puVar32[-7] = uVar30;
                    uVar2 = local_9c4;
                    *(undefined4 *)(puVar32 + -6) = local_9c4;
                    uVar23 = local_908;
                    uVar30 = local_920;
                    puVar32[-5] = local_918;
                    puVar32[-4] = uVar23;
                    puVar32[-3] = uVar30;
                    *(int *)(puVar32 + -2) = (int)local_900;
                    *(undefined4 *)((long)puVar32 + -0xc) = 0xffffffff;
                    FUN_1003fb45c(thunk_FUN_1000916ac,puVar32 + -10,0xd00000000000009f,
                                  (ulong)pcVar12 | 0x8000000000000000,0xd000000000000049,
                                  (ulong)local_930 | 0x8000000000000000,0xed,0);
                    lVar5 = _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth;
                    if (SCARRY8(*(long *)(pcVar13 +
                                         _TtC14UURemoteServer19SecondScreenManager::
                                         settingsSyncCoalescingDepth),1)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000887ac);
                      (*pcVar6)();
                    }
                    *(long *)(pcVar13 +
                             _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth)
                         = *(long *)(pcVar13 +
                                    _TtC14UURemoteServer19SecondScreenManager::
                                    settingsSyncCoalescingDepth) + 1;
                    FUN_1000837f8(uVar2,1);
                    FUN_1000162bc(uVar2,0);
                    lVar26 = *(long *)(pcVar13 + lVar5) + -1;
                    if (SBORROW8(*(long *)(pcVar13 + lVar5),1)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000887b0);
                      (*pcVar6)();
                    }
                    *(long *)(pcVar13 + lVar5) = lVar26;
                    if (lVar26 == 0) {
                      pcVar4 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::
                                         coalescedSyncRequest;
                      bVar3 = pcVar4[4];
                      if (bVar3 != 2) {
                        pcVar4[0] = '\0';
                        pcVar4[1] = '\0';
                        pcVar4[2] = '\0';
                        pcVar4[3] = '\0';
                        pcVar4[4] = '\x02';
                        FUN_10008a544((ulong)CONCAT14(bVar3,*(undefined4 *)pcVar4),bVar3 & 1);
                      }
                    }
                    (*(code *)PTR____chkstk_darwin_100995498)();
                    *(undefined4 *)(puVar32 + -2) = 0xffffffff;
                    FUN_1003fb48c(thunk_FUN_100091434,puVar32 + -4,0xd00000000000009f,
                                  (ulong)pcVar12 | 0x8000000000000000,0xd000000000000049,
                                  (ulong)local_930 | 0x8000000000000000,0xfb,0);
                    pcVar4 = pcVar13 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion
                    ;
                    pcVar6 = *(code **)pcVar4;
                    uVar30 = *(undefined8 *)(pcVar4 + 8);
                    pcVar4[0] = '\0';
                    pcVar4[1] = '\0';
                    pcVar4[2] = '\0';
                    pcVar4[3] = '\0';
                    pcVar4[4] = '\0';
                    pcVar4[5] = '\0';
                    pcVar4[6] = '\0';
                    pcVar4[7] = '\0';
                    pcVar4[8] = '\0';
                    pcVar4[9] = '\0';
                    pcVar4[10] = '\0';
                    pcVar4[0xb] = '\0';
                    pcVar4[0xc] = '\0';
                    pcVar4[0xd] = '\0';
                    pcVar4[0xe] = '\0';
                    pcVar4[0xf] = '\0';
                    if (pcVar6 == (code *)0x0) {
                      _swift_release(local_9c0);
                      pcVar12 = local_9f8;
                      pcVar6 = local_988;
                      pcVar4 = local_938;
                      puVar11 = local_9a8;
                      uVar30 = local_9a0;
                    }
                    else {
                      _swift_retain(uVar30);
                      (*pcVar6)(0xffffffff);
                      _swift_release(pcVar13);
                      FUN_10007ed2c(pcVar6,uVar30);
                      FUN_10007ed2c(pcVar6,uVar30);
                      pcVar12 = local_9c0;
                      pcVar13 = local_938;
                      pcVar6 = local_988;
                      pcVar4 = local_9f8;
                      puVar11 = local_9a8;
                      uVar30 = local_9a0;
                    }
                  }
                }
              }
              _swift_release(pcVar12);
              _swift_release(pcVar4);
              _swift_release(pcVar13);
              _swift_release(puVar11);
              uVar23 = local_908;
              puVar11 = local_9b8;
            }
            else {
              pcVar4 = local_938 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID;
              pcVar4[0] = '\0';
              pcVar4[1] = '\0';
              pcVar4[2] = '\0';
              pcVar4[3] = '\0';
              pcVar4[4] = '\x01';
              *(undefined1 *)(puVar32 + -2) = 2;
              puVar32[-4] = 0xffffffffffffffff;
              puVar32[-3] = 0xffffffffffffffff;
              puVar32[-6] = 0xffffffffffffffff;
              puVar32[-5] = 0xffffffffffffffff;
              lVar5 = 0xffffffff;
              FUN_1005fe7e0(adStack_258,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
                            0xffffffff,0,0xffffffff);
              FUN_1000c7b64();
              uVar30 = *(undefined8 *)(lVar5 + 0x18);
              uVar23 = *(undefined8 *)(lVar5 + 0x20);
              uVar36 = *(undefined8 *)(lVar5 + 0x28);
              FUN_10008f174(uVar30,uVar23,uVar36);
              _swift_release(lVar5);
              lVar5 = local_9d8;
              FUN_1001a11bc(local_9d8,local_9d0);
              plVar29 = *(long **)(lVar5 + 0x30);
              pcVar6 = *(code **)(*plVar29 + 0xb0);
              _swift_retain(plVar29);
              (*pcVar6)(&local_150);
              _swift_release(plVar29);
              _swift_release(lVar5);
              pdVar15 = adStack_258;
              IVar9 = local_9b0;
              uVar24 = uVar30;
              FUN_10008fc38();
              FUN_10009143c(uVar30,uVar23,uVar36);
              FUN_100091474(&local_830);
              uStack_858 = uStack_7b8;
              local_860 = uStack_7c0;
              uStack_848 = uStack_7a8;
              uStack_850 = local_7b0;
              local_840 = local_7a0;
              uStack_8a8 = uStack_808;
              local_8b0 = local_810;
              uStack_898 = uStack_7f8;
              uStack_8a0 = uStack_800;
              uStack_888 = uStack_7e8;
              local_890 = local_7f0;
              uStack_878 = uStack_7d8;
              local_880 = uStack_7e0;
              uStack_868 = uStack_7c8;
              local_870 = local_7d0;
              IStack_8c8 = uStack_828;
              local_8d0 = (double *)local_830;
              uStack_8b8 = uStack_818;
              uStack_8c0 = uStack_820;
              local_798 = pdVar15;
              IStack_790 = IVar9;
              local_788 = uVar24;
              FUN_100091498(&local_798);
              uStack_698 = uStack_730;
              local_6a0 = local_738;
              uStack_688 = uStack_720;
              uStack_690 = local_728;
              uStack_678 = uStack_710;
              local_680 = local_718;
              local_670 = local_708;
              uStack_6d8 = uStack_770;
              local_6e0 = local_778;
              uStack_6c8 = uStack_760;
              uStack_6d0 = local_768;
              uStack_6b8 = uStack_750;
              local_6c0 = local_758;
              uStack_6a8 = uStack_740;
              uStack_6b0 = local_748;
              IStack_6f8 = IStack_790;
              local_700 = local_798;
              uStack_6e8 = uStack_780;
              uStack_6f0 = local_788;
              FUN_100008290(&local_700);
              uStack_5f8 = uStack_868;
              local_600 = local_870;
              uStack_5e8 = uStack_858;
              uStack_5f0 = local_860;
              uStack_5d8 = uStack_848;
              local_5e0 = uStack_850;
              local_5d0 = local_840;
              uStack_638 = uStack_8a8;
              local_640 = local_8b0;
              uStack_628 = uStack_898;
              uStack_630 = uStack_8a0;
              uStack_618 = uStack_888;
              local_620 = local_890;
              uStack_608 = uStack_878;
              uStack_610 = local_880;
              uStack_658 = IStack_8c8;
              local_660 = (double)local_8d0;
              uStack_648 = uStack_8b8;
              uStack_650 = uStack_8c0;
              FUN_100008184(pdVar15,IVar9);
              _swift_retain(uVar24);
              puVar11 = &DAT_100a75b90;
              puVar18 = &DAT_100809c10;
              pdVar16 = &local_660;
              FUN_100040bb4();
              uStack_858 = uStack_688;
              local_860 = uStack_690;
              uStack_848 = uStack_678;
              uStack_850 = local_680;
              local_840 = local_670;
              uStack_8a8 = uStack_6d8;
              local_8b0 = local_6e0;
              uStack_898 = uStack_6c8;
              uStack_8a0 = uStack_6d0;
              uStack_888 = uStack_6b8;
              local_890 = local_6c0;
              uStack_878 = uStack_6a8;
              local_880 = uStack_6b0;
              uStack_868 = uStack_698;
              local_870 = local_6a0;
              IStack_8c8 = IStack_6f8;
              local_8d0 = local_700;
              uStack_8b8 = uStack_6e8;
              uStack_8c0 = uStack_6f0;
              FUN_10047466c();
              uStack_558 = uStack_868;
              local_560 = local_870;
              uStack_548 = uStack_858;
              uStack_550 = local_860;
              uStack_538 = uStack_848;
              local_540 = uStack_850;
              uStack_598 = uStack_8a8;
              local_5a0 = local_8b0;
              uStack_588 = uStack_898;
              uStack_590 = uStack_8a0;
              uStack_578 = uStack_888;
              local_580 = local_890;
              uStack_568 = uStack_878;
              uStack_570 = local_880;
              IStack_5b8 = IStack_8c8;
              local_5c0 = local_8d0;
              uStack_5a8 = uStack_8b8;
              uStack_5b0 = uStack_8c0;
              uStack_8f8 = 0xc000000000000000;
              local_900 = 0;
              uStack_520 = 0xc000000000000000;
              local_528 = 0;
              local_530 = local_840;
              local_518 = 0;
              local_510 = 0;
              local_508 = 0xf000000000000000;
              uStack_4b8 = uStack_888;
              local_4c0 = local_890;
              uStack_4a8 = uStack_878;
              uStack_4b0 = local_880;
              uStack_498 = uStack_868;
              local_4a0 = local_870;
              uStack_488 = uStack_858;
              uStack_490 = local_860;
              IStack_4f8 = IStack_8c8;
              local_500 = local_8d0;
              uStack_4e8 = uStack_8b8;
              uStack_4f0 = uStack_8c0;
              uStack_4d8 = uStack_8a8;
              local_4e0 = local_8b0;
              uStack_4c8 = uStack_898;
              uStack_4d0 = uStack_8a0;
              uStack_478 = uStack_848;
              local_480 = uStack_850;
              uStack_468 = 0;
              uStack_470 = local_840;
              uStack_458 = 0;
              local_460 = 0xc000000000000000;
              uStack_448 = 0xf000000000000000;
              uStack_450 = 0;
              local_360 = pdVar16;
              puStack_358 = puVar11;
              local_350 = puVar18;
              FUN_1000914b0(&local_500);
              uStack_388 = uStack_458;
              local_390 = local_460;
              uStack_378 = uStack_448;
              uStack_380 = uStack_450;
              local_370 = local_440;
              uStack_3c8 = uStack_498;
              local_3d0 = local_4a0;
              uStack_3b8 = uStack_488;
              uStack_3c0 = uStack_490;
              uStack_3a8 = uStack_478;
              local_3b0 = local_480;
              uStack_398 = uStack_468;
              uStack_3a0 = uStack_470;
              uStack_408 = uStack_4d8;
              local_410 = local_4e0;
              uStack_3f8 = uStack_4c8;
              uStack_400 = uStack_4d0;
              uStack_3e8 = uStack_4b8;
              local_3f0 = local_4c0;
              uStack_3d8 = uStack_4a8;
              uStack_3e0 = uStack_4b0;
              IStack_428 = IStack_4f8;
              local_430 = local_500;
              uStack_418 = uStack_4e8;
              uStack_420 = uStack_4f0;
              FUN_100008290(&local_430);
              uStack_a8 = uStack_388;
              local_b0 = local_390;
              uStack_98 = uStack_378;
              uStack_a0 = uStack_380;
              local_90 = local_370;
              uStack_e8 = uStack_3c8;
              local_f0 = local_3d0;
              uStack_d8 = uStack_3b8;
              uStack_e0 = uStack_3c0;
              uStack_c8 = uStack_3a8;
              local_d0 = local_3b0;
              uStack_b8 = uStack_398;
              uStack_c0 = uStack_3a0;
              puStack_128 = (undefined *)uStack_408;
              local_130 = (code *)local_410;
              uStack_118 = uStack_3f8;
              uStack_120 = uStack_400;
              uStack_108 = uStack_3e8;
              local_110 = local_3f0;
              uStack_f8 = uStack_3d8;
              uStack_100 = uStack_3e0;
              IStack_148 = IStack_428;
              local_150 = local_430;
              local_138 = (undefined *)uStack_418;
              local_140 = (code *)uStack_420;
              FUN_1000408d0(&local_5c0,&local_210);
              ppdVar17 = &local_150;
              FUN_100467dcc(ppdVar17);
              FUN_1000c7f78();
              uStack_1a8 = uStack_868;
              local_1b0 = local_870;
              uStack_198 = uStack_858;
              uStack_1a0 = local_860;
              uStack_188 = uStack_848;
              local_190 = uStack_850;
              uStack_1e8 = uStack_8a8;
              local_1f0 = local_8b0;
              uStack_1d8 = uStack_898;
              uStack_1e0 = uStack_8a0;
              uStack_1c8 = uStack_888;
              local_1d0 = local_890;
              uStack_1b8 = uStack_878;
              uStack_1c0 = local_880;
              IStack_208 = IStack_8c8;
              local_210 = local_8d0;
              uStack_1f8 = uStack_8b8;
              uStack_200 = uStack_8c0;
              uStack_170 = uStack_8f8;
              local_178 = local_900;
              local_180 = local_840;
              local_168 = 0;
              local_160 = 0;
              local_158 = 0xf000000000000000;
              puVar11 = &DAT_100999c50;
              _swift_allocObject(&DAT_100999c50,0x24,7);
              pcVar4 = local_9c0;
              *(code **)(puVar11 + 0x10) = FUN_100091200;
              *(char **)(puVar11 + 0x18) = local_9c0;
              *(undefined4 *)(puVar11 + 0x20) = local_940._0_4_;
              _swift_retain(local_9c0);
              FUN_1002009d0(local_9c4,&local_210,pdVar15,IVar9,uVar24,thunk_FUN_1000916e0,puVar11);
              FUN_100006cdc(pdVar15,IVar9);
              _swift_release(local_938);
              _swift_release(ppdVar17);
              _swift_release(puVar11);
              _swift_release(uVar24);
              puVar11 = local_350;
              FUN_100006cdc(local_360,puStack_358);
              _swift_release(puVar11);
              uVar23 = local_908;
              uVar30 = local_9a0;
              uStack_2f8 = uStack_868;
              local_300 = local_870;
              uStack_2e8 = uStack_858;
              uStack_2f0 = local_860;
              uStack_2d8 = uStack_848;
              local_2e0 = uStack_850;
              uStack_338 = uStack_8a8;
              local_340 = local_8b0;
              uStack_328 = uStack_898;
              uStack_330 = uStack_8a0;
              uStack_318 = uStack_888;
              local_320 = local_890;
              uStack_308 = uStack_878;
              uStack_310 = local_880;
              puStack_358 = (undefined *)IStack_8c8;
              local_360 = local_8d0;
              uStack_348 = uStack_8b8;
              local_350 = (undefined *)uStack_8c0;
              uStack_2c0 = uStack_8f8;
              local_2c8 = local_900;
              local_2d0 = local_840;
              local_2b8 = 0;
              local_2b0 = 0;
              local_2a8 = 0xf000000000000000;
              FUN_1000914e4(&local_360);
              _swift_release(local_9a8);
              _swift_release(pcVar4);
              _swift_release(local_9f8);
              pcVar6 = local_988;
              puVar11 = local_9b8;
            }
          }
          pcVar21 = local_998;
          (*pcVar6)(local_978,local_998);
          _swift_release(local_968);
          _swift_release(puVar11);
          _swift_unknownObjectRelease(uVar23);
          _swift_bridgeObjectRelease(uVar30);
        }
        (*pcVar6)(local_910,pcVar21);
        return;
      }
    }
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100088808,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                  0x800000010087e8d0,0xd0,0);
    lVar5 = local_968;
    puVar32 = (undefined8 *)
              (local_968 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion);
    pcVar6 = (code *)*puVar32;
    uVar30 = puVar32[1];
    *puVar32 = 0;
    puVar32[1] = 0;
    param_1 = local_968;
    if (pcVar6 != (code *)0x0) {
      _swift_retain(uVar30);
      (*pcVar6)(0xffffffff);
      _swift_release(lVar5);
      FUN_10007ed2c(pcVar6,uVar30);
      FUN_10007ed2c(pcVar6,uVar30);
      return;
    }
  }
  _swift_release(param_1);
  return;
}

