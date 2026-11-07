// rea decompile_all
// name: FUN_100532248
// address: 0x100532248
// body: available
// range: 0x100532248-0x100532367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100532248(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_1000efc08(auStack_58);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  FUN_1000b142c(auStack_58,auStack_a8);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar3 = &DAT_100aab448;
  FUN_100004bb4(&DAT_100aab448,&DAT_100837b00);
  puVar4 = &local_80;
  _swift_dynamicCast(puVar4,auStack_a8,puVar2,puVar3,0xe);
  lVar1 = local_60;
  uVar5 = local_68;
  if ((int)puVar4 == 0) {
    local_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    FUN_100040bb4(&local_80,&DAT_100aab450,&DAT_1008388b0);
    uVar5 = 0;
  }
  else {
    FUN_10003f030(&local_80,local_68);
    (**(code **)(lVar1 + 0x10))(uVar5,lVar1);
    FUN_10003f094(&local_80);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_2 + 0x40));
  *(undefined8 *)(param_2 + 0x40) = uVar5;
  FUN_10052b9c0();
  FUN_10003f094(auStack_58);
  return;
}

