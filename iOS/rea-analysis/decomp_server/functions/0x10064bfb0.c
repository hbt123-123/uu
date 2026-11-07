// rea decompile_all
// name: FUN_10064bfb0
// address: 0x10064bfb0
// body: available
// range: 0x10064bfb0-0x10064c1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10064c1f4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064bfb0(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  undefined1 local_81;
  undefined1 local_80 [24];
  undefined *local_68;
  undefined *local_60;
  ulong local_58;
  ulong uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = *unaff_x20;
  uVar10 = unaff_x20[1];
  lVar3 = unaff_x20[2];
  lVar15 = unaff_x20[3];
  lVar6 = lVar1;
  uVar11 = uVar10;
  FUN_10065f798(lVar1,uVar10,(char)lVar3,lVar15);
  if (SCARRY8(lVar6,7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10064c1e4);
    (*pcVar4)();
  }
  if ((long)(lVar6 + 7U) < 8) {
    uVar10 = 0;
    uVar11 = 0xc000000000000000;
    goto LAB_10064c1b0;
  }
  uVar16 = lVar6 + 7U >> 3;
  uVar13 = uVar16;
  FUN_10009a308();
  local_58 = uVar13;
  uStack_50 = uVar11;
  FUN_100643424();
  FUN_10064c1f8(&local_58,uVar16,lVar1,uVar10,(char)lVar3,lVar15);
  uVar11 = uStack_50;
  uVar10 = local_58;
  uVar2 = (uint)(uStack_50 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  iVar5 = (int)local_58;
  iVar14 = (int)(local_58 >> 0x20);
  if (uVar2 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((uStack_50 >> 0x30 & 0xff) == 0) goto LAB_10064c1b0;
    }
    else {
      if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10064c1f0);
        (*pcVar4)();
      }
      if (iVar14 - iVar5 < 1) goto LAB_10064c1b0;
    }
  }
  else {
    if (uVar12 != 2) goto LAB_10064c1b0;
    if (SBORROW8(*(long *)(local_58 + 0x18),*(long *)(local_58 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064c1ec);
      (*pcVar4)();
    }
    if (*(long *)(local_58 + 0x18) - *(long *)(local_58 + 0x10) < 1) goto LAB_10064c1b0;
  }
  if (uVar12 == 2) {
    uVar13 = *(long *)(local_58 + 0x18) - *(long *)(local_58 + 0x10);
    if (SBORROW8(*(long *)(local_58 + 0x18),*(long *)(local_58 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064c0e0);
      (*pcVar4)();
    }
  }
  else if (uVar12 == 1) {
    if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064c1f4);
      (*pcVar4)();
    }
    uVar13 = (ulong)(iVar14 - iVar5);
  }
  else {
    uVar13 = uStack_50 >> 0x30 & 0xff;
  }
  uVar16 = uVar13 + 1;
  if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10064c1e8);
    (*pcVar4)();
  }
  FUN_1001e770c();
  local_80[0] = (undefined1)unaff_x20[4];
  uVar2 = (uint)(uStack_50 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    uVar13 = uStack_50 >> 0x30 & 0xff;
    if (uVar12 != 0) {
      uVar13 = (long)uVar16 >> 0x20;
    }
  }
  else if (uVar12 == 2) {
    uVar13 = *(ulong *)(uVar16 + 0x18);
  }
  else {
    uVar13 = 0;
  }
  puVar7 = &DAT_100ab9058;
  local_58 = uVar16;
  FUN_100004bb4(&DAT_100ab9058,&DAT_10084b158);
  puVar8 = puVar7;
  local_68 = puVar7;
  FUN_10064cb70();
  puVar9 = local_80;
  local_60 = puVar8;
  FUN_10003f030(puVar9,puVar7);
  local_81 = *puVar9;
  __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
            (uVar13,uVar13,&local_81,1);
  FUN_10003f094(local_80);
  __s10Foundation4DataV6appendyyACF(uVar10,uVar11);
  FUN_100006cdc(uVar10,uVar11);
  uVar10 = local_58;
  uVar11 = uStack_50;
LAB_10064c1b0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar10,uVar11);
  }
  return;
}

