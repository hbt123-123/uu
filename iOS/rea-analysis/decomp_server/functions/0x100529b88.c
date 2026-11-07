// rea decompile_all
// name: FUN_100529b88
// address: 0x100529b88
// body: available
// range: 0x100529b88-0x100529c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100529b88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  long local_50;
  
  FUN_10050fb8c(param_1,auStack_68);
  FUN_100040bb4(auStack_68,&DAT_100aaa288,&DAT_100836090);
  if (local_50 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar3 = *(long *)(param_3 + 0x20);
    FUN_10003f030(param_3,uVar1);
    (**(code **)(lVar3 + 0x20))(auStack_68,param_2,&DAT_1009d0110,&PTR_PTR_1009d0138,uVar1,lVar3);
    if (unaff_x21 == 0) {
      FUN_10050eef0(auStack_68,param_1);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100529c9c);
      (*pcVar2)();
    }
    lVar4 = *(long *)(param_1 + 0x20);
    FUN_1000ce034(param_1,lVar3);
    (**(code **)(lVar4 + 0x28))(param_2,&DAT_1009d0110,&PTR_PTR_1009d0138,lVar3,lVar4);
  }
  return;
}

