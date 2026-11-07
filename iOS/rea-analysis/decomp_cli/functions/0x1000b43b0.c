// rea decompile_all
// name: FUN_1000b43b0
// address: 0x1000b43b0
// body: available
// range: 0x1000b43b0-0x1000b4587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000b43b0(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 local_70;
  undefined1 local_68;
  
  puVar4 = unaff_x20;
  FUN_1000b4cac();
  local_70 = *unaff_x20;
  local_68 = *(undefined1 *)(unaff_x20 + 1);
  FUN_1000b54d0(&local_70);
  _swift_release(unaff_x20[3]);
  if (((long)puVar4 < 0) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
    puVar10 = puVar4;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)puVar10 < -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4578);
      (*pcVar3)();
    }
    uVar8 = (long)puVar10 / 2;
  }
  else {
    puVar10 = (undefined8 *)puVar4[2];
    uVar8 = (ulong)puVar10 >> 1;
  }
  if (2 < (long)puVar10 + 1U) {
    lVar11 = 4;
    do {
      uVar2 = (long)puVar10 - (lVar11 + -3);
      if (SBORROW8((long)puVar10,lVar11 + -3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4554);
        (*pcVar3)();
      }
      uVar5 = lVar11 - 4;
      if (uVar5 != uVar2) {
        if (((ulong)puVar4 & 0xc000000000000001) == 0) {
          if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4558);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
          if (uVar9 <= uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b455c);
            (*pcVar3)();
          }
          if (uVar9 <= uVar2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4560);
            (*pcVar3)();
          }
          uVar5 = puVar4[lVar11];
          uVar9 = puVar4[uVar2 + 4];
          _swift_retain(uVar5);
          _swift_retain(uVar9);
        }
        else {
          FUN_1000794e0(uVar5,puVar4);
          uVar9 = uVar2;
          FUN_1000794e0(uVar2,puVar4);
        }
        puVar6 = puVar4;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar6 == 0) || ((long)puVar4 < 0)) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
          FUN_100080f64();
          uVar13 = (uint)((ulong)puVar4 >> 0x3e) & 1;
        }
        else {
          uVar13 = 0;
        }
        uVar12 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar7 = *(undefined8 *)(uVar12 + lVar11 * 8);
        *(ulong *)(uVar12 + lVar11 * 8) = uVar9;
        _swift_release(uVar7);
        if (((long)puVar4 < 0) || (uVar13 != 0)) {
          FUN_100080f64();
          uVar12 = (ulong)puVar4 & 0xffffffffffffff8;
        }
        if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4550);
          (*pcVar3)();
        }
        if (*(ulong *)(uVar12 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4564);
          (*pcVar3)();
        }
        lVar1 = uVar12 + uVar2 * 8;
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        *(ulong *)(lVar1 + 0x20) = uVar5;
        _swift_release(uVar7);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 - uVar8 != 4);
  }
  return puVar4;
}

