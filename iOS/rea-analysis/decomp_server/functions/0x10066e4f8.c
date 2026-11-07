// rea decompile_all
// name: FUN_10066e4f8
// address: 0x10066e4f8
// body: available
// range: 0x10066e4f8-0x10066e8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10066e4f8(ulong param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 *param_8,
                  long param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  undefined1 *param_13,undefined8 param_14,undefined8 param_15,byte param_16,
                  undefined4 param_17,undefined1 *param_18,undefined8 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined1 *param_23)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  
  uVar12 = (ulong)param_16;
  lVar2 = unaff_x20;
  _swift_allocObject();
  uVar3 = param_14;
  uVar7 = param_15;
  puVar5 = param_18;
  FUN_1006527dc(param_14,param_15,uVar12,param_18,param_19,param_20,param_21,param_23);
  uVar4 = param_1;
  FUN_10064b1b4(param_1,param_2,param_3,param_4,uVar3,uVar7,uVar12,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  puVar5 = param_4;
  puVar9 = param_13;
  puVar11 = param_8;
  puVar13 = param_18;
  puVar6 = param_23;
  if (uVar4 == 0) {
    _swift_bridgeObjectRetain(param_18);
    uVar4 = 1;
    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066e8f8);
      (*pcVar1)();
    }
    uVar12 = (ulong)param_16;
    _swift_bridgeObjectRetain();
    uVar4 = 1;
    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066e8fc);
      (*pcVar1)();
    }
    uVar3 = param_14;
    uVar7 = param_15;
    puVar5 = param_18;
    FUN_1006527dc(param_14,param_15,uVar12,param_18,param_19,param_20,param_21,param_23);
    _swift_bridgeObjectRelease(param_18);
    _swift_bridgeObjectRelease(param_23);
    puVar8 = puVar5;
    FUN_100650d48(uVar3,uVar7,uVar12,puVar5,param_5,param_6,param_7,param_8);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = param_13;
    puVar9 = param_23;
    puVar11 = param_18;
    puVar13 = param_4;
    puVar6 = param_8;
    if (puVar8 != (undefined1 *)0x0) {
      lVar10 = param_9;
      FUN_10064b1b4();
      _swift_bridgeObjectRelease(puVar8);
      puVar5 = param_18;
      puVar9 = param_4;
      puVar11 = param_23;
      puVar13 = param_8;
      puVar6 = param_13;
      if (lVar10 == 0) {
        *(ulong *)(lVar2 + 0x10) = param_1;
        *(undefined8 *)(lVar2 + 0x18) = param_2;
        *(char *)(lVar2 + 0x20) = (char)param_3;
        *(undefined1 **)(lVar2 + 0x28) = param_4;
        *(undefined8 *)(lVar2 + 0x30) = param_5;
        *(undefined8 *)(lVar2 + 0x38) = param_6;
        *(char *)(lVar2 + 0x40) = (char)param_7;
        *(undefined1 **)(lVar2 + 0x48) = param_8;
        *(long *)(lVar2 + 0x50) = param_9;
        *(undefined8 *)(lVar2 + 0x58) = param_10;
        *(ulong *)(lVar2 + 0x60) = (ulong)param_11;
        *(undefined1 **)(lVar2 + 0x68) = param_13;
        *(undefined8 *)(lVar2 + 0x80) = param_14;
        *(undefined8 *)(lVar2 + 0x88) = param_15;
        *(byte *)(lVar2 + 0x90) = param_16;
        *(undefined1 **)(lVar2 + 0x98) = param_18;
        *(undefined8 *)(lVar2 + 0xa0) = param_19;
        *(undefined8 *)(lVar2 + 0xa8) = param_20;
        *(undefined1 *)(lVar2 + 0xb0) = param_21;
        *(undefined1 **)(lVar2 + 0xb8) = param_23;
        uVar4 = param_1;
        FUN_10065f798(param_1,param_2,param_3,param_4);
        *(ulong *)(lVar2 + 0x70) = uVar4;
        uVar12 = param_1;
        FUN_10065f798(param_1,param_2,param_3,param_4);
        uVar4 = uVar12 + 7;
        if (-1 < (long)uVar12) {
          uVar4 = uVar12;
        }
        lVar10 = (long)uVar4 >> 3;
        FUN_10065f798(param_1,param_2,param_3,param_4);
        if ((param_1 & 7) != 0) {
          lVar10 = lVar10 + 1;
        }
        *(long *)(lVar2 + 0x78) = lVar10;
        return lVar2;
      }
    }
  }
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(puVar11);
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(puVar13);
  _swift_bridgeObjectRelease();
  FUN_10066cb9c();
  _swift_allocError(&DAT_1009e5530,puVar6,0,0);
  *puVar6 = 3;
  _swift_willThrow();
  _swift_deallocPartialClassInstance(lVar2,unaff_x20,0xc0,7);
  return lVar2;
}

