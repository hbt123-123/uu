// rea decompile_all
// name: FUN_100687f4c
// address: 0x100687f4c
// body: available
// range: 0x100687f4c-0x10068803f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068803c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_100687f4c(ID *param_1,ulong param_2)

{
  undefined8 uVar1;
  ID *pIVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_50 [3];
  undefined8 local_38;
  
  pIVar2 = local_50;
  IVar4 = *param_1;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
    FUN_10004003c(0,&DAT_100ab9ed8,&PTR__OBJC_CLASS___NSObject_100a65960);
    local_38 = uVar1;
    if (IVar4 == 0) {
      puVar3 = &_OBJC_CLASS___NSNull;
      _objc_allocWithZone();
      IVar4 = _objc_msgSend((ID)puVar3,"init");
    }
    local_50[0] = IVar4;
    FUN_10067f3d8(local_50);
    return (undefined1 *)pIVar2;
  }
  uVar1 = 0;
  FUN_10004003c(0,&DAT_100ab9ed8,&PTR__OBJC_CLASS___NSObject_100a65960);
  local_38 = uVar1;
  if (IVar4 == 0) {
    puVar3 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar3,"init");
  }
  local_50[0] = IVar4;
  FUN_10067f3d8(local_50);
  return (undefined1 *)0x0;
}

