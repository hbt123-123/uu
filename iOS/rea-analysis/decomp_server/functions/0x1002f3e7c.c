// rea decompile_all
// name: FUN_1002f3e7c
// address: 0x1002f3e7c
// body: available
// range: 0x1002f3e7c-0x1002f3f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f3e7c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_80 [16];
  long alStack_70 [2];
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  puVar1 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar2 = -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = local_60 + lVar2;
  if (param_1 != 0) {
    if (param_3 == 0) {
      lVar2 = 0;
      FUN_100277ad0();
    }
    else {
      _swift_getErrorValue(param_3,auStack_48,local_60);
      *(long *)((long)alStack_70 + lVar2) = param_3;
      FUN_100277c6c(puVar3,FUN_1002f8018,auStack_80 + lVar2,uStack_58,local_50);
      lVar2 = 0;
      FUN_100277ad0();
    }
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_3 == 0,1);
    FUN_1002cb034(param_2,puVar3);
    FUN_100040bb4(puVar3,&DAT_100a82460,&DAT_1008175c0);
  }
  return;
}

