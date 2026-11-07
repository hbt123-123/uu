// rea decompile_all
// name: FUN_1005004e0
// address: 0x1005004e0
// body: available
// range: 0x1005004e0-0x100500603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005004e0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  __sSqMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (lVar5 = lVar1, FUN_1004fdea4(), unaff_x21 == 0)) {
    (**(code **)(param_3 + 0x20))(puVar4,(long)(int)lVar5,param_2,param_3);
    lVar5 = *(long *)(param_2 + -8);
    puVar2 = puVar4;
    (**(code **)(lVar5 + 0x30))(puVar4,1,param_2);
    pcVar3 = *(code **)(lVar6 + 8);
    if ((int)puVar2 == 1) {
      (*pcVar3)(puVar4,lVar1);
    }
    else {
      (*pcVar3)(param_1,lVar1);
      (**(code **)(lVar5 + 0x20))(param_1,puVar4,param_2);
      (**(code **)(lVar5 + 0x38))(param_1,0,1,param_2);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}

