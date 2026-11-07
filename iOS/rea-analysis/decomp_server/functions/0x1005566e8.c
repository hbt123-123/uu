// rea decompile_all
// name: FUN_1005566e8
// address: 0x1005566e8
// body: available
// range: 0x1005566e8-0x1005567d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100556790 to 0x1004f9e80 FUN_1004f9e80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005566e8(ulong param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  if (param_2 == 0) {
    FUN_1004f9e80("0x",2);
    return;
  }
  if (!SBORROW8(param_2,1)) {
    FUN_1005566e8(param_1 >> 4,param_2 + -1);
    uVar1 = (uint)param_1 & 0xf;
    bVar2 = (byte)param_1 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    uVar6 = *unaff_x20;
    uVar4 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      FUN_100506f84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100506f84(uVar6,uVar4 + 1,1,uVar5);
    }
    *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
    *(byte *)(uVar6 + uVar4 + 0x20) = bVar2;
    *unaff_x20 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100556798);
  (*pcVar3)();
}

