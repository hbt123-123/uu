// rea decompile_all
// name: FUN_1006718cc
// address: 0x1006718cc
// body: available
// range: 0x1006718cc-0x100671c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100671bb8 to 0x1006717b8 FUN_1006717b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006718cc(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x20;
  
  puVar9 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  puVar10 = puVar9;
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 8;
  *(undefined8 *)(puVar10 + 0x10) = 4;
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 < 5) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bc0);
    (*pcVar8)();
  }
  uVar2 = *(undefined1 *)(param_1 + 0x24);
  puVar10[0x20] = uVar2;
  if (uVar13 == 5) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bc4);
    (*pcVar8)();
  }
  uVar3 = *(undefined1 *)(param_1 + 0x25);
  puVar10[0x21] = uVar3;
  if (uVar13 < 7) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bc8);
    (*pcVar8)();
  }
  uVar4 = *(undefined1 *)(param_1 + 0x26);
  puVar10[0x22] = uVar4;
  if (uVar13 == 7) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bcc);
    (*pcVar8)();
  }
  uVar5 = *(undefined1 *)(param_1 + 0x27);
  puVar10[0x23] = uVar5;
  puVar11 = &DAT_100ab7e48;
  FUN_100004bb4(&DAT_100ab7e48,&DAT_100848d08);
  puVar12 = &DAT_100ab7e30;
  FUN_100004bb4(&DAT_100ab7e30,&DAT_100848ce8);
  if (puVar11 == puVar12) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c24);
    (*pcVar8)();
  }
  FUN_10067bef4(puVar10,0);
  puVar11 = puVar9;
  _swift_allocObject(puVar9,0x24,7);
  *(undefined8 *)(puVar11 + 0x18) = 8;
  *(undefined8 *)(puVar11 + 0x10) = 4;
  uVar6 = *(undefined1 *)(param_1 + 0x20);
  puVar11[0x20] = uVar6;
  uVar7 = *(undefined1 *)(param_1 + 0x21);
  puVar11[0x21] = uVar7;
  puVar11[0x22] = uVar2;
  puVar11[0x23] = uVar3;
  FUN_10067bef4();
  puVar12 = puVar9;
  _swift_allocObject(puVar9,0x24,7);
  *(undefined8 *)(puVar12 + 0x18) = 8;
  *(undefined8 *)(puVar12 + 0x10) = 4;
  puVar12[0x20] = uVar6;
  puVar12[0x21] = uVar7;
  uVar2 = *(undefined1 *)(param_1 + 0x22);
  puVar12[0x22] = uVar2;
  uVar3 = *(undefined1 *)(param_1 + 0x23);
  puVar12[0x23] = uVar3;
  FUN_10067bef4();
  _swift_allocObject(puVar9,0x24,7);
  *(undefined8 *)(puVar9 + 0x18) = 8;
  *(undefined8 *)(puVar9 + 0x10) = 4;
  puVar9[0x20] = uVar2;
  puVar9[0x21] = uVar3;
  puVar9[0x22] = uVar4;
  puVar9[0x23] = uVar5;
  FUN_10067bef4();
  uVar13 = *(ulong *)(unaff_x20 + 0x28);
  if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bd0);
    (*pcVar8)();
  }
  uVar1 = *(uint *)(uVar13 + 0x20);
  uVar15 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x28) = uVar13;
  if ((uVar15 & 1) == 0) {
    FUN_1006541cc();
    lVar14 = *(long *)(uVar13 + 0x10);
  }
  else {
    lVar14 = *(long *)(uVar13 + 0x10);
  }
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671be8);
    (*pcVar8)();
  }
  *(uint *)(uVar13 + 0x20) = uVar1 ^ (uint)puVar10;
  *(ulong *)(unaff_x20 + 0x28) = uVar13;
  if (lVar14 == 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bec);
    (*pcVar8)();
  }
  uVar15 = *(ulong *)(uVar13 + 0x10);
  if (uVar15 < 2) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bf0);
    (*pcVar8)();
  }
  *(uint *)(uVar13 + 0x24) = *(uint *)(uVar13 + 0x24) ^ (uint)puVar11;
  *(ulong *)(unaff_x20 + 0x28) = uVar13;
  if (uVar15 == 2) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bf4);
    (*pcVar8)();
  }
  uVar15 = *(ulong *)(uVar13 + 0x10);
  if (uVar15 < 3) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bf8);
    (*pcVar8)();
  }
  *(uint *)(uVar13 + 0x28) = *(uint *)(uVar13 + 0x28) ^ (uint)puVar12;
  *(ulong *)(unaff_x20 + 0x28) = uVar13;
  if (uVar15 == 3) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671bfc);
    (*pcVar8)();
  }
  uVar15 = *(ulong *)(uVar13 + 0x10);
  if (uVar15 < 4) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c00);
    (*pcVar8)();
  }
  *(uint *)(uVar13 + 0x2c) = *(uint *)(uVar13 + 0x2c) ^ (uint)puVar9;
  *(ulong *)(unaff_x20 + 0x28) = uVar13;
  if (uVar15 == 4) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c04);
    (*pcVar8)();
  }
  uVar15 = *(ulong *)(uVar13 + 0x10);
  if (uVar15 < 5) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c08);
    (*pcVar8)();
  }
  *(uint *)(uVar13 + 0x30) = *(uint *)(uVar13 + 0x30) ^ (uint)puVar10;
  *(ulong *)(unaff_x20 + 0x28) = uVar13;
  if (uVar15 == 5) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c0c);
    (*pcVar8)();
  }
  uVar15 = *(ulong *)(uVar13 + 0x10);
  if (5 < uVar15) {
    *(uint *)(uVar13 + 0x34) = *(uint *)(uVar13 + 0x34) ^ (uint)puVar11;
    *(ulong *)(unaff_x20 + 0x28) = uVar13;
    if (uVar15 == 6) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c14);
      (*pcVar8)();
    }
    uVar15 = *(ulong *)(uVar13 + 0x10);
    if (uVar15 < 7) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c18);
      (*pcVar8)();
    }
    *(uint *)(uVar13 + 0x38) = *(uint *)(uVar13 + 0x38) ^ (uint)puVar12;
    *(ulong *)(unaff_x20 + 0x28) = uVar13;
    if (uVar15 == 7) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c1c);
      (*pcVar8)();
    }
    if (*(ulong *)(uVar13 + 0x10) < 8) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c20);
      (*pcVar8)();
    }
    *(uint *)(uVar13 + 0x3c) = *(uint *)(uVar13 + 0x3c) ^ (uint)puVar9;
    *(ulong *)(unaff_x20 + 0x28) = uVar13;
    FUN_1006717b8();
    FUN_1006717b8();
    FUN_1006717b8();
    FUN_1006717b8();
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100671c10);
  (*pcVar8)();
}

