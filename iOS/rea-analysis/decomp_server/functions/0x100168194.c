// rea decompile_all
// name: FUN_100168194
// address: 0x100168194
// body: available
// range: 0x100168194-0x1001689cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100168194(char *param_1,long param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long extraout_x8;
  long lVar15;
  long lVar16;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 *puVar28;
  undefined8 auStack_360 [4];
  ulong local_340;
  undefined8 *local_338;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  code *local_2b8;
  undefined *puStack_2b0;
  code *local_2a8;
  undefined *local_2a0;
  undefined8 *local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined7 uStack_287;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
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
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)&local_340 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar24 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  puVar26 = (undefined8 *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  cVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_188,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar18 = _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
  if (param_2 != 0) {
    _swift_beginAccess(param_2 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,auStack_1a0,0,0
                      );
    uVar27 = param_3;
    FUN_100152fd0(param_3,*(undefined8 *)(param_2 + lVar18));
    if ((uVar27 & 1) != 0) {
      if (cVar1 == '\0') {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(int *)(puVar26 + -2) = (int)param_3;
        FUN_1003fb4ec(FUN_10016bb70,puVar26 + -4,0xd0000000000000a4,0x800000010088d870,
                      0xd000000000000029,0x80000001008939f0,0x40e,0);
        FUN_100161224(param_3);
        return;
      }
      uVar27 = param_4 & 0xffffffffffffff8;
      local_338 = puVar26;
      if (param_4 >> 0x3e == 0) {
        uVar22 = *(ulong *)(uVar27 + 0x10);
      }
      else {
        uVar22 = uVar27;
        if ((long)param_4 < 0) {
          uVar22 = param_4;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar26 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar22 != 0) {
        uVar20 = 0;
        do {
          while( true ) {
            if ((param_4 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar27 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100168990);
                (*pcVar2)();
              }
              uVar25 = *(ulong *)(param_4 + uVar20 * 8 + 0x20);
              _swift_retain(uVar25);
            }
            else {
              uVar25 = uVar20;
              FUN_10016a034(uVar20,param_4);
            }
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10016898c);
              (*pcVar2)();
            }
            uVar23 = uVar20 + 1;
            lVar18 = *(long *)(uVar25 + 0x88);
            if (((lVar18 == 0) ||
                ((*(byte *)(lVar18 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory
                           ) & 1) != 0)) ||
               (*(long *)(lVar18 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize) ==
                0)) break;
            puVar6 = puVar26;
            _swift_isUniquelyReferenced_nonNull_native();
            local_170 = puVar26;
            if (((ulong)puVar6 & 1) == 0) {
              FUN_100070008(0,puVar26[2] + 1,1);
            }
            uVar20 = local_170[2];
            uVar19 = uVar20;
            if ((ulong)local_170[3] >> 1 <= uVar20) {
              local_340 = uVar20;
              FUN_100070008(1 < (ulong)local_170[3],uVar20 + 1,1);
              uVar19 = local_340;
            }
            local_170[2] = uVar20 + 1;
            local_170[uVar19 + 4] = uVar25;
            puVar26 = local_170;
            uVar20 = uVar23;
            if (uVar23 == uVar22) goto LAB_100168574;
          }
          _swift_release(uVar25);
          uVar20 = uVar20 + 1;
        } while (uVar23 != uVar22);
      }
LAB_100168574:
      uVar13 = (uint)((ulong)puVar26 >> 0x3e) & 1;
      if ((long)puVar26 < 0) {
        uVar13 = 1;
      }
      if (uVar13 == 1) {
        puVar6 = puVar26;
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      else {
        puVar6 = (undefined8 *)puVar26[2];
      }
      if (puVar6 != (undefined8 *)0x0) {
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        local_2c8 = *(undefined **)(DAT_100b360a8 + 0xa8);
        FUN_1005faacc(0);
        _swift_retain();
        FUN_10016c8ec();
        uStack_290 = 0;
        local_288 = 1;
        local_298 = param_5;
        FUN_10016b97c(&local_298);
        puVar6 = local_338;
        uStack_a8 = uStack_1d0;
        local_b0 = uStack_1d8;
        uStack_98 = uStack_1c0;
        uStack_a0 = local_1c8;
        uStack_88 = uStack_1b0;
        local_90 = uStack_1b8;
        uStack_e8 = uStack_210;
        local_f0 = uStack_218;
        uStack_d8 = uStack_200;
        uStack_e0 = local_208;
        uStack_c8 = uStack_1f0;
        local_d0 = uStack_1f8;
        uStack_b8 = uStack_1e0;
        uStack_c0 = local_1e8;
        uStack_128 = uStack_250;
        local_130 = local_258;
        uStack_118 = uStack_240;
        uStack_120 = local_248;
        local_80 = local_1a8;
        uStack_108 = uStack_230;
        local_110 = uStack_238;
        uStack_f8 = uStack_220;
        uStack_100 = local_228;
        uStack_160 = CONCAT71(uStack_287,local_288);
        uStack_168 = uStack_290;
        local_170 = local_298;
        uStack_158 = uStack_280;
        uStack_148 = uStack_270;
        local_150 = local_278;
        uStack_138 = uStack_260;
        uStack_140 = local_268;
        *local_338 = 1;
        (**(code **)(lVar24 + 0x68))
                  (puVar6,*(undefined4 *)
                           PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar5);
        uVar7 = 0;
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        uVar8 = 0;
        FUN_1000fd494(0);
        FUN_1005d68b4(&local_170,puVar6,uVar7,0,0,uVar8,&PTR_PTR_10099cbd8);
        _swift_release(param_5);
        (**(code **)(lVar24 + 8))(puVar6,lVar5);
        if (uVar13 == 0) {
          puVar6 = (undefined8 *)puVar26[2];
        }
        else {
          puVar6 = puVar26;
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (puVar6 != (undefined8 *)0x0) {
          if ((long)puVar6 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001689cc);
            (*pcVar2)();
          }
          puVar28 = (undefined8 *)0x0;
          local_340 = (ulong)puVar26 & 0xc000000000000001;
          local_338 = puVar6;
          do {
            if (local_340 == 0) {
              puVar21 = (undefined8 *)puVar26[(long)puVar28 + 4];
              puVar6 = puVar21;
              _swift_retain();
            }
            else {
              puVar6 = puVar28;
              FUN_10016a034();
              puVar21 = puVar6;
            }
            puVar28 = (undefined8 *)((long)puVar28 + 1);
            FUN_1001536e4();
            puVar9 = &DAT_10099f358;
            _swift_allocObject(&DAT_10099f358,0x18,7);
            _swift_weakInit(puVar9 + 0x10,puVar6);
            puVar10 = &DAT_10099f818;
            _swift_allocObject(&DAT_10099f818,0x20,7);
            *(undefined **)(puVar10 + 0x10) = puVar9;
            *(undefined8 **)(puVar10 + 0x18) = puVar21;
            local_2a8 = thunk_FUN_10014978c;
            local_2c8 = PTR___NSConcreteStackBlock_100995490;
            local_2c0 = 0x42000000;
            local_2b8 = FUN_1000acdb4;
            puStack_2b0 = &DAT_10099f830;
            local_2a0 = puVar10;
            aBlock = __Block_copy(&local_2c8);
            _swift_retain(puVar9);
            _swift_retain(puVar21);
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
            local_2d0 = PTR___swiftEmptyArrayStorage_100995ea0;
            puVar11 = &DAT_100a75a90;
            FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
            puVar10 = &DAT_100a75a98;
            FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
            puVar12 = &DAT_100a75aa0;
            FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (lVar15,&local_2d0,puVar10,puVar12,lVar3,puVar11);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar17,lVar15,aBlock);
            __Block_release(aBlock);
            _swift_release(puVar21);
            _swift_release(puVar6);
            (**(code **)(lVar14 + 8))(lVar15,lVar3);
            (**(code **)(lVar16 + 8))(lVar17,lVar4);
            puVar10 = local_2a0;
            _swift_release(puVar9);
            _swift_release(puVar10);
          } while (local_338 != puVar28);
        }
        _swift_release(puVar26);
        return;
      }
      _swift_release(puVar26);
      FUN_1001533d4();
      FUN_10013fcd8(param_3,0);
      return;
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(int *)(puVar26 + -2) = (int)param_3;
  FUN_1003fb48c(FUN_10016bb68,puVar26 + -4,0xd0000000000000a4,0x800000010088d870,0xd000000000000029,
                0x80000001008939f0,0x40a,0);
  return;
}

