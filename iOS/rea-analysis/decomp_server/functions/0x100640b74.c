// rea decompile_all
// name: FUN_100640b74
// address: 0x100640b74
// body: available
// range: 0x100640b74-0x100640e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100640b74(long param_1,undefined1 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  size_t sVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_90 [8];
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(param_2 + -8);
  puVar5 = auStack_90 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  FUN_10003f030(unaff_x20 + 0x18,uVar2);
  (**(code **)(lVar4 + 8))(uVar2,lVar4);
  if ((((uint)uVar2 >> 2 & 1) == 0) ||
     (puVar3 = param_2, __sSl5countSivgTj(param_2,param_3), ((ulong)puVar3 & 7) == 0)) {
    puVar3 = param_2;
    __sSl5countSivgTj(param_2,param_3);
    lVar4 = 0;
    FUN_1006295a0(0,(ulong)puVar3 & ((long)puVar3 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_100995ea0);
    (**(code **)(lVar9 + 0x10))(puVar5,param_1,param_2);
    __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC
              (puVar5,PTR___ss5UInt8VN_100995d40,param_2,*(undefined8 *)(param_3 + 8));
    uVar7 = *(ulong *)(puVar5 + 0x10);
    if (uVar7 != 0) {
      uVar10 = 0;
      lVar9 = lVar4;
      uVar13 = uVar7;
      if (7 < uVar7) {
        uVar13 = 8;
      }
      do {
        uVar14 = *(ulong *)(puVar5 + 0x10);
        if ((long)uVar14 < (long)uVar10 || (long)uVar14 < (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e78);
          (*pcVar12)();
        }
        if ((7 < uVar14 - uVar13) && (uVar14 = uVar13 + 8, SCARRY8(uVar13,8))) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e8c);
          (*pcVar12)();
        }
        if ((long)uVar14 < (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e7c);
          (*pcVar12)();
        }
        _swift_beginAccess(unaff_x20 + 0x48,auStack_78,0x21,0);
        if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e94);
          (*pcVar12)();
        }
        lVar4 = *(long *)(unaff_x20 + 0x68);
        FUN_1000ce034(unaff_x20 + 0x48,*(long *)(unaff_x20 + 0x60));
        pcVar12 = *(code **)(lVar4 + 0x20);
        puVar3 = puVar5;
        _swift_bridgeObjectRetain();
        (*pcVar12)();
        _swift_endAccess(auStack_78);
        sVar11 = *(size_t *)(puVar3 + 0x10);
        uVar6 = *(ulong *)(lVar9 + 0x10);
        uVar10 = uVar6 + sVar11;
        if (SCARRY8(uVar6,sVar11)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e80);
          (*pcVar12)();
        }
        uVar8 = *(ulong *)(lVar9 + 0x18) >> 1;
        if ((long)uVar8 < (long)uVar10) {
          if (uVar6 <= uVar10) {
            uVar6 = uVar10;
          }
          lVar4 = 1;
          FUN_1006295a0(1,uVar6,1,lVar9);
          uVar6 = *(ulong *)(lVar4 + 0x10);
          uVar8 = *(ulong *)(lVar4 + 0x18) >> 1;
          if (*(long *)(puVar3 + 0x10) == 0) goto LAB_100640cbc;
LAB_100640db0:
          if ((long)(uVar8 - uVar6) < (long)sVar11) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e88);
            (*pcVar12)();
          }
          _memcpy((void *)(lVar4 + uVar6 + 0x20),puVar3 + 0x20,sVar11);
          _swift_bridgeObjectRelease(puVar3);
          if (sVar11 != 0) {
            if (SCARRY8(*(long *)(lVar4 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e90);
              (*pcVar12)();
            }
            *(size_t *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + sVar11;
          }
        }
        else {
          lVar4 = lVar9;
          if (sVar11 != 0) goto LAB_100640db0;
LAB_100640cbc:
          _swift_bridgeObjectRelease(puVar3);
          if (sVar11 != 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100640e84);
            (*pcVar12)();
          }
        }
        _swift_bridgeObjectRelease(puVar5);
        bVar1 = uVar13 != uVar7;
        uVar10 = uVar13;
        lVar9 = lVar4;
        uVar13 = uVar14;
      } while (bVar1);
    }
    _swift_bridgeObjectRelease(puVar5);
    param_1 = lVar4;
    FUN_10066af14(lVar4,*(undefined1 *)(unaff_x20 + 0x40));
    _swift_bridgeObjectRelease(lVar4);
  }
  else {
    FUN_100640ebc();
    _swift_allocError(&DAT_1009e3530,puVar3,0,0);
    *puVar3 = 0;
    _swift_willThrow();
  }
  return param_1;
}

