// rea decompile_all
// name: FUN_1000562c0
// address: 0x1000562c0
// body: available
// range: 0x1000562c0-0x100056677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000562c0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar9 = *(undefined **)(unaff_x20 + 0x20);
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (puVar9 != (undefined *)0x0) {
    puVar6 = puVar9;
  }
  uVar5 = *(ulong *)(puVar6 + 0x10);
  _swift_bridgeObjectRetain_n(puVar9,3);
  if (uVar5 != 0) {
    uVar12 = 0;
    local_78 = 0x80000001000c9c90;
    puVar8 = (undefined8 *)(puVar6 + 0x30);
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100056670);
        (*pcVar2)();
      }
      local_70 = puVar8[-1];
      uVar7 = *puVar8;
      if (*(char *)(puVar8 + -2) != '\0') {
        if (*(char *)(puVar8 + -2) == '\x02') {
          uVar4 = 0xd000000000000012;
          uVar10 = local_78;
          goto LAB_100056364;
        }
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(puVar9);
        puVar9 = (undefined *)0xe500000000000000;
LAB_1000564ac:
        _swift_bridgeObjectRelease(puVar9);
        uVar5 = *(ulong *)(puVar6 + 0x10);
        if (uVar5 == 0) goto LAB_100056564;
        uVar12 = 0;
        puVar8 = (undefined8 *)(puVar6 + 0x30);
        goto LAB_1000564c0;
      }
      uVar10 = 0xe400000000000000;
      uVar4 = 0x676e6f6c;
LAB_100056364:
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,uVar10,0x74726f6873,0xe500000000000000,0);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRelease(uVar10);
      if ((uVar4 & 1) != 0) {
        _swift_bridgeObjectRelease(puVar6);
        goto LAB_1000564ac;
      }
      uVar12 = uVar12 + 1;
      _swift_bridgeObjectRelease(uVar7);
      puVar8 = puVar8 + 3;
    } while (uVar5 != uVar12);
  }
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(puVar9);
  uVar5 = *(ulong *)(puVar6 + 0x10);
  if (uVar5 != 0) {
    uVar12 = 0;
    puVar8 = (undefined8 *)(puVar6 + 0x30);
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100056674);
        (*pcVar2)();
      }
      local_70 = puVar8[-1];
      uVar7 = *puVar8;
      if (*(char *)(puVar8 + -2) == '\x01') {
        uVar10 = 0xe500000000000000;
        uVar4 = 0x74726f6873;
      }
      else {
        if (*(char *)(puVar8 + -2) != '\x02') {
          _swift_bridgeObjectRetain(uVar7);
          _swift_bridgeObjectRelease(puVar6);
          puVar6 = (undefined *)0xe400000000000000;
          goto LAB_100056564;
        }
        uVar4 = 0xd000000000000012;
        uVar10 = 0x80000001000c9c90;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,uVar10,0x676e6f6c,0xe400000000000000,0);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRelease(uVar10);
      if ((uVar4 & 1) != 0) goto LAB_100056564;
      uVar12 = uVar12 + 1;
      _swift_bridgeObjectRelease(uVar7);
      puVar8 = puVar8 + 3;
    } while (uVar5 != uVar12);
  }
  _swift_bridgeObjectRelease(puVar6);
  local_70 = 0;
  uVar7 = 0;
LAB_100056644:
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = local_70;
  return auVar13;
LAB_1000564c0:
  do {
    if (*(ulong *)(puVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100056678);
      (*pcVar2)();
    }
    uVar10 = puVar8[-1];
    uVar1 = *puVar8;
    if (*(char *)(puVar8 + -2) != '\x01') {
      if (*(char *)(puVar8 + -2) == '\x02') {
        uVar4 = 0xd000000000000012;
        uVar11 = local_78;
        goto LAB_100056504;
      }
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = (undefined *)0xe400000000000000;
LAB_1000565a4:
      _swift_bridgeObjectRelease(puVar6);
      __sSS6appendyySSF(0x2f,0xe100000000000000);
      __sSS6appendyySSF(uVar10,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      if (*unaff_x20 != '\x01') goto LAB_100056644;
      _swift_bridgeObjectRetain(uVar7);
      goto LAB_1000565fc;
    }
    uVar11 = 0xe500000000000000;
    uVar4 = 0x74726f6873;
LAB_100056504:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar4,uVar11,0x676e6f6c,0xe400000000000000,0);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(uVar11);
    if ((uVar4 & 1) != 0) goto LAB_1000565a4;
    uVar12 = uVar12 + 1;
    _swift_bridgeObjectRelease(uVar1);
    puVar8 = puVar8 + 3;
  } while (uVar5 != uVar12);
LAB_100056564:
  _swift_bridgeObjectRelease(puVar6);
  if (*unaff_x20 == '\x01') {
    _swift_bridgeObjectRetain(uVar7);
LAB_1000565fc:
    __sSS6appendyySSF(0x3d,0xe100000000000000);
    bVar3 = (unaff_x20[0x19] & 1U) == 0;
    uVar10 = 0x2b;
    if (bVar3) {
      uVar10 = 0;
    }
    uVar1 = 0xe100000000000000;
    if (bVar3) {
      uVar1 = 0xe000000000000000;
    }
    __sSS6appendyySSF(uVar10,uVar1);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar1);
  }
  goto LAB_100056644;
}

