// rea decompile_all
// name: FUN_100500604
// address: 0x100500604
// body: available
// range: 0x100500604-0x100500713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100500604(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  __sSqMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffa0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (lVar4 = lVar1, FUN_1004fdea4(), unaff_x21 == 0)) {
    (**(code **)(param_3 + 0x20))(puVar3,(long)(int)lVar4,param_2,param_3);
    lVar4 = *(long *)(param_2 + -8);
    puVar2 = puVar3;
    (**(code **)(lVar4 + 0x30))(puVar3,1,param_2);
    if ((int)puVar2 == 1) {
      (**(code **)(lVar5 + 8))(puVar3,lVar1);
    }
    else {
      (**(code **)(lVar4 + 8))(param_1,param_2);
      (**(code **)(lVar4 + 0x20))(param_1,puVar3,param_2);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}

