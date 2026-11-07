// rea decompile_all
// name: FUN_100165198
// address: 0x100165198
// body: available
// range: 0x100165198-0x100165c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100165198(undefined *param_1,ulong param_2,undefined1 param_3,long param_4,
                  undefined *param_5,undefined8 param_6)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  void *aBlock;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x12;
  uint uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long alStack_3b0 [6];
  char *apcStack_380 [4];
  undefined *local_360;
  long local_358;
  undefined *local_350;
  ulong local_348;
  undefined *local_340;
  long local_338;
  undefined *local_330;
  undefined8 local_328;
  undefined *local_320;
  undefined *local_318;
  undefined8 local_310;
  long local_308;
  long local_300;
  long lStack_2f8;
  long local_2f0;
  long local_2e8;
  long local_2e0;
  undefined *local_2c0;
  long local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  ulong uStack_2a0;
  code *local_298;
  undefined *puStack_290;
  code *local_288;
  undefined *puStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined *local_180;
  ulong uStack_178;
  code *local_170;
  undefined *puStack_168;
  code *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_2e8 = *(long *)(lVar4 + -8);
  local_2e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2e8 + 0x40));
  lVar14 = (long)apcStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_2f0 = lVar14;
  __s8Dispatch0A3QoSVMa();
  local_300 = *(long *)(lVar4 + -8);
  lStack_2f8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_300 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_308 = lVar14;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  puVar18 = (undefined8 *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_4 + 0x10,auStack_198,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 == 0) {
    return;
  }
  puVar11 = (undefined8 *)(param_4 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks);
  local_310 = param_6;
  _swift_beginAccess(puVar11,auStack_1b0,0,0);
  puVar5 = param_5;
  FUN_100152fd0(param_5,puVar11[1]);
  if (((ulong)puVar5 & 1) != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(puVar18 + -2) = (int)param_5;
    FUN_1003fb48c(FUN_10016bae4,puVar18 + -4,0xd0000000000000a4,0x800000010088d870,
                  &DAT_d000000000000028,0x80000001008938b0,899,0);
    return;
  }
  local_170 = (code *)(CONCAT71(local_170._1_7_,param_3) & 0xffffffffffffff01);
  local_180 = param_1;
  uStack_178 = param_2;
  FUN_100004bb4(&DAT_100a78988,&DAT_10080d7e0);
  FUN_10039ed98(&local_2a8);
  if (0xe < uStack_2a0 >> 0x3c) {
    FUN_100161224(param_5);
    return;
  }
  FUN_100006cc8(local_2a8);
  puVar5 = param_5;
  FUN_100152fd0(param_5,*puVar11);
  if (((ulong)puVar5 & 1) != 0) {
    FUN_100165cfc(param_5,local_310);
    return;
  }
  FUN_1001533d4();
  puVar5 = param_5;
  FUN_10013c050();
  if (puVar5 == (undefined *)0x0) {
    return;
  }
  local_358 = _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveModel;
  puVar7 = param_5;
  FUN_100142834();
  if (puVar7 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar5);
    return;
  }
  uVar6 = 0;
  local_360 = puVar7;
  local_338 = param_4;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar18[-2] = puVar5;
  apcStack_380[1] = "ClipboardItemData";
  apcStack_380[2] = s___pathLength__10088d850 + 0x20;
  apcStack_380[3] = (char *)uVar6;
  FUN_1003fb48c(FUN_10016bad0,puVar18 + -4,0xd0000000000000a4,0x800000010088d870,
                &DAT_d000000000000028,0x80000001008938b0,0x38f,7);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar7 = *(undefined **)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = puVar5;
    if (-1 < (long)puVar5) {
      puVar7 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  local_340 = puVar7;
  local_318 = puVar5;
  if (puVar7 != (undefined *)0x0) {
    if ((long)puVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100165c30);
      (*pcVar2)();
    }
    if (((ulong)puVar5 & 0xc000000000000001) == 0) {
      uVar15 = 1;
      puVar16 = (undefined *)0x0;
      do {
        while ((*(long *)(*(long *)(puVar5 + (long)puVar16 * 8 + 0x20) + 0x88) != 0 &&
               (*(char *)(*(long *)(*(long *)(puVar5 + (long)puVar16 * 8 + 0x20) + 0x88) +
                         _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory) != '\x01')
               )) {
          uVar15 = 0;
          bVar3 = puVar7 + -1 == puVar16;
          puVar16 = puVar16 + 1;
          if (bVar3) goto LAB_1001655c0;
        }
        puVar16 = puVar16 + 1;
      } while (puVar7 != puVar16);
LAB_1001655bc:
      puVar5 = local_318;
      if ((uVar15 & 1) != 0) goto LAB_10016579c;
    }
    else {
      lVar14 = 0;
      uVar13 = 1;
      do {
        local_320 = (undefined *)CONCAT44(local_320._4_4_,uVar13);
        lVar17 = (long)local_340 - lVar14;
        while( true ) {
          lVar8 = lVar14;
          FUN_10016a034();
          lVar19 = *(long *)(lVar8 + 0x88);
          _swift_retain(lVar19);
          _swift_unknownObjectRelease(lVar8);
          if ((lVar19 != 0) &&
             (cVar1 = *(char *)(lVar19 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::
                                         isDirectory), _swift_release(lVar19), cVar1 != '\x01'))
          break;
          lVar14 = lVar14 + 1;
          lVar17 = lVar17 + -1;
          if (lVar17 == 0) {
            uVar15 = (uint)local_320;
            goto LAB_1001655bc;
          }
        }
        uVar13 = 0;
        lVar14 = lVar14 + 1;
      } while (lVar17 != 1);
    }
LAB_1001655c0:
    puVar5 = local_318;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    puVar16 = *(undefined **)(DAT_100b360a8 + 0xa8);
    local_2b0 = puVar16;
    FUN_1005faacc(0);
    puVar7 = local_360;
    local_320 = puVar16;
    _swift_retain();
    FUN_10016c8ec();
    uStack_2a0 = 0;
    local_298 = (code *)CONCAT71(local_298._1_7_,1);
    local_2a8 = puVar7;
    FUN_10016b97c(&local_2a8);
    uStack_b8 = uStack_1e0;
    local_c0 = local_1e8;
    uStack_a8 = uStack_1d0;
    uStack_b0 = local_1d8;
    uStack_98 = uStack_1c0;
    local_a0 = local_1c8;
    local_90 = local_1b8;
    uStack_f8 = uStack_220;
    local_100 = local_228;
    uStack_e8 = uStack_210;
    uStack_f0 = local_218;
    uStack_d8 = uStack_200;
    local_e0 = local_208;
    uStack_c8 = uStack_1f0;
    uStack_d0 = local_1f8;
    uStack_138 = uStack_260;
    local_140 = local_268;
    uStack_128 = uStack_250;
    uStack_130 = local_258;
    uStack_118 = uStack_240;
    local_120 = local_248;
    uStack_108 = uStack_230;
    uStack_110 = local_238;
    uStack_178 = uStack_2a0;
    local_180 = local_2a8;
    puStack_168 = puStack_290;
    local_170 = local_298;
    puStack_158 = puStack_280;
    local_160 = local_288;
    uStack_148 = uStack_270;
    uStack_150 = local_278;
    *puVar18 = 1;
    (**(code **)(lVar20 + 0x68))
              (puVar18,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar4);
    uVar6 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    uVar9 = 0;
    FUN_1000fd494(0);
    FUN_1005d68b4(&local_180,puVar18,uVar6,0,0,uVar9,&PTR_PTR_10099cbd8);
    _swift_release(puVar7);
    (**(code **)(lVar20 + 8))(puVar18,lVar4);
    FUN_1003fb48c(FUN_10016629c,0,0xd0000000000000a4,(ulong)apcStack_380[2] | 0x8000000000000000,
                  &DAT_d000000000000028,(ulong)apcStack_380[1] | 0x8000000000000000,0x392,7);
  }
LAB_10016579c:
  puVar7 = local_360;
  FUN_1001662c8(local_360);
  FUN_1001429dc();
  if (((ulong)param_5 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar5);
    _swift_release(puVar7);
  }
  else {
    local_2b8 = 0;
    local_2b0 = (undefined *)0x0;
    if (local_340 != (undefined *)0x0) {
      if ((long)local_340 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100165c4c);
        (*pcVar2)();
      }
      lVar4 = 0;
      puVar7 = (undefined *)0x0;
      local_348 = (ulong)puVar5 & 0xc000000000000001;
      local_350 = (undefined *)0x0;
      do {
        if (local_348 == 0) {
          puVar16 = *(undefined **)(puVar5 + (long)puVar7 * 8 + 0x20);
          puVar5 = puVar16;
          _swift_retain();
          lVar14 = *(long *)(puVar16 + 0x88);
          if (lVar14 != 0) goto LAB_100165930;
LAB_100165948:
          FUN_1001536e4();
          uVar6 = *(undefined8 *)(puVar5 + 0x48);
          puVar10 = &DAT_10099f358;
          local_320 = puVar5;
          _swift_allocObject(&DAT_10099f358,0x18,7);
          _swift_weakInit(puVar10 + 0x10,puVar5);
          puVar5 = &DAT_10099f778;
          _swift_allocObject(&DAT_10099f778,0x20,7);
          *(undefined **)(puVar5 + 0x10) = puVar10;
          *(undefined **)(puVar5 + 0x18) = puVar16;
          local_288 = thunk_FUN_10014978c;
          local_2a8 = PTR___NSConcreteStackBlock_100995490;
          uStack_2a0 = 0x42000000;
          local_298 = FUN_1000acdb4;
          puStack_290 = &DAT_10099f790;
          puStack_280 = puVar5;
          aBlock = __Block_copy(&local_2a8);
          local_328 = uVar6;
          _swift_retain(puVar10);
          _swift_retain(puVar16);
          lVar14 = local_308;
          local_330 = puVar16;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_308);
          local_2c0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar11 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar5 = &DAT_100a75a98;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar12 = &DAT_100a75aa0;
          FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
          lVar17 = local_2e0;
          lVar20 = local_2f0;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_2f0,&local_2c0,puVar5,puVar12,local_2e0,puVar11);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar14,lVar20,aBlock);
          __Block_release(aBlock);
          _swift_release(local_330);
          _swift_release(local_320);
          (**(code **)(local_2e8 + 8))(lVar20,lVar17);
          (**(code **)(local_300 + 8))(lVar14,lStack_2f8);
          puVar5 = puStack_280;
          _swift_release(puVar10);
          _swift_release(puVar5);
          bVar3 = SCARRY8(lVar4,1);
          lVar4 = lVar4 + 1;
          puVar5 = local_350;
          lVar14 = lVar4;
          puVar16 = local_2b0;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100165c14);
            (*pcVar2)();
          }
        }
        else {
          puVar5 = puVar7;
          FUN_10016a034();
          lVar14 = *(long *)(puVar5 + 0x88);
          puVar16 = puVar5;
          if (lVar14 == 0) goto LAB_100165948;
LAB_100165930:
          if (*(char *)(lVar14 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory) !=
              '\x01') goto LAB_100165948;
          uVar6 = *(undefined8 *)
                   (lVar14 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file + 8);
          (*(code *)PTR____chkstk_darwin_100995498)
                    (*(undefined8 *)
                      (*(long *)(local_338 + local_358) +
                      _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper));
          puVar18[-4] = extraout_x8_02;
          puVar18[-3] = local_310;
          puVar18[-2] = extraout_x12;
          puVar18[-1] = uVar6;
          FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
          _swift_initStackObject();
          _swift_bridgeObjectRetain(uVar6);
          FUN_100615648(FUN_100145654,puVar18 + -6);
          _swift_release();
          _swift_bridgeObjectRelease(uVar6);
          _swift_release(puVar16);
          puVar5 = local_350 + 1;
          lVar14 = local_2b8;
          puVar16 = local_350 + 1;
          if (SCARRY8((long)local_350,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100165c18);
            (*pcVar2)();
          }
        }
        local_2b0 = puVar16;
        local_2b8 = lVar14;
        local_350 = puVar5;
        puVar7 = puVar7 + 1;
        puVar5 = local_318;
      } while (local_340 != puVar7);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    puVar18[-4] = puVar5;
    puVar18[-3] = &local_2b0;
    puVar18[-2] = &local_2b8;
    FUN_1003fb48c(FUN_10016bad8,puVar18 + -6,0xd0000000000000a4,
                  (ulong)apcStack_380[2] | 0x8000000000000000,&DAT_d000000000000028,
                  (ulong)apcStack_380[1] | 0x8000000000000000,0x3a1,7);
    _swift_bridgeObjectRelease(puVar5);
    _swift_release(local_360);
  }
  return;
}

