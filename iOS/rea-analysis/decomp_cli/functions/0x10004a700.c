// rea decompile_all
// name: FUN_10004a700
// address: 0x10004a700
// body: available
// range: 0x10004a700-0x10004ad83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_10004a700(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar15;
  undefined8 uStack_210;
  long alStack_200 [8];
  ulong local_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = &DAT_100102f40;
  FUN_10000eb08(&DAT_100102f40,&DAT_1000cfa40);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = -extraout_x8;
  puVar10 = (undefined8 *)((long)&uStack_210 + lVar15);
  lStack_178 = unaff_x20[1];
  local_180 = *unaff_x20;
  local_170._0_1_ = *(undefined1 *)(unaff_x20 + 2);
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_1c0);
  uVar13 = 0;
  if (lStack_1b8 != 0) {
    uVar13 = local_1c0;
  }
  lVar1 = -0x2000000000000000;
  if (lStack_1b8 != 0) {
    lVar1 = lStack_1b8;
  }
  uStack_b8 = unaff_x20[4];
  local_c0 = unaff_x20[3];
  local_b0 = *(undefined1 *)(unaff_x20 + 5);
  lStack_178 = unaff_x20[4];
  local_180 = unaff_x20[3];
  local_170._0_1_ = *(undefined1 *)(unaff_x20 + 5);
  puVar5 = &DAT_1001038d0;
  FUN_10000eb08(&DAT_1001038d0,&DAT_1000d31f8);
  FUN_10005ba24(&local_1c0);
  lVar8 = lStack_1b8;
  if ((local_1c0 == 0x68737a) && (lStack_1b8 == -0x1d00000000000000)) {
LAB_10004a814:
    _swift_bridgeObjectRelease(lStack_1b8);
LAB_10004a848:
    puVar6 = &_OBJC_CLASS___NSProcessInfo;
    _objc_msgSend(&_OBJC_CLASS___NSProcessInfo,"processInfo");
    _objc_msgSend();
    puVar9 = PTR___sSSN_1000f02f8;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar6,PTR___sSSN_1000f02f8,PTR___sSSN_1000f02f8,PTR___sSSSHsWP_1000f0308);
    if (*(long *)(puVar6 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar6);
      uVar11 = 0xeb0000000058554d;
      FUN_100020780(0x5f4e495f43595555);
      if ((uVar11 & 1) != 0) {
        _swift_bridgeObjectRelease(lVar1);
        _swift_bridgeObjectRelease_n(puVar6,2);
        uVar12 = 0xd00000000000003d;
        uVar14 = 0x80000001000c4cf0;
        puVar7 = (undefined4 *)0x7a;
        goto LAB_10004ab28;
      }
      _swift_bridgeObjectRelease(puVar6);
    }
    _swift_bridgeObjectRelease(puVar6);
    iVar4 = _isatty(0);
    if (iVar4 == 1) {
      lVar8 = 0;
      FUN_100020760();
      _swift_initStaticObject();
      puVar6 = &DAT_100102ba0;
      FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = 4;
      *(undefined8 *)(puVar6 + 0x10) = 2;
      *(undefined8 *)(puVar6 + 0x20) = 0x656d616e;
      *(undefined8 *)(puVar6 + 0x28) = 0xe400000000000000;
      *(ulong *)(puVar6 + 0x30) = uVar13;
      *(long *)(puVar6 + 0x38) = lVar1;
      *(undefined **)(puVar6 + 0x48) = puVar9;
      *(undefined8 *)(puVar6 + 0x50) = 0x6c6c656873;
      *(undefined8 *)(puVar6 + 0x58) = 0xe500000000000000;
      lStack_178 = uStack_b8;
      local_180 = local_c0;
      local_170._0_1_ = local_b0;
      FUN_10005ba24(&local_1c0,puVar5);
      *(undefined **)(puVar6 + 0x78) = puVar9;
      *(ulong *)(puVar6 + 0x60) = local_1c0;
      *(long *)(puVar6 + 0x68) = lStack_1b8;
      puVar9 = puVar6;
      FUN_100020900(puVar6);
      _swift_setDeallocating(puVar6);
      puVar5 = &DAT_100102bb0;
      FUN_10000eb08(&DAT_100102bb0,&DAT_1000d26e0);
      _swift_arrayDestroy(puVar6 + 0x20,2,puVar5);
      uVar12 = 0x77654e78756d;
      uVar13 = 0xe600000000000000;
      FUN_1000201c8(0x77654e78756d,0xe600000000000000,puVar9,0,1);
      _swift_bridgeObjectRelease(puVar9);
      uVar3 = DAT_100105680;
      if (uVar13 >> 0x3c < 0xf) {
        FUN_1000401a4(puVar10,uVar12,uVar13,0);
        if (unaff_x21 != 0) {
          FUN_10002ed24(uVar12,uVar13);
          return;
        }
        lStack_178 = *(long *)((long)alStack_200 + lVar15);
        local_180 = *(undefined8 *)(&stack0xfffffffffffffdf8 + lVar15);
        uStack_168 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x10U);
        local_170 = *(undefined8 *)((long)alStack_200 + lVar15 + 8U);
        uStack_158 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x20U);
        local_160 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x18U);
        uStack_148 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x30U);
        uStack_150 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x28U);
        if (lStack_178 == 0) {
          puVar7 = (undefined4 *)0x69;
          FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,DAT_100105680);
          FUN_1000607a4();
          uVar2 = *puVar7;
          FUN_10002c948();
          _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
          *puVar7 = uVar2;
          _swift_willThrow();
          FUN_10002ed24(uVar12,uVar13);
          puVar5 = &DAT_100102f40;
          puVar9 = &DAT_1000cfa40;
        }
        else {
          local_a8 = *(undefined8 *)(&stack0xfffffffffffffdf8 + lVar15);
          lStack_a0 = lStack_178;
          uStack_90 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x10U);
          local_98 = *(undefined8 *)((long)alStack_200 + lVar15 + 8U);
          uStack_80 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x20U);
          local_88 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x18U);
          uStack_70 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x30U);
          local_78 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x28U);
          lStack_1b8 = *(long *)((long)alStack_200 + lVar15);
          local_1c0 = *(ulong *)(&stack0xfffffffffffffdf8 + lVar15);
          uStack_1a8 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x10U);
          uStack_1b0 = *(undefined8 *)((long)alStack_200 + lVar15 + 8U);
          uStack_198 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x20U);
          local_1a0 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x18U);
          uStack_188 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x30U);
          uStack_190 = *(undefined8 *)((long)alStack_200 + lVar15 + 0x28U);
          FUN_10001fe38(&local_1c0,alStack_200);
          FUN_100049a2c(&local_a8);
          FUN_10001fc18(puVar10,&DAT_100102f40,&DAT_1000cfa40);
          FUN_10002ed24(uVar12,uVar13);
          puVar5 = &DAT_1001038d8;
          puVar9 = &DAT_1000d3200;
          puVar10 = &local_180;
        }
        FUN_10001fc18(puVar10,puVar5,puVar9);
        return;
      }
      uVar14 = *(undefined8 *)(lVar8 + 0x10);
      uVar12 = *(undefined8 *)(lVar8 + 0x18);
      lVar15 = *(long *)(lVar8 + 0x20);
      puVar7 = *(undefined4 **)(lVar8 + 0x30);
      if (lVar15 == 0) {
        lVar15 = -0x7ffffffefff3ba80;
        puVar7 = (undefined4 *)0x80000001000c45b0;
        uVar12 = 0xd00000000000002e;
        uVar14 = 0x66;
      }
      FUN_10002c918();
      FUN_100022760(uVar14,uVar12,lVar15,uVar3);
      _swift_bridgeObjectRelease(lVar15);
      _swift_bridgeObjectRelease();
      goto LAB_10004ab2c;
    }
    _swift_bridgeObjectRelease(lVar1);
    uVar12 = 0xd00000000000002a;
    uVar14 = 0x80000001000c7210;
    puVar7 = (undefined4 *)0x6c;
  }
  else {
    uVar11 = local_1c0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (local_1c0,lStack_1b8,0x68737a,0xe300000000000000,0);
    _swift_bridgeObjectRelease(lVar8);
    if ((uVar11 & 1) != 0) goto LAB_10004a848;
    lStack_178 = unaff_x20[4];
    local_180 = unaff_x20[3];
    local_170._0_1_ = *(undefined1 *)(unaff_x20 + 5);
    FUN_10005ba24(&local_1c0,puVar5);
    lVar8 = lStack_1b8;
    if ((local_1c0 == 0x68736162) && (lStack_1b8 == -0x1c00000000000000)) goto LAB_10004a814;
    uVar11 = local_1c0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (local_1c0,lStack_1b8,0x68736162,0xe400000000000000,0);
    _swift_bridgeObjectRelease(lVar8);
    if ((uVar11 & 1) != 0) goto LAB_10004a848;
    _swift_bridgeObjectRelease(lVar1);
    uVar12 = 0xd00000000000002b;
    uVar14 = 0x80000001000c71e0;
    puVar7 = (undefined4 *)0x2;
  }
LAB_10004ab28:
  FUN_100022760(puVar7,uVar12,uVar14,DAT_100105680);
LAB_10004ab2c:
  FUN_1000607a4();
  uVar2 = *puVar7;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
  *puVar7 = uVar2;
  _swift_willThrow();
  return;
}

