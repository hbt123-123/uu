// rea decompile_all
// name: FUN_1002676e4
// address: 0x1002676e4
// body: available
// range: 0x1002676e4-0x1002677e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002676e4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = *(long *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
  lVar3 = *(long *)(param_5 + 0x10);
  if (lVar3 != 0) {
    param_5 = param_5 + 0x20;
    do {
      (*param_3)(&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_1,param_5);
      if (unaff_x21 != 0) {
        (**(code **)(lVar4 + 8))(param_1,lVar1);
        return;
      }
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      (**(code **)(lVar4 + 0x20))
                (param_1,&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),lVar1);
      param_5 = param_5 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

