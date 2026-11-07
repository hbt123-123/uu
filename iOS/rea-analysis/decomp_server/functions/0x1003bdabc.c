// rea decompile_all
// name: FUN_1003bdabc
// address: 0x1003bdabc
// body: available
// range: 0x1003bdabc-0x1003bdb43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bdabc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess(param_2 + 3,auStack_58,0x21,0);
  uVar1 = 0;
  __sSDMa(0,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58),
          *(undefined8 *)(lVar2 + 0x60));
  __sSD11removeValue6forKeyq_Sgx_tF(param_1,param_3,uVar1);
  _swift_endAccess(auStack_58);
  return;
}

