// rea decompile_all
// name: FUN_1000a749c
// address: 0x1000a749c
// body: available
// range: 0x1000a749c-0x1000a7cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16]
FUN_1000a749c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar10;
  long extraout_x12;
  undefined8 extraout_x12_00;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x20;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_230 [16];
  undefined8 auStack_220 [2];
  undefined *local_210;
  long local_208;
  long local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined *local_128;
  byte local_120;
  int local_a8 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined *puStack_88;
  byte local_80;
  
  lVar5 = 0;
  local_1f8 = param_4;
  local_1f0 = param_5;
  local_188 = param_2;
  local_180 = param_3;
  __s10Foundation12CharacterSetVMa();
  local_208 = *(long *)(lVar5 + -8);
  local_200 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_208 + 0x40));
  puVar7 = (undefined *)((long)&local_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  local_210 = puVar7;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  uVar16 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = uVar16 - extraout_x12;
  __s10Foundation4DateVACycfC(uVar16);
  __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar14,param_1);
  pcVar10 = *(code **)(lVar11 + 8);
  local_1e8 = uVar16;
  (*pcVar10)(uVar16,lVar5);
  uVar6 = 0;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  local_198 = *(undefined8 *)(unaff_x20 + 0x60);
  local_1a0 = *(undefined8 *)(unaff_x20 + 0x68);
  local_1a8 = *(undefined8 *)(unaff_x20 + 0x40);
  local_1b0 = *(undefined8 *)(unaff_x20 + 0x48);
  local_1b8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_1c8 = 10;
  local_1d0 = 5;
  uStack_1d8 = 8;
  local_1e0 = 4;
  local_190 = uVar6;
  do {
    puVar7 = &DAT_100a750f8;
    FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
    puVar13 = puVar7;
    _swift_initStackObject();
    uVar9 = local_180;
    *(undefined8 *)(puVar13 + 0x18) = uStack_1c8;
    *(undefined8 *)(puVar13 + 0x10) = local_1d0;
    *(undefined8 *)(puVar13 + 0x20) = 0x696c632d7473696c;
    *(undefined8 *)(puVar13 + 0x28) = 0xec00000073746e65;
    *(undefined8 *)(puVar13 + 0x30) = 0x742d;
    *(undefined8 *)(puVar13 + 0x38) = 0xe200000000000000;
    *(undefined8 *)(puVar13 + 0x40) = local_188;
    *(undefined8 *)(puVar13 + 0x48) = local_180;
    *(undefined8 *)(puVar13 + 0x50) = 0x462d;
    *(undefined8 *)(puVar13 + 0x58) = 0xe200000000000000;
    *(undefined8 *)(puVar13 + 0x60) = 0x746e65696c637b23;
    *(undefined8 *)(puVar13 + 0x68) = 0xed00007d7974745f;
    _swift_allocObject(puVar7,0x60,7);
    uVar1 = local_1a0;
    uVar6 = local_1b0;
    *(undefined8 *)(puVar7 + 0x18) = uStack_1d8;
    *(undefined8 *)(puVar7 + 0x10) = local_1e0;
    *(undefined8 *)(puVar7 + 0x20) = 0x532d;
    *(undefined8 *)(puVar7 + 0x28) = 0xe200000000000000;
    *(undefined8 *)(puVar7 + 0x30) = local_198;
    *(undefined8 *)(puVar7 + 0x38) = local_1a0;
    *(undefined8 *)(puVar7 + 0x40) = 0x662d;
    *(undefined8 *)(puVar7 + 0x48) = 0xe200000000000000;
    *(undefined8 *)(puVar7 + 0x50) = local_1a8;
    *(undefined8 *)(puVar7 + 0x58) = local_1b0;
    local_148 = puVar7;
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(puVar13);
    FUN_10005f920();
    puVar7 = local_148;
    __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ(&local_148,local_1b8);
    if (((ulong)local_148 & 0x100) == 0) {
      FUN_1000a7cf4(local_a8,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      puVar7 = local_90;
      puVar15 = local_a0;
      uVar6 = uStack_98;
      puVar17 = puStack_88;
      iVar19 = local_a8[0];
      bVar4 = local_80;
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)(lVar14 + -0x10) = extraout_x12_00;
      *(undefined **)(lVar14 + -8) = puVar7;
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (&local_148,FUN_1000ab868,lVar14 + -0x20,&DAT_10099a388);
      _swift_bridgeObjectRelease(puVar7);
      puVar7 = local_130;
      puVar15 = local_140;
      uVar6 = local_138;
      puVar17 = local_128;
      iVar19 = (int)local_148;
      bVar4 = local_120;
    }
    _swift_setDeallocating(puVar13);
    _swift_arrayDestroy(puVar13 + 0x20,*(undefined8 *)(puVar13 + 0x10),PTR___sSSN_1009957f8);
    if ((bVar4 & 1) != 0) {
      _swift_bridgeObjectRelease(puVar17);
      _swift_bridgeObjectRelease(uVar6);
      puVar13 = (undefined *)0x8000000100881170;
      puVar7 = (undefined *)0x1000000000000019;
      goto LAB_1000a7ca8;
    }
    if (iVar19 == 1) {
      _swift_bridgeObjectRelease(puVar17);
      _swift_bridgeObjectRelease(uVar6);
    }
    else {
      if (iVar19 != 0) {
        puVar8 = puVar17;
        local_148 = puVar7;
        local_140 = puVar17;
        _swift_bridgeObjectRetain(puVar17);
        puVar15 = local_210;
        __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(local_210);
        FUN_10009ff0c();
        puVar7 = puVar15;
        puVar13 = PTR___sSSN_1009957f8;
        __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                  (puVar15,PTR___sSSN_1009957f8,puVar8);
        (**(code **)(local_208 + 8))(puVar15,local_200);
        _swift_bridgeObjectRelease(puVar17);
        uVar16 = (ulong)puVar7 & 0xffffffffffff;
        if (((ulong)puVar13 & 0x2000000000000000) != 0) {
          uVar16 = (ulong)puVar13 >> 0x38 & 0xf;
        }
        if (uVar16 == 0) {
          _swift_bridgeObjectRelease(puVar13);
          local_148 = (undefined *)0x0;
          local_140 = (undefined *)0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x17);
          _swift_bridgeObjectRelease(local_140);
          local_148 = (undefined *)0x696c632d7473696c;
          local_140 = (undefined *)0xec00000073746e65;
          __sSS6appendyySSF(0x1000000000000013,0x8000000100880a50);
          puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
          __ss23CustomStringConvertibleP11descriptionSSvgTj
                    (PTR___ss5Int32VN_100995c78,
                     PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar17);
          _swift_bridgeObjectRelease(uVar6);
          _swift_bridgeObjectRelease(puVar7);
          puVar13 = local_140;
          puVar7 = local_148;
        }
        else {
          _swift_bridgeObjectRelease(puVar17);
          _swift_bridgeObjectRelease(uVar6);
        }
        goto LAB_1000a7ca8;
      }
      local_148 = (undefined *)0xa;
      local_140 = (undefined *)0xe100000000000000;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined ***)(lVar14 + -0x10) = &local_148;
      _swift_bridgeObjectRetain(uVar6);
      lVar11 = 0x7fffffffffffffff;
      FUN_10000b9ac(0x7fffffffffffffff,1,FUN_1000ab850,lVar14 + -0x20,puVar15,uVar6);
      _swift_bridgeObjectRelease(puVar17);
      _swift_bridgeObjectRelease(uVar6);
      uVar16 = *(ulong *)(lVar11 + 0x10);
      if (uVar16 == 0) {
        _swift_bridgeObjectRelease(lVar11);
        puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        local_148 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10006fae0(0,uVar16,0);
        uVar12 = 0;
        puVar18 = (undefined8 *)(lVar11 + 0x38);
        do {
          puVar7 = local_148;
          if (*(ulong *)(lVar11 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1000a7cf4);
            (*pcVar10)();
          }
          uVar6 = puVar18[-3];
          uVar9 = puVar18[-2];
          uVar1 = puVar18[-1];
          uVar3 = *puVar18;
          _swift_bridgeObjectRetain(uVar3);
          __sSS14_fromSubstringySSSshFZ(uVar6,uVar9,uVar1,uVar3);
          _swift_bridgeObjectRelease(uVar3);
          uVar2 = *(ulong *)(puVar7 + 0x10);
          local_148 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
            FUN_10006fae0(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
          }
          puVar7 = local_148;
          uVar12 = uVar12 + 1;
          *(ulong *)(local_148 + 0x10) = uVar2 + 1;
          *(undefined8 *)(local_148 + uVar2 * 0x10 + 0x20) = uVar6;
          *(undefined8 *)(local_148 + uVar2 * 0x10 + 0x28) = uVar9;
          puVar18 = puVar18 + 4;
        } while (uVar16 != uVar12);
        _swift_bridgeObjectRelease(lVar11);
      }
      local_148 = local_1f8;
      local_140 = local_1f0;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined ***)(lVar14 + -0x10) = &local_148;
      uVar16 = 0;
      FUN_100152a38(FUN_10009ff84,lVar14 + -0x20,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      if ((uVar16 & 1) != 0) {
        puVar13 = (undefined *)0x0;
        puVar7 = (undefined *)0x0;
        goto LAB_1000a7ca8;
      }
    }
    NSThread::sleepForTimeInterval_
              ((ID)&_OBJC_CLASS___NSThread,"sleepForTimeInterval:",0x3fa999999999999a);
    uVar16 = local_1e8;
    __s10Foundation4DateVACycfC(local_1e8);
    uVar12 = uVar16;
    __s10Foundation4DateV1loiySbAC_ACtFZ(uVar16,lVar14);
    (*pcVar10)(uVar16,lVar5);
  } while ((uVar12 & 1) != 0);
  puVar13 = (undefined *)0x8000000100881150;
  puVar7 = (undefined *)0x100000000000001f;
LAB_1000a7ca8:
  (*pcVar10)(lVar14,lVar5);
  auVar20._8_8_ = puVar13;
  auVar20._0_8_ = puVar7;
  return auVar20;
}

