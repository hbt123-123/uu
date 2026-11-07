// rea decompile_all
// name: FUN_10066e8fc
// address: 0x10066e8fc
// body: available
// range: 0x10066e8fc-0x10066ecd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_10066e8fc(ulong param_1,undefined8 param_2,ulong param_3,undefined1 *param_4,undefined8 param_5,
             undefined8 param_6,undefined4 param_7,undefined1 *param_8,long param_9,
             undefined8 param_10,byte param_11,undefined4 param_12,undefined1 *param_13,
             undefined8 param_14,undefined8 param_15,byte param_16,undefined4 param_17,
             undefined1 *param_18,undefined8 param_19,undefined8 param_20,undefined1 param_21,
             undefined4 param_22,undefined1 *param_23)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  
  uVar7 = (ulong)param_16;
  uVar9 = *unaff_x20;
  uVar2 = param_14;
  uVar6 = param_15;
  puVar3 = param_18;
  FUN_1006527dc();
  uVar5 = param_1;
  FUN_10064b1b4(param_1,param_2,param_3,param_4,uVar2,uVar6,uVar7,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  puVar3 = param_4;
  puVar10 = param_13;
  puVar12 = param_8;
  puVar4 = param_23;
  puVar14 = param_18;
  if (uVar5 == 0) {
    _swift_bridgeObjectRetain(param_18);
    uVar5 = 1;
    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ecd4);
      (*pcVar1)();
    }
    uVar7 = (ulong)param_16;
    _swift_bridgeObjectRetain();
    uVar5 = 1;
    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ecd8);
      (*pcVar1)();
    }
    uVar2 = param_14;
    uVar6 = param_15;
    puVar3 = param_18;
    FUN_1006527dc(param_14,param_15,uVar7,param_18,param_19,param_20,param_21,param_23);
    _swift_bridgeObjectRelease(param_18);
    _swift_bridgeObjectRelease(param_23);
    puVar8 = puVar3;
    FUN_100650d48(uVar2,uVar6,uVar7,puVar3,param_5,param_6,param_7,param_8);
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = param_13;
    puVar10 = param_23;
    puVar12 = param_18;
    puVar4 = param_8;
    puVar14 = param_4;
    if (puVar8 != (undefined1 *)0x0) {
      lVar11 = param_9;
      FUN_10064b1b4();
      _swift_bridgeObjectRelease(puVar8);
      puVar3 = param_18;
      puVar10 = param_4;
      puVar12 = param_23;
      puVar4 = param_13;
      puVar14 = param_8;
      if (lVar11 == 0) {
        unaff_x20[2] = param_1;
        unaff_x20[3] = param_2;
        uVar13 = param_3 & 0xffffffff;
        *(char *)(unaff_x20 + 4) = (char)param_3;
        unaff_x20[5] = param_4;
        unaff_x20[6] = param_5;
        unaff_x20[7] = param_6;
        *(char *)(unaff_x20 + 8) = (char)param_7;
        unaff_x20[9] = param_8;
        unaff_x20[10] = param_9;
        unaff_x20[0xb] = param_10;
        unaff_x20[0xc] = (ulong)param_11;
        unaff_x20[0xd] = param_13;
        unaff_x20[0x10] = param_14;
        unaff_x20[0x11] = param_15;
        *(byte *)(unaff_x20 + 0x12) = param_16;
        unaff_x20[0x13] = param_18;
        unaff_x20[0x14] = param_19;
        unaff_x20[0x15] = param_20;
        *(undefined1 *)(unaff_x20 + 0x16) = param_21;
        unaff_x20[0x17] = param_23;
        uVar5 = param_1;
        FUN_10065f798(param_1,param_2,uVar13,param_4);
        unaff_x20[0xe] = uVar5;
        uVar7 = param_1;
        FUN_10065f798(param_1,param_2,uVar13,param_4);
        uVar5 = uVar7 + 7;
        if (-1 < (long)uVar7) {
          uVar5 = uVar7;
        }
        lVar11 = (long)uVar5 >> 3;
        FUN_10065f798(param_1,param_2,uVar13,param_4);
        if ((param_1 & 7) != 0) {
          lVar11 = lVar11 + 1;
        }
        unaff_x20[0xf] = lVar11;
        return unaff_x20;
      }
    }
  }
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(puVar12);
  _swift_bridgeObjectRelease(puVar10);
  _swift_bridgeObjectRelease(puVar14);
  _swift_bridgeObjectRelease();
  FUN_10066cb9c();
  _swift_allocError(&DAT_1009e5530,puVar4,0,0);
  *puVar4 = 3;
  _swift_willThrow();
  _swift_deallocPartialClassInstance(unaff_x20,uVar9,0xc0,7);
  return unaff_x20;
}

