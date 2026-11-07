// rea decompile_all
// name: SentrySession::copyWithZone:
// address: 0x100784a58
// body: available
// range: 0x100784a58-0x100784b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySession::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::class(param_1);
  IVar1 = objc_stub::allocWithZone_(IVar1,param_3);
  IVar1 = objc_stub::init(IVar1);
  if (IVar1 != 0) {
    *(undefined8 *)(IVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(IVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(IVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(IVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(IVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(IVar1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(IVar1 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(IVar1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(IVar1 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    IVar2 = objc_stub::environment(param_1);
    objc_stub::setEnvironment_(IVar1,IVar2);
    IVar2 = objc_stub::user(param_1);
    objc_stub::setUser_(IVar1,IVar2);
    *(undefined8 *)(IVar1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(IVar1 + 8) = *(undefined8 *)(param_1 + 8);
  }
  return IVar1;
}

