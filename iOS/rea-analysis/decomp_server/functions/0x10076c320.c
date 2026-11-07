// rea decompile_all
// name: FUN_10076c320
// address: 0x10076c320
// body: available
// range: 0x10076c320-0x10076c3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10076c320(ulong *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  ulong uStack_28;
  
  uVar2 = *param_1;
  if (uVar2 == 0xfffffffffffffb2d) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = (ulong)"__sentrycrash__async_marker__";
    param_1[4] = 0;
  }
  else {
    if (param_2 == 0) {
      lVar3 = (uVar2 & 0xfffffffffffffffc) - 1;
      FUN_10079a474(lVar3,&local_40);
      iVar1 = (int)lVar3;
    }
    else {
      _dladdr(uVar2,&local_40);
      iVar1 = (int)uVar2;
    }
    if (iVar1 == 0) {
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      return 0;
    }
    param_1[2] = uStack_38;
    param_1[1] = local_40;
    param_1[3] = local_30;
    param_1[4] = uStack_28;
  }
  return 1;
}

