// rea decompile_all
// name: FUN_10051fc7c
// address: 0x10051fc7c
// body: available
// range: 0x10051fc7c-0x10051fe17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10051fdec to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051fc7c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar15 = param_1[2];
  uVar9 = *(undefined1 *)(param_1 + 3);
  uVar2 = param_1[4];
  uVar6 = param_1[5];
  uVar16 = param_1[8];
  if ((param_2 & 1) == 0) {
    _swift_isUniquelyReferenced_nonNull_native();
    lVar17 = param_1[8];
    if ((uVar16 & 1) == 0) {
      FUN_1004fd240();
    }
    if (*(ulong *)(lVar17 + 0x10) <= (ulong)param_1[6]) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10051fe18);
      (*pcVar11)();
    }
    plVar14 = (long *)param_1[7];
    lVar13 = lVar17 + param_1[6] * 0x30;
    uVar3 = *(undefined8 *)(lVar13 + 0x20);
    uVar7 = *(undefined8 *)(lVar13 + 0x28);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    uVar4 = *(undefined8 *)(lVar13 + 0x40);
    uVar8 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x20) = uVar1;
    *(undefined8 *)(lVar13 + 0x28) = uVar5;
    *(undefined8 *)(lVar13 + 0x30) = uVar15;
    uVar10 = *(undefined1 *)(lVar13 + 0x38);
    *(undefined1 *)(lVar13 + 0x38) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar2;
    *(undefined8 *)(lVar13 + 0x48) = uVar6;
    FUN_10051ff3c(uVar3,uVar7,uVar12,uVar10);
    FUN_100006cdc(uVar4,uVar8);
    *plVar14 = lVar17;
  }
  else {
    FUN_10051fe90(uVar1,uVar5,uVar15,uVar9);
    FUN_100008184(uVar2,uVar6);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar17 = param_1[8];
    if ((uVar16 & 1) == 0) {
      FUN_1004fd240();
    }
    if (*(ulong *)(lVar17 + 0x10) <= (ulong)param_1[6]) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10051fe04);
      (*pcVar11)();
    }
    plVar14 = (long *)param_1[7];
    lVar13 = lVar17 + param_1[6] * 0x30;
    uVar3 = *(undefined8 *)(lVar13 + 0x20);
    uVar7 = *(undefined8 *)(lVar13 + 0x28);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    uVar4 = *(undefined8 *)(lVar13 + 0x40);
    uVar8 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x20) = uVar1;
    *(undefined8 *)(lVar13 + 0x28) = uVar5;
    *(undefined8 *)(lVar13 + 0x30) = uVar15;
    uVar10 = *(undefined1 *)(lVar13 + 0x38);
    *(undefined1 *)(lVar13 + 0x38) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar2;
    *(undefined8 *)(lVar13 + 0x48) = uVar6;
    FUN_10051ff3c(uVar3,uVar7,uVar12,uVar10);
    FUN_100006cdc(uVar4,uVar8);
    *plVar14 = lVar17;
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    FUN_10051ff3c(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
    FUN_100006cdc(uVar1,uVar2);
  }
  _free(param_1);
  return;
}

