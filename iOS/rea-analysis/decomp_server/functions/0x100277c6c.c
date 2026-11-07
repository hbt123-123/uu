// rea decompile_all
// name: FUN_100277c6c
// address: 0x100277c6c
// body: available
// range: 0x100277c6c-0x100277dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100277c6c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  
  puVar1 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar5 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar6);
  lVar2 = 0;
  FUN_100277ad0();
  puVar3 = puVar5;
  _swift_dynamicCast(puVar5,lVar6,param_4,lVar2,6);
  lVar6 = *(long *)(lVar2 + -8);
  pcVar4 = *(code **)(lVar6 + 0x38);
  if (((ulong)puVar3 & 1) == 0) {
    (*pcVar4)(puVar5,1,1,lVar2);
    (*param_2)(param_1);
    puVar3 = puVar5;
    (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
    if ((int)puVar3 != 1) {
      FUN_100040bb4(puVar5,&DAT_100a82460,&DAT_1008175c0);
    }
  }
  else {
    (*pcVar4)(puVar5,0,1,lVar2);
    FUN_1000823d8(puVar5,param_1,FUN_100277ad0);
  }
  return;
}

