// rea decompile_all
// name: FUN_1001e7094
// address: 0x1001e7094
// body: available
// range: 0x1001e7094-0x1001e7383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e7380 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e7094(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  char local_c9 [33];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 auStack_a6 [6];
  char local_a0 [24];
  undefined *local_88;
  undefined *local_80;
  long local_78;
  ulong uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar12 = uVar1 >> 0x1e;
  iVar10 = (int)param_2;
  iVar7 = (int)(param_2 >> 0x20);
  if (uVar1 >> 0x1e < 2) {
    if (uVar12 == 0) {
      uVar8 = param_3 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar7,iVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e737c);
        (*pcVar2)();
      }
      uVar8 = (ulong)(iVar7 - iVar10);
    }
  }
  else if (uVar12 == 2) {
    uVar8 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
    if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e7100);
      (*pcVar2)();
    }
  }
  else {
    uVar8 = 0;
  }
  lVar3 = uVar8 + 0x10;
  if (SCARRY8(uVar8,0x10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e7374);
    (*pcVar2)();
  }
  uVar11 = param_1 >> 0x20;
  uVar8 = param_2;
  FUN_1001e770c();
  local_78 = lVar3;
  uStack_70 = uVar8;
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&DAT_100a74858,&DAT_100a7485c);
  uVar1 = (uint)(uStack_70 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar8 = uStack_70 >> 0x30 & 0xff;
    if (uVar9 != 0) {
      uVar8 = local_78 >> 0x20;
    }
  }
  else if (uVar9 == 2) {
    uVar8 = *(ulong *)(local_78 + 0x18);
  }
  else {
    uVar8 = 0;
  }
  puVar4 = &DAT_100a7d500;
  FUN_100004bb4(&DAT_100a7d500,&DAT_100812820);
  puVar5 = puVar4;
  local_88 = puVar4;
  FUN_1001e77a8();
  local_a0[0] = '\x01';
  pcVar6 = local_a0;
  local_80 = puVar5;
  FUN_10003f030(pcVar6,puVar4);
  local_c9[0] = *pcVar6;
  __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
            (uVar8,uVar8,local_c9,1);
  FUN_10003f094(local_a0);
  uVar1 = (uint)(uStack_70 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar8 = uStack_70 >> 0x30 & 0xff;
    if (uVar9 != 0) {
      uVar8 = local_78 >> 0x20;
    }
  }
  else if (uVar9 == 2) {
    uVar8 = *(ulong *)(local_78 + 0x18);
  }
  else {
    uVar8 = 0;
  }
  local_a0[0] = (char)param_1 + '\x01';
  pcVar6 = local_a0;
  local_88 = puVar4;
  local_80 = puVar5;
  FUN_10003f030(pcVar6,puVar4);
  local_c9[0] = *pcVar6;
  __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
            (uVar8,uVar8,local_c9,1);
  FUN_10003f094(local_a0);
  local_a8 = (undefined1)(param_1 >> 0x10);
  local_a7 = (undefined1)(param_1 >> 0x18);
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&local_a8,auStack_a6);
  FUN_1001e77f8();
  if (*(long *)(uVar11 + 0x10) != 0) {
    __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
              (uVar11 + 0x20,uVar11 + 0x20 + *(long *)(uVar11 + 0x10));
  }
  _swift_bridgeObjectRelease();
  if (uVar12 < 2) {
    if (uVar12 == 0) {
      uVar8 = param_3 >> 0x30 & 0xff;
      goto LAB_1001e72f8;
    }
    if (SBORROW4(iVar7,iVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e7380);
      (*pcVar2)();
    }
    uVar8 = (ulong)(iVar7 - iVar10);
  }
  else {
    if (uVar12 != 2) {
      uVar8 = 0;
      goto LAB_1001e72f8;
    }
    uVar8 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
    if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e72d4);
      (*pcVar2)();
    }
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e7378);
    (*pcVar2)();
  }
  if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e72f4);
    (*pcVar2)();
  }
LAB_1001e72f8:
  FUN_1001e77f8();
  if (*(long *)(uVar8 + 0x10) != 0) {
    __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
              (uVar8 + 0x20,uVar8 + 0x20 + *(long *)(uVar8 + 0x10));
  }
  _swift_bridgeObjectRelease();
  __s10Foundation4DataV6appendyyACF(param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_78,uStack_70);
  }
  return;
}

