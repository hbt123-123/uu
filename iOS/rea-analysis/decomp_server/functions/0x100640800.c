// rea decompile_all
// name: FUN_100640800
// address: 0x100640800
// body: available
// range: 0x100640800-0x100640b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100640800(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  code *pcVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_78 [24];
  
  puVar3 = auStack_78 +
           (-0x18 - (*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  bVar1 = *(byte *)(unaff_x20 + 0x40);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(puVar3,param_1,param_2);
  __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC
            (puVar3,PTR___ss5UInt8VN_100995d40,param_2,*(undefined8 *)(param_3 + 8));
  puVar4 = puVar3;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) goto LAB_100640900;
      FUN_10067e95c(puVar3,8);
    }
    else {
      FUN_10066ad14(puVar3,8);
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
    FUN_100668a40(puVar3,8);
  }
  _swift_bridgeObjectRelease(puVar3);
LAB_100640900:
  lVar5 = 0;
  FUN_1006295a0(0,*(undefined8 *)(puVar4 + 0x10),0,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar8 = *(ulong *)(puVar4 + 0x10);
  _swift_bridgeObjectRetain(puVar4);
  if (uVar8 != 0) {
    uVar11 = 0;
    lVar12 = lVar5;
    uVar13 = uVar8;
    if (7 < uVar8) {
      uVar13 = 8;
    }
    do {
      uVar14 = *(ulong *)(puVar4 + 0x10);
      if ((long)uVar14 < (long)uVar11 || (long)uVar14 < (long)uVar13) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b58);
        (*pcVar9)();
      }
      if ((7 < uVar14 - uVar13) && (uVar14 = uVar13 + 8, SCARRY8(uVar13,8))) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b6c);
        (*pcVar9)();
      }
      if ((long)uVar14 < (long)uVar13) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b5c);
        (*pcVar9)();
      }
      _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0x21,0);
      if (*(long *)(unaff_x20 + 0x88) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b74);
        (*pcVar9)();
      }
      lVar5 = *(long *)(unaff_x20 + 0x90);
      FUN_1000ce034(unaff_x20 + 0x70,*(long *)(unaff_x20 + 0x88));
      pcVar9 = *(code **)(lVar5 + 0x18);
      puVar3 = puVar4;
      _swift_bridgeObjectRetain();
      (*pcVar9)();
      _swift_endAccess(auStack_78);
      sVar10 = *(size_t *)(puVar3 + 0x10);
      uVar6 = *(ulong *)(lVar12 + 0x10);
      uVar11 = uVar6 + sVar10;
      if (SCARRY8(uVar6,sVar10)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b60);
        (*pcVar9)();
      }
      uVar7 = *(ulong *)(lVar12 + 0x18) >> 1;
      if ((long)uVar7 < (long)uVar11) {
        if (uVar6 <= uVar11) {
          uVar6 = uVar11;
        }
        lVar5 = 1;
        FUN_1006295a0(1,uVar6,1,lVar12);
        uVar6 = *(ulong *)(lVar5 + 0x10);
        uVar7 = *(ulong *)(lVar5 + 0x18) >> 1;
        if (*(long *)(puVar3 + 0x10) == 0) goto LAB_100640948;
LAB_100640a38:
        if ((long)(uVar7 - uVar6) < (long)sVar10) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b68);
          (*pcVar9)();
        }
        _memcpy((void *)(lVar5 + uVar6 + 0x20),puVar3 + 0x20,sVar10);
        _swift_bridgeObjectRelease(puVar3);
        if (sVar10 != 0) {
          if (SCARRY8(*(long *)(lVar5 + 0x10),sVar10)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b70);
            (*pcVar9)();
          }
          *(size_t *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + sVar10;
        }
      }
      else {
        lVar5 = lVar12;
        if (sVar10 != 0) goto LAB_100640a38;
LAB_100640948:
        _swift_bridgeObjectRelease(puVar3);
        if (sVar10 != 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100640b64);
          (*pcVar9)();
        }
      }
      _swift_bridgeObjectRelease(puVar4);
      bVar2 = uVar13 != uVar8;
      uVar11 = uVar13;
      lVar12 = lVar5;
      uVar13 = uVar14;
    } while (bVar2);
  }
  _swift_bridgeObjectRelease_n(puVar4,2);
  puVar4 = *(undefined1 **)(unaff_x20 + 0x30);
  lVar12 = *(long *)(unaff_x20 + 0x38);
  FUN_10003f030(unaff_x20 + 0x18,puVar4);
  (**(code **)(lVar12 + 8))(puVar4,lVar12);
  if ((((uint)puVar4 >> 2 & 1) != 0) && ((*(byte *)(lVar5 + 0x10) & 7) != 0)) {
    FUN_100640ebc();
    _swift_allocError(&DAT_1009e3530,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(lVar5);
  }
  return lVar5;
}

