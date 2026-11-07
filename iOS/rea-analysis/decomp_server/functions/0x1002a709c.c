// rea decompile_all
// name: FUN_1002a709c
// address: 0x1002a709c
// body: available
// range: 0x1002a709c-0x1002a719b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002a7130) */

void FUN_1002a709c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [16];
  
  lVar2 = *(long *)(*(long *)(param_5 + -8) + 0x40);
  lVar1 = 0;
  __ss6ResultOMa(0,param_4,param_5,param_6);
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = (long)(auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_2)(lVar3,auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  _swift_storeEnumTagMultiPayload(lVar3,lVar1,0);
  (**(code **)(lVar4 + 0x20))(param_1,lVar3,lVar1);
  return;
}

