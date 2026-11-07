// rea decompile_all
// name: FUN_100663f14
// address: 0x100663f14
// body: available
// range: 0x100663f14-0x100664273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100663f14(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  undefined1 auStack_78 [24];
  
  puVar3 = *(undefined1 **)(unaff_x20 + 0x30);
  lVar8 = *(long *)(unaff_x20 + 0x38);
  lVar4 = unaff_x20 + 0x18;
  FUN_10003f030(lVar4,puVar3);
  (**(code **)(lVar8 + 8))(puVar3,lVar8);
  uVar9 = param_4 >> 1;
  uVar11 = uVar9 - param_3;
  if (((uint)puVar3 >> 2 & 1) == 0) {
    if (SBORROW8(uVar9,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100663f88);
      (*pcVar1)();
    }
  }
  else {
    if (SBORROW8(uVar9,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100664268);
      (*pcVar1)();
    }
    if ((uVar11 & 7) != 0) {
      FUN_100640ebc();
      _swift_allocError(&DAT_1009e3530,puVar3,0,0);
      *puVar3 = 0;
      _swift_willThrow();
      return lVar4;
    }
  }
  lVar4 = 0;
  FUN_1006295a0(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  puVar7 = param_1;
  if ((param_4 & 1) == 0) {
    _swift_unknownObjectRetain(param_1);
  }
  else {
    uVar5 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar6 = param_1;
    _swift_unknownObjectRetain_n(param_1,3);
    _swift_dynamicCastClass();
    if (puVar6 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    uVar9 = *(ulong *)(puVar6 + 0x10);
    _swift_release();
    if (uVar9 == uVar11) {
      _swift_dynamicCastClass(param_1,uVar5);
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      goto LAB_100664074;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
LAB_100664074:
  _swift_unknownObjectRelease(param_1);
  uVar11 = *(ulong *)(puVar7 + 0x10);
  if (uVar11 != 0) {
    uVar13 = 0;
    lVar8 = lVar4;
    uVar9 = uVar11;
    if (7 < uVar11) {
      uVar9 = 8;
    }
    do {
      uVar15 = *(ulong *)(puVar7 + 0x10);
      if ((long)uVar15 < (long)uVar13 || (long)uVar15 < (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066424c);
        (*pcVar1)();
      }
      if ((7 < uVar15 - uVar9) && (uVar15 = uVar9 + 8, SCARRY8(uVar9,8))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100664260);
        (*pcVar1)();
      }
      if ((long)uVar15 < (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100664250);
        (*pcVar1)();
      }
      _swift_beginAccess(unaff_x20 + 0x48,auStack_78,0x21,0);
      if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100664274);
        (*pcVar1)();
      }
      lVar4 = *(long *)(unaff_x20 + 0x68);
      FUN_1000ce034(unaff_x20 + 0x48,*(long *)(unaff_x20 + 0x60));
      pcVar1 = *(code **)(lVar4 + 0x20);
      puVar6 = puVar7;
      _swift_bridgeObjectRetain();
      (*pcVar1)();
      _swift_endAccess(auStack_78);
      sVar14 = *(size_t *)(puVar6 + 0x10);
      uVar10 = *(ulong *)(lVar8 + 0x10);
      uVar13 = uVar10 + sVar14;
      if (SCARRY8(uVar10,sVar14)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100664254);
        (*pcVar1)();
      }
      uVar12 = *(ulong *)(lVar8 + 0x18) >> 1;
      if ((long)uVar12 < (long)uVar13) {
        if (uVar10 <= uVar13) {
          uVar10 = uVar13;
        }
        lVar4 = 1;
        FUN_1006295a0(1,uVar10,1,lVar8);
        uVar10 = *(ulong *)(lVar4 + 0x10);
        uVar12 = *(ulong *)(lVar4 + 0x18) >> 1;
        if (*(long *)(puVar6 + 0x10) != 0) goto LAB_10066418c;
LAB_1006640a0:
        _swift_bridgeObjectRelease(puVar6);
        if (sVar14 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100664258);
          (*pcVar1)();
        }
      }
      else {
        lVar4 = lVar8;
        if (sVar14 == 0) goto LAB_1006640a0;
LAB_10066418c:
        if ((long)(uVar12 - uVar10) < (long)sVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10066425c);
          (*pcVar1)();
        }
        _memcpy((void *)(lVar4 + uVar10 + 0x20),puVar6 + 0x20,sVar14);
        _swift_bridgeObjectRelease(puVar6);
        if (sVar14 != 0) {
          if (SCARRY8(*(long *)(lVar4 + 0x10),sVar14)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100664264);
            (*pcVar1)();
          }
          *(size_t *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + sVar14;
        }
      }
      _swift_release(puVar7);
      bVar2 = uVar9 != uVar11;
      uVar13 = uVar9;
      lVar8 = lVar4;
      uVar9 = uVar15;
    } while (bVar2);
  }
  _swift_release(puVar7);
  lVar8 = lVar4;
  FUN_10066af14(lVar4,*(undefined1 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(lVar4);
  return lVar8;
}

