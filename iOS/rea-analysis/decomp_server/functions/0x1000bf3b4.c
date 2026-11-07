// rea decompile_all
// name: FUN_1000bf3b4
// address: 0x1000bf3b4
// body: available
// range: 0x1000bf3b4-0x1000bf5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bf5c0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bf3b4(long param_1,undefined2 param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_a0 [16];
  int local_90;
  undefined8 local_80;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar1 = (code *)(unaff_x20 + 0x48);
  _swift_beginAccess(pcVar1,auStack_60,0,0);
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    local_80 = 0x56b657962;
    _GetApplicationEventTarget();
    _swift_beginAccess(unaff_x20 + 0x48,local_78,0x21,0);
    _InstallEventHandler(pcVar1,FUN_1000bfb54,1,&local_80);
    pcVar2 = (code *)local_78;
    _swift_endAccess();
    __s6Darwin5noErrs5Int32Vvg();
    iVar5 = (int)pcVar1;
    pcVar1 = pcVar2;
    if (iVar5 != (int)pcVar2) {
      uVar3 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
      pcVar1 = FUN_1000c13e8;
      local_90 = iVar5;
      FUN_1003fb4bc(FUN_1000c13e8,auStack_a0,0xd00000000000009f,0x8000000100882d60,
                    0xd000000000000024,0x8000000100883670,0x38a,0);
    }
    __s6Darwin5noErrs5Int32Vvg();
    if (iVar5 != (int)pcVar1) goto LAB_1000bf584;
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000bf5c0);
    (*pcVar1)();
  }
  uVar4 = (uint)param_1;
  if ((uVar4 >> 0x12 & 1) == 0) {
    if ((uVar4 >> 0x13 & 1) != 0) {
      uVar6 = 0x800;
      if ((uVar4 >> 0x14 & 1) == 0) goto LAB_1000bf548;
LAB_1000bf544:
      uVar6 = uVar6 | 0x100;
      goto LAB_1000bf548;
    }
    if ((uVar4 >> 0x14 & 1) != 0) {
      uVar6 = 0;
      goto LAB_1000bf544;
    }
    if ((uVar4 >> 0x11 & 1) == 0) goto LAB_1000bf584;
    uVar6 = 0x200;
  }
  else {
    if ((uVar4 >> 0x13 & 1) == 0) {
      uVar6 = 0x1000;
    }
    else {
      uVar6 = 0x1800;
    }
    if ((uVar4 >> 0x14 & 1) != 0) goto LAB_1000bf544;
LAB_1000bf548:
    if ((uVar4 >> 0x11 & 1) != 0) {
      uVar6 = uVar6 | 0x200;
    }
  }
  local_78[0] = 0;
  _GetApplicationEventTarget();
  _RegisterEventHotKey(param_2,uVar6,0x15053484b,pcVar1,0,local_78);
  *(undefined8 *)(unaff_x20 + 0x40) = local_78[0];
LAB_1000bf584:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

