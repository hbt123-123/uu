// rea decompile_all
// name: FUN_10050315c
// address: 0x10050315c
// body: available
// range: 0x10050315c-0x1005032bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050315c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  
  lVar5 = *(long *)(unaff_x20 + 0x48);
  if (lVar5 == 0) {
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    uStack_a0 = 0;
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x50);
    lVar1 = unaff_x20 + 0x30;
    local_b8 = param_1;
    FUN_10003f030(lVar1,lVar5);
    lVar4 = *(long *)(lVar5 + -8);
    lVar3 = *(long *)(lVar4 + 0x40);
    (**(code **)(lVar4 + 0x10))(auStack_c0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1,lVar5);
    (**(code **)(lVar6 + 8))(&local_b0,param_2,param_3,param_4,lVar5,lVar6);
    (**(code **)(lVar4 + 8))(auStack_c0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar5);
    if (local_98 != 0) {
      FUN_1000a0074(&local_b0,auStack_88);
      pcVar2 = (code *)&local_b0;
      FUN_100505f7c(pcVar2,param_4);
      FUN_1005032c0(param_4);
      (*pcVar2)(&local_b0,0);
      FUN_10003f094(auStack_88);
      return;
    }
  }
  FUN_100040bb4(&local_b0,&DAT_100aaa280,&DAT_100835b68);
  return;
}

