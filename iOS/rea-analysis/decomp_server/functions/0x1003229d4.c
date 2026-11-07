// rea decompile_all
// name: FUN_1003229d4
// address: 0x1003229d4
// body: available
// range: 0x1003229d4-0x100322aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003229d4(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_100004bb4(param_4,param_5);
  lVar2 = *(long *)(param_4 + -8);
  lVar3 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,param_4);
  uVar1 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar4 = uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff);
  _swift_allocObject(param_6,uVar4 + lVar3,uVar1 | 7);
  (**(code **)(lVar2 + 0x20))
            (param_6 + uVar4,&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_4
            );
  (*param_2)(param_7,param_6);
  _swift_release(param_6);
  return;
}

