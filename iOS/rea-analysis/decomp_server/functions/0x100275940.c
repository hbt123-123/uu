// rea decompile_all
// name: FUN_100275940
// address: 0x100275940
// body: available
// range: 0x100275940-0x100275a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100275940(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  uVar3 = param_3;
  uVar4 = param_4;
  (**(code **)(param_4 + 0x10))();
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    (**(code **)(param_4 + 8))
              (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_3,param_4);
    __s10Foundation3URLV22appendingPathComponentyACSSF(param_1,uVar3,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    (**(code **)(*(long *)(param_3 - 8) + 8))(param_2,param_3);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar2);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  (**(code **)(param_4 + 8))(param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000100275a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 - 8) + 8))(param_2,param_3);
  return;
}

