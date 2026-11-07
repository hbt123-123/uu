// rea decompile_all
// name: FUN_10062cb88
// address: 0x10062cb88
// body: available
// range: 0x10062cb88-0x10062ce63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10062cb88(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar14 = *(ulong *)(param_1 + 0x10);
  if ((long)param_2 < 1) {
    if (uVar14 == 0) {
      return puVar3;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce60);
      (*pcVar4)();
    }
    uVar8 = 0;
  }
  else {
    uVar8 = param_2;
    if ((uVar14 < param_2) && (uVar8 = uVar14, uVar14 == 0)) {
      return puVar3;
    }
  }
  uVar15 = 0;
  do {
    uVar13 = uVar15 + 1;
    if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce40);
      (*pcVar4)();
    }
    uVar9 = uVar14 - uVar8;
    uVar11 = uVar14;
    if ((long)param_2 < 1) {
      if ((0 < (long)uVar9) || ((long)uVar9 <= (long)param_2)) goto LAB_10062cc1c;
    }
    else if (param_2 <= uVar9) {
LAB_10062cc1c:
      uVar11 = uVar8 + param_2;
      if (SCARRY8(uVar8,param_2)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce58);
        (*pcVar4)();
      }
    }
    if ((long)uVar11 < (long)uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce44);
      (*pcVar4)();
    }
    uVar15 = uVar15 + 1;
    bVar5 = uVar14 != uVar8;
    uVar8 = uVar11;
  } while (bVar5);
  if (uVar13 != 0) {
    FUN_100664b10(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    uVar8 = uVar14;
    if ((long)param_2 <= (long)uVar14) {
      uVar8 = param_2;
    }
    if ((long)param_2 < 1) {
      uVar8 = param_2;
    }
    if ((long)(uVar13 | uVar8) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce64);
      (*pcVar4)();
    }
    uVar11 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
    uVar13 = 0;
    do {
      uVar9 = uVar8;
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce48);
        (*pcVar4)();
      }
      if ((long)uVar14 < (long)uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce4c);
        (*pcVar4)();
      }
      uVar2 = uVar14 - uVar9;
      if ((long)uVar14 < (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce50);
        (*pcVar4)();
      }
      lVar10 = *(long *)(param_1 + 0x10);
      lVar12 = uVar9 - uVar13;
      puVar6 = param_1;
      _swift_unknownObjectRetain();
      if (lVar10 != lVar12) {
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (uVar9 != uVar13) {
          if (0 < lVar12) {
            puVar6 = &DAT_100ab7cb8;
            FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
            _swift_allocObject();
            puVar7 = puVar6;
            _malloc_size();
            puVar1 = puVar7 + -0x1d;
            if (0x1f < (long)puVar7) {
              puVar1 = puVar7 + -0x20;
            }
            *(long *)(puVar6 + 0x10) = lVar12;
            *(long *)(puVar6 + 0x18) = ((long)puVar1 >> 2) << 1;
          }
          _memcpy(puVar6 + 0x20,param_1 + uVar13 * 4 + 0x20,lVar12 * 4);
        }
        _swift_bridgeObjectRelease(param_1);
      }
      uVar8 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar8) {
        FUN_100664b10(1 < *(ulong *)(puVar3 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar8 + 1;
      *(undefined **)(puVar3 + uVar8 * 8 + 0x20) = puVar6;
      if ((long)param_2 < 1) {
        if ((0 < (long)uVar2) || (uVar8 = uVar14, (long)uVar2 <= (long)param_2)) goto LAB_10062cd24;
      }
      else {
        uVar8 = uVar14;
        if (param_2 <= uVar2) {
LAB_10062cd24:
          uVar8 = uVar9 + param_2;
          if (SCARRY8(uVar9,param_2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce5c);
            (*pcVar4)();
          }
        }
      }
      if ((long)uVar8 < (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ce54);
        (*pcVar4)();
      }
      uVar11 = uVar11 - 1;
      uVar15 = uVar15 - 1;
      uVar13 = uVar9;
    } while (uVar15 != 0);
  }
  return puVar3;
}

