// rea decompile_all
// name: FUN_100277a34
// address: 0x100277a34
// body: available
// range: 0x100277a34-0x100277acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100277a34(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + -8) + 0x40);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  lVar1 = 0;
  FUN_100277ad0();
  uVar2 = param_1;
  _swift_dynamicCast(param_1,&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2
                     ,lVar1,6);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,(uint)uVar2 ^ 1,1,lVar1);
  return;
}

