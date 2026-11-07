// rea decompile_all
// name: FUN_100326a08
// address: 0x100326a08
// body: available
// range: 0x100326a08-0x100326b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100326a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = &DAT_100a85fc8;
  FUN_100004bb4(&DAT_100a85fc8,&DAT_10081a5c8);
  lVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  lVar2 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),1,1,lVar2);
  _swift_allocObject(param_6,0x48,7);
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined8 *)(param_6 + 0x18) = 0;
  *(undefined8 *)(param_6 + 0x20) = param_4;
  *(undefined8 *)(param_6 + 0x28) = param_5;
  *(undefined8 *)(param_6 + 0x30) = param_1;
  *(undefined8 *)(param_6 + 0x38) = param_2;
  *(undefined8 *)(param_6 + 0x40) = param_3;
  _swift_retain(param_5);
  _swift_retain(param_3);
  FUN_10032043c(0,0,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_7,param_6)
  ;
  _swift_release();
  return;
}

