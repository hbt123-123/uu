// rea decompile_all
// name: FUN_1001ed6d4
// address: 0x1001ed6d4
// body: available
// range: 0x1001ed6d4-0x1001ed85f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ed7cc to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ed6d4(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (*(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController) != 0) {
    return;
  }
  FUN_1001f98b0();
  uVar3 = (uint)(param_2 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((param_2 & 0xff000000000000) == 0) {
LAB_1001ed7b4:
        FUN_100006cdc(param_1,param_2);
        return;
      }
    }
    else if ((long)(int)param_1 == param_1 >> 0x20) goto LAB_1001ed7b4;
  }
  else if ((uVar5 != 2) || (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)))
  goto LAB_1001ed7b4;
  plVar1 = (long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::scrollbackBuffer);
  _swift_beginAccess(plVar1,auStack_48,0x21,0);
  __s10Foundation4DataV6appendyyACF(param_1,param_2);
  _swift_endAccess(auStack_48);
  lVar2 = *plVar1;
  uVar3 = (uint)((ulong)plVar1[1] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  iVar6 = (int)lVar2;
  iVar7 = (int)((ulong)lVar2 >> 0x20);
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) goto LAB_1001ed840;
    if (SBORROW4(iVar7,iVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001ed854);
      (*pcVar4)();
    }
    lVar8 = (long)(iVar7 - iVar6);
  }
  else {
    if (uVar5 != 2) goto LAB_1001ed840;
    lVar8 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
    if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001ed858);
      (*pcVar4)();
    }
  }
  if (0x40000 < lVar8) {
    if ((ulong)plVar1[1] >> 0x3e == 2) {
      lVar8 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
      if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001ed804);
        (*pcVar4)();
      }
    }
    else {
      if (SBORROW4(iVar7,iVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001ed860);
        (*pcVar4)();
      }
      lVar8 = (long)(iVar7 - iVar6);
    }
    if (SBORROW8(lVar8,0x40000)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001ed85c);
      (*pcVar4)();
    }
    _swift_beginAccess(plVar1,auStack_48,0x21,0);
    FUN_1001ed968(lVar8 + -0x40000);
    _swift_endAccess(auStack_48);
  }
LAB_1001ed840:
  FUN_100006cdc(param_1,param_2);
  return;
}

