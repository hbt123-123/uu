// rea decompile_all
// name: FUN_10004b0d0
// address: 0x10004b0d0
// body: available
// range: 0x10004b0d0-0x10004b5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004b0d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long unaff_x21;
  long alStack_1c0 [12];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long lStack_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar8 = &DAT_100102f40;
  FUN_10000eb08(&DAT_100102f40,&DAT_1000cfa40);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar12 = (undefined8 *)((long)alStack_1c0 + lVar4);
  puVar9 = &_OBJC_CLASS___NSProcessInfo;
  _objc_msgSend(&_OBJC_CLASS___NSProcessInfo,"processInfo");
  _objc_msgSend();
  puVar8 = PTR___sSSN_1000f02f8;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar9,PTR___sSSN_1000f02f8,PTR___sSSN_1000f02f8,PTR___sSSSHsWP_1000f0308);
  if (*(long *)(puVar9 + 0x10) == 0) {
LAB_10004b228:
    _swift_bridgeObjectRelease(puVar9);
    iVar7 = _isatty(0);
    if (iVar7 == 1) {
      puVar9 = &DAT_100102ba0;
      FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
      _swift_initStackObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined8 *)(puVar9 + 0x20) = 0x656d616e;
      *(undefined8 *)(puVar9 + 0x28) = 0xe400000000000000;
      local_130 = CONCAT71(local_130._1_7_,param_3) & 0xffffffffffffff01;
      local_140 = param_1;
      lStack_138 = param_2;
      FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
      FUN_10005ba24(alStack_1c0 + 8);
      *(undefined **)(puVar9 + 0x48) = puVar8;
      lVar11 = 0;
      if (alStack_1c0[9] != 0) {
        lVar11 = alStack_1c0[8];
      }
      lVar2 = -0x2000000000000000;
      if (alStack_1c0[9] != 0) {
        lVar2 = alStack_1c0[9];
      }
      *(long *)(puVar9 + 0x30) = lVar11;
      *(long *)(puVar9 + 0x38) = lVar2;
      lVar11 = 0;
      FUN_100020760();
      _swift_initStaticObject();
      puVar8 = puVar9;
      FUN_100020900(puVar9);
      _swift_setDeallocating(puVar9);
      FUN_10001fc18(puVar9 + 0x20,&DAT_100102bb0,&DAT_1000d26e0);
      uVar14 = 0x636174744178756d;
      uVar13 = 0xe900000000000068;
      FUN_1000201c8(0x636174744178756d,0xe900000000000068,puVar8,0,1);
      _swift_bridgeObjectRelease(puVar8);
      uVar6 = DAT_100105680;
      if (uVar13 >> 0x3c < 0xf) {
        FUN_1000401a4(puVar12,uVar14,uVar13,0);
        if (unaff_x21 != 0) {
          FUN_10002ed24(uVar14,uVar13);
          return;
        }
        lStack_138 = *(long *)((long)alStack_1c0 + lVar4 + 0x10);
        local_140 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 8);
        uStack_128 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x20);
        local_130 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x18);
        uStack_118 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x30);
        local_120 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x28);
        uStack_108 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x40);
        uStack_110 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x38);
        if (lStack_138 == 0) {
          puVar10 = (undefined4 *)0x69;
          FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,DAT_100105680);
          FUN_1000607a4();
          uVar3 = *puVar10;
          FUN_10002c948();
          _swift_allocError(&DAT_1000f78f0,puVar10,0,0);
          *puVar10 = uVar3;
          _swift_willThrow();
          FUN_10002ed24(uVar14,uVar13);
          puVar8 = &DAT_100102f40;
          puVar9 = &DAT_1000cfa40;
        }
        else {
          local_a8 = local_140;
          lStack_a0 = lStack_138;
          uStack_90 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x20);
          local_98 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x18);
          uStack_80 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x30);
          local_88 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x28);
          uStack_70 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x40);
          local_78 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x38);
          alStack_1c0[9] = *(long *)((long)alStack_1c0 + lVar4 + 0x10);
          alStack_1c0[8] = *(undefined8 *)((long)alStack_1c0 + lVar4 + 8);
          alStack_1c0[0xb] = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x20);
          alStack_1c0[10] = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x18);
          uStack_158 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x30);
          local_160 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x28);
          uStack_148 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x40);
          uStack_150 = *(undefined8 *)((long)alStack_1c0 + lVar4 + 0x38);
          FUN_10001fe38(alStack_1c0 + 8,alStack_1c0);
          FUN_100049a2c(&local_a8);
          FUN_10001fc18(puVar12,&DAT_100102f40,&DAT_1000cfa40);
          FUN_10002ed24(uVar14,uVar13);
          puVar8 = &DAT_1001038d8;
          puVar9 = &DAT_1000d3200;
          puVar12 = &local_140;
        }
        FUN_10001fc18(puVar12,puVar8,puVar9);
        return;
      }
      uVar14 = *(undefined8 *)(lVar11 + 0x10);
      puVar10 = *(undefined4 **)(lVar11 + 0x30);
      lVar4 = *(long *)(lVar11 + 0x20);
      uVar5 = *(undefined8 *)(lVar11 + 0x18);
      if (*(long *)(lVar11 + 0x20) == 0) {
        uVar14 = 0x66;
        puVar10 = (undefined4 *)0x80000001000c45b0;
        lVar4 = -0x7ffffffefff3ba80;
        uVar5 = 0xd00000000000002e;
      }
      FUN_10002c918();
      FUN_100022760(uVar14,uVar5,lVar4,uVar6);
      _swift_bridgeObjectRelease(lVar4);
      _swift_bridgeObjectRelease();
      goto LAB_10004b408;
    }
    pcVar1 = "lterm attach requires an interactive terminal";
    uVar14 = 0xd00000000000002d;
    puVar10 = (undefined4 *)0x6c;
  }
  else {
    _swift_bridgeObjectRetain(puVar9);
    uVar13 = 0xeb0000000058554d;
    FUN_100020780(0x5f4e495f43595555);
    _swift_bridgeObjectRelease(puVar9);
    if ((uVar13 & 1) == 0) goto LAB_10004b228;
    _swift_bridgeObjectRelease(puVar9);
    pcVar1 = "Local terminal operations are not allowed inside a UU session";
    uVar14 = 0xd00000000000003d;
    puVar10 = (undefined4 *)0x7a;
  }
  FUN_100022760(puVar10,uVar14,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,DAT_100105680);
LAB_10004b408:
  FUN_1000607a4();
  uVar3 = *puVar10;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar10,0,0);
  *puVar10 = uVar3;
  _swift_willThrow();
  return;
}

