// rea decompile_all
// name: FUN_1000af9ac
// address: 0x1000af9ac
// body: available
// range: 0x1000af9ac-0x1000afe17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000af9ac(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 local_88;
  undefined8 local_80;
  
  puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar12 = *(long *)(unaff_x20 + 0x28);
  uVar11 = *(ulong *)(lVar12 + 0x10);
  if (uVar11 == 0) {
    local_88 = 0;
    local_80 = 0xe000000000000000;
  }
  else if (uVar11 < 6) {
    FUN_1000798d0(0,uVar11);
    puVar9 = (undefined8 *)(lVar12 + 0x28);
    do {
      uVar7 = puVar9[-1];
      uVar10 = *puVar9;
      _swift_bridgeObjectRetain(uVar10);
      __sSS6appendyySSF(uVar7,uVar10);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      _swift_bridgeObjectRelease(uVar10);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1000798d0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = 0x27;
      *(undefined8 *)((long)(puVar3 + uVar1 * 0x10 + 0x20) + 8) = 0xe100000000000000;
      puVar9 = puVar9 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if (uVar1 < 2) {
      puVar8 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar9 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      uVar7 = 0x20646e6120;
      uVar10 = 0xe500000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20646e6120,0xe500000000000000,puVar8,puVar9);
      _swift_release(puVar3);
    }
    else {
      uVar5 = 1;
      FUN_1000a13f8();
      _swift_retain(puVar3);
      puVar8 = &DAT_100104d70;
      FUN_10000eb08(&DAT_100104d70,&USHORT_1000d6af0);
      puVar6 = &DAT_100104d78;
      FUN_10002cf3c(&DAT_100104d78,&DAT_100104d70,&USHORT_1000d6af0,
                    PTR___ss10ArraySliceVyxGSKsMc_1000f0488);
      uVar7 = 0x202c;
      uVar10 = 0xe200000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar8,puVar6);
      _swift_unknownObjectRelease(uVar5);
      if (*(long *)(puVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000afe18);
        (*pcVar4)();
      }
      lVar12 = *(long *)(puVar3 + 0x10) * 0x10;
      uVar5 = *(undefined8 *)(puVar3 + lVar12 + 0x10);
      uVar2 = *(undefined8 *)(puVar3 + lVar12 + 0x18);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(puVar3);
      __sSS6appendyySSF(uVar5,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRetain(uVar10);
      __sSS6appendyySSF(0x20726f20,0xe400000000000000);
      _swift_bridgeObjectRelease(uVar10);
      _swift_bridgeObjectRelease(0xe400000000000000);
    }
    __ss11_StringGutsV4growyySiF(0x1b);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_88 = 0xd000000000000018;
    local_80 = 0x80000001000cafd0;
    __sSS6appendyySSF(uVar7,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    __sSS6appendyySSF(0x2e,0xe100000000000000);
  }
  else {
    FUN_1000798d0(0,uVar11,0);
    puVar9 = (undefined8 *)(lVar12 + 0x28);
    do {
      uVar7 = puVar9[-1];
      uVar10 = *puVar9;
      _swift_bridgeObjectRetain(uVar10);
      __sSS6appendyySSF(uVar7,uVar10);
      _swift_bridgeObjectRelease(uVar10);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1000798d0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = 0x202d2020;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = 0xe400000000000000;
      puVar9 = puVar9 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    puVar8 = &DAT_100103ed8;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    puVar9 = &DAT_100103ee0;
    FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
    uVar7 = 10;
    uVar10 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar8,puVar9);
    _swift_release(puVar3);
    __ss11_StringGutsV4growyySiF(0x29);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_88 = 0xd000000000000027;
    local_80 = 0x80000001000cafa0;
    __sSS6appendyySSF(uVar7,uVar10);
    _swift_bridgeObjectRelease(uVar10);
  }
  auVar13._8_8_ = local_80;
  auVar13._0_8_ = local_88;
  return auVar13;
}

