// rea decompile_all
// name: FUN_100392138
// address: 0x100392138
// body: available
// range: 0x100392138-0x100392217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100392138(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID local_48;
  undefined4 local_3c;
  int iStack_38;
  undefined4 local_34;
  
  lVar1 = param_1[1];
  if (*param_1 == 0) {
    thunk_FUN_10037c5d4(*(undefined8 *)(lVar1 + 8));
  }
  else {
    FUN_10037c148();
  }
  while( true ) {
    IVar3 = *(ID *)(lVar1 + 8);
    if (*(long *)(IVar3 + 0x10) == *(long *)(IVar3 + 8)) break;
    FUN_10037d394(IVar3,&local_3c);
    local_48 = IVar3;
    IVar3 = objc_stub::length(IVar3);
    if (IVar3 != 0) {
      FUN_10037c810(*(undefined8 *)(lVar1 + 8),&local_3c);
      lVar2 = param_2;
      FUN_100385ff8(param_2,&local_48);
      if (lVar2 == 0) {
        if (iStack_38 != 0) {
          FUN_10038e0c8(param_2,&local_48,&local_48,&local_3c);
        }
      }
      else if (iStack_38 == 0) {
        FUN_10038e370(param_2);
      }
      else {
        *(ulong *)(lVar2 + 0x18) = CONCAT44(iStack_38,local_3c);
        *(undefined4 *)(lVar2 + 0x20) = local_34;
      }
    }
  }
  return;
}

