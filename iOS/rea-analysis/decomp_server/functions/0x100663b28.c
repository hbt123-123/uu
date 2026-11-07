// rea decompile_all
// name: FUN_100663b28
// address: 0x100663b28
// body: available
// range: 0x100663b28-0x100663f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100663b28(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  size_t sVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_78 [24];
  
  bVar1 = *(byte *)(unaff_x20 + 0x40);
  puVar5 = param_1;
  if ((param_4 & 1) == 0) {
    _swift_unknownObjectRetain(param_1);
LAB_100663b70:
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
  }
  else {
    uVar3 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = param_1;
    _swift_unknownObjectRetain_n(param_1,3);
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar6 = *(long *)(puVar4 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100663f08);
      (*pcVar12)();
    }
    if (lVar6 != (param_4 >> 1) - param_3) {
      _swift_unknownObjectRelease();
      goto LAB_100663b70;
    }
    _swift_dynamicCastClass(param_1,uVar3);
    if (puVar5 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  _swift_unknownObjectRelease(param_1);
  puVar4 = puVar5;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) goto LAB_100663c8c;
      FUN_10067e95c(puVar5,8);
    }
    else {
      FUN_10066ad14(puVar5,8);
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      FUN_10066a9e8();
    }
    else {
      FUN_10066abd0();
    }
  }
  else if (bVar1 == 6) {
    FUN_100668ba0();
  }
  else {
    FUN_100668a40(puVar5,8);
  }
  _swift_release(puVar5);
LAB_100663c8c:
  lVar6 = 0;
  FUN_1006295a0(0,*(undefined8 *)(puVar4 + 0x10),0,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar13 = *(ulong *)(puVar4 + 0x10);
  _swift_bridgeObjectRetain(puVar4);
  if (uVar13 != 0) {
    uVar10 = 0;
    lVar14 = lVar6;
    uVar15 = uVar13;
    if (7 < uVar13) {
      uVar15 = 8;
    }
    do {
      uVar16 = *(ulong *)(puVar4 + 0x10);
      if ((long)uVar16 < (long)uVar10 || (long)uVar16 < (long)uVar15) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100663eec);
        (*pcVar12)();
      }
      if ((7 < uVar16 - uVar15) && (uVar16 = uVar15 + 8, SCARRY8(uVar15,8))) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100663f00);
        (*pcVar12)();
      }
      if ((long)uVar16 < (long)uVar15) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100663ef0);
        (*pcVar12)();
      }
      _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0x21,0);
      if (*(long *)(unaff_x20 + 0x88) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100663f14);
        (*pcVar12)();
      }
      lVar6 = *(long *)(unaff_x20 + 0x90);
      FUN_1000ce034(unaff_x20 + 0x70,*(long *)(unaff_x20 + 0x88));
      pcVar12 = *(code **)(lVar6 + 0x18);
      puVar5 = puVar4;
      _swift_bridgeObjectRetain();
      (*pcVar12)();
      _swift_endAccess(auStack_78);
      sVar11 = *(size_t *)(puVar5 + 0x10);
      uVar8 = *(ulong *)(lVar14 + 0x10);
      uVar10 = uVar8 + sVar11;
      if (SCARRY8(uVar8,sVar11)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100663ef4);
        (*pcVar12)();
      }
      uVar9 = *(ulong *)(lVar14 + 0x18) >> 1;
      if ((long)uVar9 < (long)uVar10) {
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        lVar6 = 1;
        FUN_1006295a0(1,uVar8,1,lVar14);
        uVar8 = *(ulong *)(lVar6 + 0x10);
        uVar9 = *(ulong *)(lVar6 + 0x18) >> 1;
        if (*(long *)(puVar5 + 0x10) == 0) goto LAB_100663cd8;
LAB_100663dc4:
        if ((long)(uVar9 - uVar8) < (long)sVar11) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100663efc);
          (*pcVar12)();
        }
        _memcpy((void *)(lVar6 + uVar8 + 0x20),puVar5 + 0x20,sVar11);
        _swift_bridgeObjectRelease(puVar5);
        if (sVar11 != 0) {
          if (SCARRY8(*(long *)(lVar6 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100663f04);
            (*pcVar12)();
          }
          *(size_t *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + sVar11;
        }
      }
      else {
        lVar6 = lVar14;
        if (sVar11 != 0) goto LAB_100663dc4;
LAB_100663cd8:
        _swift_bridgeObjectRelease(puVar5);
        if (sVar11 != 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100663ef8);
          (*pcVar12)();
        }
      }
      _swift_bridgeObjectRelease(puVar4);
      bVar2 = uVar15 != uVar13;
      uVar10 = uVar15;
      lVar14 = lVar6;
      uVar15 = uVar16;
    } while (bVar2);
  }
  _swift_bridgeObjectRelease_n(puVar4,2);
  puVar7 = *(undefined1 **)(unaff_x20 + 0x30);
  lVar14 = *(long *)(unaff_x20 + 0x38);
  FUN_10003f030(unaff_x20 + 0x18,puVar7);
  (**(code **)(lVar14 + 8))(puVar7,lVar14);
  if ((((uint)puVar7 >> 2 & 1) != 0) && ((*(byte *)(lVar6 + 0x10) & 7) != 0)) {
    FUN_100640ebc();
    _swift_allocError(&DAT_1009e3530,puVar7,0,0);
    *puVar7 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(lVar6);
  }
  return lVar6;
}

