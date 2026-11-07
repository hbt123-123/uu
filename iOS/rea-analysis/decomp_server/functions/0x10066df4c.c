// rea decompile_all
// name: FUN_10066df4c
// address: 0x10066df4c
// body: available
// range: 0x10066df4c-0x10066e4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10066df4c(long param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *unaff_x20;
  undefined4 uVar21;
  ulong uVar22;
  ulong uVar23;
  
  uVar18 = param_1 / 2;
  uVar2 = uVar18;
  FUN_10066fbf8();
  uVar10 = param_2;
  puVar6 = param_4;
  uVar14 = uVar21;
  FUN_10066fbf8();
  uVar3 = uVar2;
  uVar11 = param_2;
  puVar9 = param_4;
  uVar15 = uVar21;
  FUN_1006527dc();
  uVar21 = (undefined4)param_3;
  _swift_bridgeObjectRetain(param_4);
  uVar4 = 1;
  FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066e4e8);
    (*pcVar1)();
  }
  uVar19 = param_3 & 0xff;
  _swift_bridgeObjectRetain(puVar6);
  uVar4 = 1;
  FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066e4ec);
    (*pcVar1)();
  }
  uVar4 = uVar2;
  uVar12 = param_2;
  puVar5 = param_4;
  FUN_1006527dc();
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(puVar6);
  puVar8 = puVar5;
  FUN_100650d48();
  _swift_bridgeObjectRelease(puVar5);
  if (puVar8 == (undefined1 *)0x0) {
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease();
    FUN_10066cb9c();
    _swift_allocError(&DAT_1009e5530,param_4,0,0);
    *param_4 = 1;
    _swift_willThrow();
  }
  else {
    puVar5 = unaff_x20;
    _swift_allocObject(unaff_x20,0xc0,7);
    uVar22 = param_3 & 0xffffffff;
    uVar7 = uVar2;
    uVar13 = param_2;
    puVar16 = param_4;
    FUN_1006527dc(uVar2,param_2,uVar22,param_4,uVar18,uVar10,uVar14,puVar6);
    uVar23 = uVar3;
    FUN_10064b1b4(uVar3,uVar11,uVar15,puVar9,uVar7,uVar13,uVar22,puVar16);
    _swift_bridgeObjectRelease(puVar16);
    if (uVar23 == 0) {
      _swift_bridgeObjectRetain(param_4);
      uVar7 = 1;
      FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066e4f0);
        (*pcVar1)();
      }
      uVar23 = param_3 & 0xff;
      _swift_bridgeObjectRetain();
      uVar7 = 1;
      FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066e4f4);
        (*pcVar1)();
      }
      uVar7 = uVar2;
      uVar13 = param_2;
      puVar16 = param_4;
      FUN_1006527dc(uVar2,param_2,uVar23,param_4,uVar18,uVar10,(char)uVar14,puVar6);
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(puVar6);
      puVar17 = puVar16;
      FUN_100650d48(uVar7,uVar13,uVar23,puVar16,0x10001,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
      _swift_bridgeObjectRelease(puVar16);
      if (puVar17 == (undefined1 *)0x0) {
        _swift_bridgeObjectRelease(puVar8);
        _swift_bridgeObjectRelease(param_4);
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease();
      }
      else {
        uVar22 = uVar4;
        FUN_10064b1b4(uVar4,uVar12,uVar19,puVar8,uVar7,uVar13,uVar23,puVar17);
        _swift_bridgeObjectRelease(puVar17);
        if (uVar22 == 0) {
          *(ulong *)(puVar5 + 0x10) = uVar3;
          *(undefined8 *)(puVar5 + 0x18) = uVar11;
          puVar5[0x20] = (char)uVar15;
          *(undefined1 **)(puVar5 + 0x28) = puVar9;
          *(undefined8 *)(puVar5 + 0x38) = 0;
          *(undefined8 *)(puVar5 + 0x30) = 0x10001;
          puVar5[0x40] = 0;
          *(undefined **)(puVar5 + 0x48) = PTR___swiftEmptyArrayStorage_100995ea0;
          *(ulong *)(puVar5 + 0x50) = uVar4;
          *(undefined8 *)(puVar5 + 0x58) = uVar12;
          *(ulong *)(puVar5 + 0x60) = uVar19 & 0xff;
          *(undefined1 **)(puVar5 + 0x68) = puVar8;
          *(ulong *)(puVar5 + 0x80) = uVar2;
          *(undefined8 *)(puVar5 + 0x88) = param_2;
          puVar5[0x90] = (char)param_3;
          *(undefined1 **)(puVar5 + 0x98) = param_4;
          *(ulong *)(puVar5 + 0xa0) = uVar18;
          *(undefined8 *)(puVar5 + 0xa8) = uVar10;
          puVar5[0xb0] = (char)uVar14;
          *(undefined1 **)(puVar5 + 0xb8) = puVar6;
          uVar2 = uVar3;
          FUN_10065f798(uVar3,uVar11,uVar15,puVar9);
          *(ulong *)(puVar5 + 0x70) = uVar2;
          uVar18 = uVar3;
          FUN_10065f798(uVar3,uVar11,uVar15,puVar9);
          uVar2 = uVar18 + 7;
          if (-1 < (long)uVar18) {
            uVar2 = uVar18;
          }
          lVar20 = (long)uVar2 >> 3;
          FUN_10065f798(uVar3,uVar11,uVar15,puVar9);
          if ((uVar3 & 7) != 0) {
            lVar20 = lVar20 + 1;
          }
          *(long *)(puVar5 + 0x78) = lVar20;
          return puVar5;
        }
        _swift_bridgeObjectRelease(param_4);
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(puVar9);
        _swift_bridgeObjectRelease();
        puVar9 = puVar8;
      }
    }
    else {
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease();
      puVar9 = puVar6;
    }
    FUN_10066cb9c();
    _swift_allocError(&DAT_1009e5530,puVar9,0,0);
    *puVar9 = 3;
    _swift_willThrow();
    _swift_deallocPartialClassInstance(puVar5,unaff_x20,0xc0,7);
    puVar6 = puVar5;
  }
  return puVar6;
}

