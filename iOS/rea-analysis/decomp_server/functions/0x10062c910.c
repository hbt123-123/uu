// rea decompile_all
// name: FUN_10062c910
// address: 0x10062c910
// body: available
// range: 0x10062c910-0x10062cb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10062c910(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar12 = *(ulong *)(param_1 + 0x10);
  if ((long)param_2 < 1) {
    if (uVar12 == 0) {
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb80);
      (*pcVar2)();
    }
    uVar8 = 0;
  }
  else {
    uVar8 = param_2;
    if ((uVar12 < param_2) && (uVar8 = uVar12, uVar12 == 0)) {
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  uVar13 = 0;
  do {
    uVar11 = uVar13 + 1;
    if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb60);
      (*pcVar2)();
    }
    uVar9 = uVar12 - uVar8;
    uVar10 = uVar12;
    if ((long)param_2 < 1) {
      if ((0 < (long)uVar9) || ((long)uVar9 <= (long)param_2)) goto LAB_10062c9a0;
    }
    else if (param_2 <= uVar9) {
LAB_10062c9a0:
      uVar10 = uVar8 + param_2;
      if (SCARRY8(uVar8,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb78);
        (*pcVar2)();
      }
    }
    if ((long)uVar10 < (long)uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb64);
      (*pcVar2)();
    }
    uVar13 = uVar13 + 1;
    bVar3 = uVar12 != uVar8;
    uVar8 = uVar10;
  } while (bVar3);
  if (uVar11 != 0) {
    thunk_FUN_100664af4(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    uVar8 = uVar12;
    if ((long)param_2 <= (long)uVar12) {
      uVar8 = param_2;
    }
    if ((long)param_2 < 1) {
      uVar8 = param_2;
    }
    if ((long)(uVar11 | uVar8) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb84);
      (*pcVar2)();
    }
    puVar5 = &DAT_100ab7e48;
    FUN_100004bb4(&DAT_100ab7e48,&DAT_100848d08);
    puVar6 = &DAT_100ab7e30;
    FUN_100004bb4(&DAT_100ab7e30,&DAT_100848ce8);
    uVar10 = uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU);
    uVar11 = 0;
    do {
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb68);
        (*pcVar2)();
      }
      if ((long)uVar12 < (long)uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb6c);
        (*pcVar2)();
      }
      uVar11 = uVar12 - uVar8;
      if ((long)uVar12 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb70);
        (*pcVar2)();
      }
      lVar7 = param_1;
      _swift_bridgeObjectRetain();
      uVar4 = (undefined4)lVar7;
      FUN_10062c78c();
      if (puVar5 == puVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb88);
        (*pcVar2)();
      }
      FUN_10067bef4();
      uVar9 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar9) {
        thunk_FUN_100664af4(1 < *(ulong *)(puVar1 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar9 + 1;
      *(undefined4 *)(puVar1 + uVar9 * 4 + 0x20) = uVar4;
      uVar9 = uVar12;
      if ((long)param_2 < 1) {
        if ((0 < (long)uVar11) || ((long)uVar11 <= (long)param_2)) goto LAB_10062cad8;
      }
      else if (param_2 <= uVar11) {
LAB_10062cad8:
        uVar9 = uVar8 + param_2;
        if (SCARRY8(uVar8,param_2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb7c);
          (*pcVar2)();
        }
      }
      if ((long)uVar9 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062cb74);
        (*pcVar2)();
      }
      uVar10 = uVar10 - 1;
      uVar13 = uVar13 - 1;
      uVar11 = uVar8;
      uVar8 = uVar9;
    } while (uVar13 != 0);
  }
  return puVar1;
}

