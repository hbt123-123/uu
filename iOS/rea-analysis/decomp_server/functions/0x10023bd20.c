// rea decompile_all
// name: FUN_10023bd20
// address: 0x10023bd20
// body: available
// range: 0x10023bd20-0x10023bde3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10023bd20(undefined8 param_1)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  ID unaff_x20;
  ID local_28;
  
  _objc_retainAutorelease();
  IVar1 = _objc_msgSend(unaff_x20,"performSelector:","advertisingIdentifier");
  if (IVar1 != 0) {
    _swift_unknownObjectRetain();
    lVar2 = 0;
    local_28 = IVar1;
    __s10Foundation4UUIDVMa();
    uVar3 = param_1;
    _swift_dynamicCast(param_1,&local_28,PTR___syXlN_100995e80 + 8,lVar2,6);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,(uint)uVar3 ^ 1,1,lVar2);
    return;
  }
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010023bde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(IVar1 - 8) + 0x38))(param_1,1,1,IVar1);
  return;
}

