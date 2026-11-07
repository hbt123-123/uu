// rea decompile_all
// name: FUN_10026cc28
// address: 0x10026cc28
// body: available
// range: 0x10026cc28-0x10026cd17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10026cc28(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  iVar1 = (int)&local_b0;
  FUN_10026c920();
  FUN_1000a0074(auStack_58,auStack_80);
  puVar2 = &DAT_100a81450;
  FUN_100004bb4(&DAT_100a81450,&DAT_1008157f0);
  puVar3 = &DAT_100a81458;
  FUN_100004bb4(&DAT_100a81458,&DAT_100815630);
  _swift_dynamicCast(&local_b0,auStack_80,puVar2,puVar3,6);
  if (iVar1 == 0) {
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_10026cd18(&local_b0);
    local_40 = 0;
    lStack_38 = 2;
  }
  else {
    FUN_1000a0074(&local_b0,auStack_58);
    FUN_10003f030(auStack_58,local_40);
    (**(code **)(lStack_38 + 8))(local_40,lStack_38);
    FUN_10003f094(auStack_58);
  }
  auVar4._8_8_ = lStack_38;
  auVar4._0_8_ = local_40;
  return auVar4;
}

